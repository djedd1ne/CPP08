#include "easyfind.hpp"

int main(void){
	{
		std::cout << "****** vector test ******" << std::endl;
		int array[7] = {11, -1, 15, 0, 416464, 44, 0};
		int size = sizeof(array) / sizeof(int);

		std::vector<int> test_vect(array, array + size);
		std::deque<int> test_dek(array, array + size);
		std::list<int> test_list(array, array + size);

		try {
			easyfind(test_vect, 0);
			easyfind(test_dek, 0);
			easyfind(test_list, 0);
			easyfind(test_vect, -2);
			easyfind(test_dek, -2);
			easyfind(test_list, -2);
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}

		try {
			easyfind(test_vect, 44);
		}
		catch {
			std::cerr << e.what() << std::endl;
		}
		
		return 0;
	}
}