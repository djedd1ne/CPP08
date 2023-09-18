#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <stdexcept>
#include <vector>
#include <algorithm>
#include <iterator>

class Span
{
	private:
		size_t _size;
		std::vector<int> _vect;
	public:
			Span();
			Span(unsigned int N);
			Span(const Span &obj);
			Span &operator=(const Span &obj);
			~Span();

			void addNumber(int num);
			long shortestSpan();
			long longestSpan();
			void addRange(std::vector<int>::iterator first, std::vector<int>::iterator last);
	
			class SpanIsFullException : public std::exception {
				public:
					virtual const char *what() const throw();
			};
			
			class SizeIsSmallException : public std::exception {
				public:
					virtual const char *what() const throw();
			};
};

#endif