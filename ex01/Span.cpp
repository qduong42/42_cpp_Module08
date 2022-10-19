#include "Span.hpp"
#include <cstdlib>

//	CONSTRUCTORS | DESTRUCTOR

Span::Span():/* _count(0), */ _size(0), _array(NULL)
{
	std::cout << "default Constructor called!\n";
	this->_array = new std::vector<int>;
}

Span::Span(unsigned int const& N):/* _count(0), */ _size(N), _array(NULL)
{
	std::cout << "N sized Constructor called!\n";
	this->_array = new std::vector<int>;
}

Span::Span(Span const& obj): /* _count(obj.getCount()) ,*/ _size(obj.getSize()), _array(NULL)
{
	std::cout << "Copy constructor called!" << std::endl;
	*this = obj;
}

Span& Span::operator=(Span const& obj)
{
	std::cout << "assignment op called\n";
	if (this != &obj)
	{
		if (this->_array)
			delete (this->_array);
		this->_array = new std::vector<int>(*(obj.getArray()));
		// this->_count = obj.getCount();
		this->_size = obj.getSize();
	}
	return (*this);
}

Span::~Span()
{
	std::cout << "Destructor called!\n";
	delete (this->_array);
}

//	MEMBER FUNCTIONS

void Span::addNumber(int const& x)
{
	if (this->getArray()->size() < this->getSize())
	{
		this->_array->push_back(x);
		// this->_count++;
	}
	else
	{
		std::cout <<  "Vector with size " <<  this->_size << " has " << this->_array->size() << " elements\n";
		throw(std::invalid_argument("Throw: Vector full! Unable to add!"));
	}
}

size_t const& Span::getSize()const
{
	return (this->_size);
}

// int const& Span::getCount()const
// {
// 	return (this->_count);
// }

std::vector<int>* Span::getArray()const
{
	return (this->_array);
}

int Span::shortestSpan()
{
	std::sort((this->_array)->begin(), this->_array->end());
	if (this->_array->size() <= 1)
		throw(std::invalid_argument("Throw: Array only has 1 or no numbers"));
	int shortest = INT_MAX;
	for(unsigned long i = 0; i < this->_array->size() - 1; i++)
	{
		if (this->getArray()->at(i + 1) - this->getArray()->at(i) < shortest)
			shortest = this->getArray()->at(i + 1) - this->getArray()->at(i);
	}
	return (shortest);
}

int Span::longestSpan()
{
	std::sort((this->_array)->begin(), this->_array->end());
	if (this->_array->size() <= 1)
		throw(std::invalid_argument("Throw: Array only has 1 or no numbers"));
	return (this->_array->at(this->_array->size() - 1) - this->_array->at(0));
}

/**
 * add n random numbers
 * can also be done using insert fkt
 * iterator insert( const_iterator pos, InputIt first, InputIt last );
 * @param n 
 */
void Span::fillArr(int n)
{
	std::srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		this->_array->push_back(rand());
	}
}
