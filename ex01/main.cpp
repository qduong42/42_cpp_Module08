/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:00:49 by qduong            #+#    #+#             */
/*   Updated: 2022/10/19 13:12:23 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
	Span* sp = new Span(5);
	sp->addNumber(-100);
	sp->addNumber(0);
	sp->addNumber(50);
	sp->addNumber(200);
	sp->addNumber(300);
	try
	{
		sp->addNumber(6);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << "\n";
	}
	Span sp2(2);
	// std::cout << sp2.getSize() << "\n";
	// std::cout << sp2.getCount() << "\n";
	try{
		sp2.addNumber(5);
		sp2.addNumber(10);
		sp2.addNumber(15);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	// std::cout << sp2.getSize() << "\n";
	// std::cout << sp2.getCount() << "\n";
	std::cout << "===============DEEP COPY tests===============\n";
	for (std::vector<int>::iterator it = sp->getArray()->begin(); it < sp->getArray()->end(); it++)
	{
		std::cout << "original sp:" << *it << std::endl;
	}
	for (std::vector<int>::iterator it = sp2.getArray()->begin(); it < sp2.getArray()->end(); it++)
	{
		std::cout << "original sp2:" << *it << std::endl;
	}
	sp2 = *sp;
	delete sp;
	// std::cout << sp2.getSize() << "\n";
	// std::cout << sp2.getCount() << "\n";
	for (std::vector<int>::iterator it = sp2.getArray()->begin(); it < sp2.getArray()->end(); it++)
	{
		std::cout << "new vector sp2:" << *it << std::endl;
	}
	std::cout << "===============DEEP COPY tests ENDED===============\n";
	std::cout << "===============Copy constructor test 1:===============\n";
	Span sp3(sp2);
	for (std::vector<int>::iterator it = sp3.getArray()->begin(); it < sp3.getArray()->end(); it++)
	{
		std::cout << "vector sp3:" << *it << std::endl;
	}
	std::cout << "===============Copy constructor test 2:===============\n";
	Span sp4 = sp2;
	for (std::vector<int>::iterator it = sp3.getArray()->begin(); it < sp3.getArray()->end(); it++)
	{
		std::cout << "vector sp3:" << *it << std::endl;
	}
	std::cout << "===============Shortest Span test 1:===============\n";
	std::cout << "Shortest span is: " << sp2.shortestSpan() << std::endl;
	std::cout << "===============Shortest Span invalid arg test 1:===============\n";
	Span sp5(1);
	sp5.addNumber(5);
	try
	{
		std::cout << "Shortest span is: " << sp5.shortestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "===============Shortest Span invalid arg test 2:===============\n";
	Span sp6;
	try
	{
		std::cout << "Shortest span is: " << sp5.shortestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "===============Longest Span test 1:===============\n";
	std::cout << sp2.longestSpan() << std::endl;
	std::cout << "===============Longest Span invalid arg test 1:===============\n";
	try
	{
		std::cout << "Longest span is: " << sp5.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	// std::cout << "===============Fill Span test 1:===============\n";
	// Span sp7(10000);
	// std::cout << "sp7 count: " << sp7.getArray()->size() << "\n";
	// sp7.fillArr(10000);
	// std::cout << "sp7 count: " << sp7.getArray()->size() << "\n";
	// for (std::vector<int>::iterator it = sp7.getArray()->begin(); it < sp7.getArray()->end(); it++)
	// {
	// 	std::cout << "original sp7:" << *it << std::endl;
	// }
	return 0;
}

// int main()
// {
// 	Span sp = Span(5);
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	for (std::vector<int>::iterator it = sp.getArray()->begin(); it < sp.getArray()->end(); it++)
// 	{
// 		std::cout << "original sp:" << *it << std::endl;
// 	}
// 	std::cout << sp.longestSpan() << std::endl;
// 	return 0;
// }