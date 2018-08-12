#include "llvm/Pass.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/Instructions.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/IR/LegacyPassManager.h"
#include "llvm/IR/InstIterator.h"
#include "llvm/Transforms/IPO/PassManagerBuilder.h"

#include <unordered_set>
#include <fstream>

using namespace llvm;
using namespace std;

#define DEBUG_TYPE "CFG"

struct CFG : public FunctionPass {
	static char ID; // Pass identification, replacement for typeid
	CFG() : FunctionPass(ID) {}

	unordered_set<Function *> func_set;
	unordered_set<string> skip_func_set;

	bool runOnFunction(Function &F) override {
		if (F.getName().compare("SyS_open") != 0)
			return false;

		loadSkipFunc("./cfg/skip.func");


		errs() << "Control Flow Graph for System Call: " << F.getName() << "  \n";
		errs() << "Please note that every function will be expanded only once!!! \n";

		errs() << "\n`" << F.getName() << "`  \n";
		DFSRecursive(&F, 1);
		return false;
	}

	bool DFSRecursive(Function * F, int level){
		//processing all instruction in a basicblock
		for (Function::iterator bb = F->begin(), fe=F->end(); bb != fe; ++bb) {
			for (BasicBlock::iterator i=bb->begin(), e=bb->end(); i!=e; ++i) {
				CallInst *ci = dyn_cast<CallInst>(i);
				if (ci) {
					Function * callee = ci->getCalledFunction();

					//Handle bitcast func ptr
					if (!callee) {
						Value* cv = ci->getCalledValue();
						callee = dyn_cast<Function>(cv->stripPointerCasts());
					}

					if (!callee || callee->getName().find(".") != string::npos)
						continue;

					for (int i=0; i<level; i++)
						errs() << "--->";

					errs() << "[`" << callee->getName()
						<< "`](https://elixir.bootlin.com/linux/v4.14.62/ident/" 
						<< callee->getName() 
						<< "){:target=\"_blank\"}  \n";

					if (skip_func_set.find(callee->getName()) != skip_func_set.end())
						continue;

					if (func_set.find(callee) == func_set.end()) {
						func_set.insert(callee);
						DFSRecursive(callee, level+1);
					}
				}
			}
		}
	}

	void loadSkipFunc(const std::string& f)
	{
		std::ifstream input(f);
		if (!input.is_open())
		{
			return;
		}
		std::string line;
		while(std::getline(input,line))
		{
			skip_func_set.insert(line);
		}
		input.close();
	}
};

char CFG::ID = 0;
static RegisterPass<CFG> X("cfg", "CFG Pass");
