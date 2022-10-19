# CPP Module 08

## std::iterators Exploration

- Can be dereferenced once the begin has been set.
- Can be assessed through index
- can be iterated from container.begin to container.end

## Deque vs list exploration

- implementation is different. Deque follows vector implementation while list is a doubly linked list.

## ex01

### vector exploration:
- member functions
  - insert - > can insert a vector with pos to insert, start & end iterator
  - at -> accesses element at x index. refer to cppreference

## ex02
- std::stack not iterable
- butcher original stack to create missing features. make std::stack iterable.
- Write MutantStack class. implemented in terms of std::stack. Iterators.
  - Run with MutantStack and replacing with std::list output should be the same.