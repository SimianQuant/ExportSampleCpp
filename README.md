Export Sample - C++
===

This project illustrates how a model generated in C++ using the SimianQuant environment can be integrated with a CMake project. As an illustration, the example in the help section of the environment is reproduced here. 

## Setup

The project provides the necessary wiring for running, testing and benchmarking the exported model. To set up the project

1. Install [cmake](https://cmake.org/install/)
1. Install [GoogleTest](https://github.com/google/googletest). Ubuntu users might find [this guide](https://stackoverflow.com/questions/24295876/cmake-cannot-find-googletest-required-library-in-ubuntu) useful. 
1. Install [GoogleBenchmark](https://github.com/google/benchmark#installation)

## Usage

1. Add the extracted header files to the `include` folder and the shared object to the `lib` folder
1. Add the code to run the model to the `src` folder
1. Add test cases to the `test` folder (Optional)
1. Add benchmarks to the `benchmark` folder

Illustrations of all four steps are provided in the project. 