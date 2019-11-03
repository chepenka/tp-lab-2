#pragma once
#include <iostream>

template <typename T>
static void printArr(T* arr, int size) {
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
}

template<class T>
T change(T val)
{
	return val + 1;
}

template<>
char* change(char* val)
{
	size_t n = strlen(val);
	for (size_t i = 0; i < n; i++)
		val[i] = val[i] + 1;
	return val;
}

template<class T, const size_t N>
static T* map(T *array, T (*ñhange)(T)) {
	for (int i = 0; i < N; i++)
		array[i] = change(array[i]);
	return array;
}