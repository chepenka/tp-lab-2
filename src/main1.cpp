#define _CRT_SECURE_NO_WARNINGS

#include "task1.h"
#include <iostream>

int main()
{
	// test 1
	size_t n = 6;
	char* array[6]{ (char*)"this", (char*)"is", (char*)"an", (char*)"array", (char*)"for", (char*)"testing" };

	msort(array, n);

	for (size_t i = 0; i < n; i++)
	{
		std::cout << array[i] << ' ';
	}
	std::cout << std::endl;

	// test 2
	int n2 = 10;
	int* a = new int[n2]{4, 1 , 0, 6, 5, 9, 3, 2, 8, 7};

	msort(a, n2);

	for (size_t i = 0; i < n2; i++)
	{
		std::cout << a[i] << ' ';
	}
	std::cout << std::endl;

	return 0;
}
