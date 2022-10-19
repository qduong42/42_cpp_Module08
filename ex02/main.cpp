/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:00:49 by qduong            #+#    #+#             */
/*   Updated: 2022/10/19 15:27:23 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"
#include <list>

int main()
{
std::cout << "===============tests===============\n";
std::cout << "===============Mutant stack test===============\n";
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
//[...]
mstack.push(0);
std::cout << mstack.top() << std::endl;
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
std::cout << "===============Stack is:===============\n";
while (it != ite)
{
	std::cout << *it << std::endl;
	++it;
}
std::cout << "===============list test===============\n";
std::list<int> s;
s.push_back(5);
s.push_back(17);
s.pop_back();
std::cout << s.size() << std::endl;
s.push_back(3);
s.push_back(5);
s.push_back(737);
s.push_back(0);
std::list<int>::iterator it2 = s.begin();
std::list<int>::iterator ite2 = s.end();
std::cout << "===============List is:===============\n";
while (it2 != ite2)
{
	std::cout << *it2 << std::endl;
	++it2;
}
return 0;
}

// Subject PDF
/* int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
		std::stack<int> s(mstack);
		return 0;
} */