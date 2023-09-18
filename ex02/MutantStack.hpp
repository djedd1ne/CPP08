#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T, std::deque<T> > {
    public:
        MutantStack() {};
        MutantStack(MutantStack const & obj):std::stack<T>(obj) {};
        MutantStack & operator=(MutantStack const & obj) {
			this->c = obj.c;
            return *this;
        };
		~MutantStack() {
            this->c.clear();
        };
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() {
			return this->c.begin(); 
		}
        iterator end() { 
			return this->c.end(); 
		}
};

#endif