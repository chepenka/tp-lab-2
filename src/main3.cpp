#include "task3.h"


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
	int val[] = { 1,2,3,4,5,6,7,8,9,0 };

	printArr(val, 10);

	map<int, 10>(val, own_change);

	printArr(val, 10);

	delete[] val;

	return(0);
}

