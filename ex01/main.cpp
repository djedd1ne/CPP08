#include "Span.hpp"

int main(void) {

	std::cout << "----------------------- TEST 1 -----------------------" << std::endl;
	try {
		Span span00(4);
		span00.addNumber(1);
		span00.addNumber(2);
		span00.addNumber(3);
		span00.addNumber(4);
		std::cout << "Shortest span is: " << span00.shortestSpan() << std::endl;
		std::cout << "Longest span is: " << span00.longestSpan() << std::endl;

	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "----------------------- TEST 2 -----------------------" << std::endl;
	try {
		Span span01(4);
		span01.addNumber(0);
		span01.addNumber(3);
		span01.addNumber(6);
		span01.addNumber(9);
		std::cout << "Shortest span is: " << span01.shortestSpan() << std::endl;
		std::cout << "Longest span is: " << span01.longestSpan() << std::endl;

	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "----------------------- TEST 3 -----------------------" << std::endl;
	try {
		Span span02(4);
		span02.addNumber(1);
		span02.addNumber(2);
		span02.addNumber(3);
		span02.addNumber(4);
		span02.addNumber(5);
		std::cout << "Shortest span is: " << span02.shortestSpan() << std::endl;
		std::cout << "Longest span is: " << span02.longestSpan() << std::endl;

	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "----------------------- TEST 4 -----------------------" << std::endl;
	try {
		Span span03(10);
		span03.addNumber(0);
		std::cout << "Shortest span is: " << span03.shortestSpan() << std::endl;
		std::cout << "Longest span is: " << span03.longestSpan() << std::endl;

	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::vector<int> huge(10000);
	for (int i = 0; i < 10000; i++)
		huge[i] = i;
	try {
		Span span_huge(10000);
		span_huge.addRange(huge.begin(), huge.end());
		std::cout << "Shortest span is : " << span_huge.shortestSpan() << std::endl;
		std::cout << "Longest span is : " << span_huge.longestSpan() << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}