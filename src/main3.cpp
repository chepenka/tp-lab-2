#define _CRT_SECURE_NO_WARNINGS

#include "task3.h"
#include <cstring>
#include <iostream>

template<class T>
T change(T element)
{
	return element*2;
}


template<>
char* change(char* element)
{
	for (size_t i = 0; i < strlen(element); i++)
		element[i] = element[i]*2;
	return element;
}


int main() {
	const size_t n = 5;
	int array[n]{ 1, 2, 3, 4, 5 };
	map<int, n>(array, change);


	for (size_t i = 0; i < n; i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;

	return 0;


}