/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:00:49 by qduong            #+#    #+#             */
/*   Updated: 2022/10/18 19:04:59 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
	Span* sp = new Span(5);
	sp->addNumber(1);
	sp->addNumber(2);
	sp->addNumber(3);
	sp->addNumber(4);
	sp->addNumber(5);
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
	// std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;
	return 0;
}