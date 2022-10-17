#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <algorithm>
#include <vector>
#include <array>
#include <list>
#include <deque>

template <typename T>
typename T::iterator easyFind(T& container, int number)
{
	typename T::iterator it = std::find(container.begin(), container.end(), number);
	if (it == container.end())
		throw(std::invalid_argument("easyFind::Container does not contain the target element!"));
	return (it);
}

#endif