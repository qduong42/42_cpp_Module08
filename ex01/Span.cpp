#include "Span.hpp"

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
		throw(std::invalid_argument("Vector full! Unable to add!"));
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
