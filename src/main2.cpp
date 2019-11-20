#include <iostream>
#include "task2.h"

int main()
{
	const size_t n = 8;
	int* arr;
	arr = createArr<int, n>(gen);
	for (size_t i = 0; i < n; i++)
		std::cout << arr[i] << " ";
	delete[] arr;
}