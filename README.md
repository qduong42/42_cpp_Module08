# Cpp Module 08 - @42Wolfsburg

## About

Excercises to acquaint us to containers. We use several containers to create simple programs, implement container templates.

## Installation & Usage

### Requirements
The only requirements are:
- GNU make (v3.81)
- c++ (clang++) v.12.0.0
- compile with -std=c++98 flag.

Those versions are the ones used during development.

### Building the program

1. Download/Clone this repo

        git clone https://github.com/qduong42/42_cpp_Module08
2. `cd` into the exercise directories and run `make`
  for (int i = 00; i <= 02; i++)
{
        cd 42_cpp_Module08/exi
        make
}

### Running the program

After running make, you can run the program following the instructions printed in the terminal by the Makefile.

## Main Project Instructions

- Piscine style C++ Excercises to introduce us to C++ Beginner Concepts.

### Mandatory

- Only code in a C++ way. C functions should be avoided as much as possible.
- NO CODING NORMS!
- No memory leaks
- Must have a Makefile to build the program
- Files to turn in partially given.

# Notes
## std::iterators Exploration
- Can be dereferenced once the begin has been set.
- Can be assessed through index
- can be iterated from container.begin to container.end


## Deque vs list exploration
implementation is different. Deque follows vector implementation while list is a doubly linked list.

## ex01
vector exploration:
member functions
insert - > can insert a vector with pos to insert, start & end iterator
at -> accesses element at x index. refer to cppreference

## ex02
std::stack not iterable
butcher original stack to create missing features. make std::stack iterable.
Write MutantStack class. implemented in terms of std::stack. Iterators.
Run with MutantStack and replacing with std::list output should be the same.


Enjoy!
