#ifndef EASY_FIND_HPP
#define EASY_FIND_HPP

#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <vector>
#include <deque>
#include <list>

class NotFoundException: public std::exception
{
	public:
			virtual const char *what() const throw() {
				return ("NOT FOUND!");
			}
};

template <typename T>
typename T::const_iterator easyfind(T const& container, int to_find) {
    typename T::const_iterator it = std::find(container.begin(), container.end(), to_find);
    if (it == container.end())
        throw (NotFoundException());
	else
		std::cout << "The value: \"" << to_find << "\" is found" << std::endl;
    return it;
}

#endif