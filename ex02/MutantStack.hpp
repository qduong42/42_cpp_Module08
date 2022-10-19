#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

/**
 * mutant stack, takes everything(inherit) from std::stack with template type <T>
 * constructor/destructor does nothing, neither does copy constructor
 * assignment operator assigns stack member var c to rhs c
 * @tparam T 
 */
template <typename T>
class MutantStack: public std::stack<T>
{
	public:

		MutantStack(){};
		MutantStack(MutantStack const& obj){*this = obj;};
		~MutantStack(){};

		MutantStack& operator=(MutantStack const& obj){this->c = obj.c;};
		//define new type Iterator to be std::stack<T>::container_type::iterator
		typedef typename std::stack<T>::container_type::iterator Iterator;

		Iterator begin() { return this->c.begin(); };
   		Iterator end()   { return this->c.end(); };
	private:

};

#endif
