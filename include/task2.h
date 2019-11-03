#pragma once
#include <iostream>

template <typename T>
static void printArr(T* arr, int size) {
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
}

template<class T>
T gen()
{
	static T t = 48;
	return t++;
}

template<>
char* gen()
{
	static unsigned t = 0;
	t++;
	char* s = new char[t + 1];

	for (size_t i = 0; i < t; i++)
		s[i] = '0' + i;
	s[t] = '\0';
	return s;
}

template<class T, const size_t N>
static T* createArr(T (*gen)()) {
	T* newArray = new T [N];
	for (int i = 0; i < N; i++) {
		newArray[i] = gen();
	}
	return newArray;
}