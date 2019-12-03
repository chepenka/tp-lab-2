#include "task2.h"

#include <iostream>
#include <string>

template <class T> void printArr(T* arr, size_t len)
{
	for (size_t i = 0; i < len; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
template <> void printArr(char** arr, size_t len)
{
	for (size_t i = 0; i < len; i++)
	{
		std::string out(arr[i]);
		std::cout << out << " ";
	}
	std::cout << std::endl;
}

int main()
{
	int* val = createArr<int, 10>(own_gen);
	
	printArr(val, 10);

	delete[] val;

	return(0);
}

