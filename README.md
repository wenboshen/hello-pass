## build a out of tree llvm pass
[Link](http://www.llvm.org/docs/CMake.html#developing-llvm-passes-out-of-source)

## How to build
cd hello-pass
mkdir build
cd build
cmake ../

## How to run
opt -load ./hello/HelloPass.so -hello < ../../tmp/main.bc
opt -load ./hello/HelloPass.so -hello -disable-output < ../../tmp/main.bc
