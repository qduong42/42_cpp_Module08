#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>

class Span
{
	public:

		Span();
		Span(unsigned int const& N);
		Span(Span const& obj);
		Span& operator=(Span const& obj);
		~Span();
		void addNumber(int const& x);
		void fillArr(int n);
		size_t const& getSize()const;
		std::vector<int>* getArray()const;
		int shortestSpan();
		int longestSpan();

	private:

	size_t _size;
	std::vector<int>* _array;
};

#endif
