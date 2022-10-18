#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
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
		size_t const& getSize()const;
		// int const& getCount()const;
		std::vector<int>* getArray()const;

	private:

	// int _count;
	size_t _size;
	std::vector<int>* _array;
};

#endif
