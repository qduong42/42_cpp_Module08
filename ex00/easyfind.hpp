#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <algorithm>
#include <vector>
#include <array>
#include <list>
#include <deque>

template <typename T>
typename T::iterator easyFind(T& t, int a)
{
	typename T::iterator it = std::find(t.begin(), t.end(), a);
	if (it == t.end())
		throw std::invalid_argument("easyFind::Container does not contain the target element!");
	return (it);
}

#endif