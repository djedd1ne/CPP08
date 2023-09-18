#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int N) : _size(N) {}

Span::Span(const Span &obj) {
	this->_size = obj._size;
	this->_vect = obj._vect;
	*this = obj;
}

Span &Span::operator = (const Span &obj) {
	this->_size = obj._size;
	return *this;
}

Span::~Span() {}

void Span::addNumber(int num) {
	if (_vect.size() >= _size)
		throw SpanIsFullException();
	_vect.push_back(num);
}

long Span::shortestSpan() {
	if (this->_size <= 1 || this->_vect.size() <= 1)
		throw SizeIsSmallException();
	std::vector<int> dup(this->_vect);
	std::sort(dup.begin(), dup.end());
	long result = *(dup.begin() + 1) - *dup.begin();
	for (std::vector<int>::iterator it = dup.begin(); it != dup.end() - 1; ++it)
		if (*(it + 1) - *it < result)
			result = *(it + 1) - *it;
	return result;
}

long Span::longestSpan() {
	if (this->_size <= 1 || this->_vect.size() <= 1)
		throw Span::SizeIsSmallException();
	long max = *std::max_element(this->_vect.begin(), this->_vect.end());
	long min = *std::min_element(this->_vect.begin(), this->_vect.end());
	return (max - min);
}

void Span::addRange(std::vector<int>::iterator first, std::vector<int>::iterator last) {
	int hops_number = std::distance(first, last);
	if ( this->_vect.size() + hops_number > this->_size)
		throw Span::SpanIsFullException();
	this->_vect.insert(this->_vect.end(), first, last);
}

const char *Span::SpanIsFullException::what() const throw() {
	return "Span is full!";
}

const char *Span::SizeIsSmallException::what() const throw() {
	return "Size of span is too small!";
}

