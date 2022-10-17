#include <iostream>
#include "easyfind.hpp"

int main()
{
	std::vector <int> a;
	a.push_back(10);
	a.push_back(15);
	a.push_back(20);
	a.push_back(25);
	a.push_back(30);
	a.push_back(25);
	std::cout << "==========Int Vector=========" << std::endl;
	for(std::vector <int>::iterator it = a.begin(); it < a.end(); it++)
	{
		std::cout << "int vector" << *it << std::endl;
	}
	std::cout << "==========Test Commenced!" << std::endl;
	try
	{
		std::vector<int>::iterator it = easyFind(a, 25);
		std::cout << "Found element at address: " << it.base() << " index: " << static_cast<int>(it.base() - a.begin().base()) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr  << e.what() << '\n';
	}
	std::cout << "==========END Int Vector=========" << std::endl;
	std::cout << "==========Int Deque=========" << std::endl;
	std::deque <int> c;
	c.push_back(-50);
	c.push_front(-100);
	c.push_back(-150);
	c.pop_front();
	for(std::deque <int>::iterator it = c.begin(); it < c.end(); it++)
	{
		std::cout << "int deque" << *it << std::endl;
	}
			std::cout << "==========Test Commenced!" << std::endl;
	try
	{
		std::deque<int>::iterator it = easyFind(c, -50);
		std::cout << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr  << e.what() << '\n';
	}
	std::cout << "==========END Int Deque=========" << std::endl;
	return 0;
}
