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
	// std::array <int, 10>::iterator it = b.begin();
	std::array <int, 10>b = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	std::cout << "==========Int Array=========" << std::endl;
	for(std::array <int, 10>::iterator it = b.begin(); it < b.end(); it++)
	{
		std::cout <<"Int Array:" << *it << std::endl;
	}
		std::cout << "==========Test Commenced!" << std::endl;
	try
	{
		std::array<int, 10>::iterator it = easyFind(b, 5);
		std::cout << *it << std::endl;
		// std::cout << "Found element at address: " << it.base() << " index: " << static_cast<int>(it.base() - b.begin().base()) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr  << e.what() << '\n';
	}
	std::cout << "==========END Int Array=========" << std::endl;
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
	std::cout << "==========END Int Deque=========" << std::endl;
	return 0;
}
