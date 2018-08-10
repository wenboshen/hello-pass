#include "llvm/Pass.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/Instructions.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/IR/LegacyPassManager.h"
#include "llvm/IR/InstIterator.h"
#include "llvm/Transforms/IPO/PassManagerBuilder.h"

#include <unordered_set>
using namespace llvm;
using namespace std;

#define DEBUG_TYPE "CFG"

struct CFG : public FunctionPass {
	static char ID; // Pass identification, replacement for typeid
	CFG() : FunctionPass(ID) {}

	unordered_set<Function *> func_set;

	bool runOnFunction(Function &F) override {
		if (F.getName().compare("SyS_open") != 0)
			return false;

		errs() << "CFG: " << F.getName() << '\n';
		DFSRecursive(&F, 0);
		return false;
	}

	bool DFSRecursive(Function * F, int level){
		if (level >1)
			return true;
		//processing all instruction in a basicblock
		for (Function::iterator bb = F->begin(), fe=F->end(); bb != fe; ++bb) {
			for (BasicBlock::iterator i=bb->begin(), e=bb->end(); i!=e; ++i) {
				CallInst *ci = dyn_cast<CallInst>(i);
				if (ci) {
					errs() << *i << '\n';
					Function * callee = ci->getCalledFunction();

					if (!callee) {
						errs()<<  "aaa\n";
						Value *vv= ci->getCalledValue();
						errs() << *vv << '\n';
						BitCastInst *bi = dyn_cast<BitCastInst>(vv);
						if (bi)
							errs() << bi->getOperand(0)->getName() << '\n';

						continue;
					}

					if (callee->getName().find(".") != string::npos)
						continue;

					for (int i=0; i<level; i++)
						errs() << "  ";

					errs() << callee->getName() << '\n';
					if (func_set.find(callee) == func_set.end()) {
						func_set.insert(callee);
						DFSRecursive(callee, level+1);
					}
				}
			}
		}
	}
};

char CFG::ID = 0;
static RegisterPass<CFG> X("cfg", "CFG Pass");