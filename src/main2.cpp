#define _CRT_SECURE_NO_WARNINGS

#include "task2.h"
#include <iostream>

template<class T>
T gen(){
	return 5;
}


int main() {
	const size_t n = 10;

	auto *array = createArr<int, n>(&gen);


	for (size_t i = 0; i < n; i++)
	{
		std::cout << array[i] << " ";
	}

	std::cout << std::endl;

	return 0;
}