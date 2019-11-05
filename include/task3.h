#pragma once
#include <string.h>
#include <iostream>

template <typename T> static void printArray(T* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
}

template<class T> T change(T val)
{
	return val + 1;
}

template<> char* change(char* val)
{
	size_t n = strlen(val);
	for (size_t i = 0; i < n; i++)
		val[i] = val[i] + 1;
	return val;
}

template<typename T, const size_t N> T* map(T* arr, T(*change)(T))
{
	for (int i = 0; i < N; i++)
		arr[i] = change(arr[i]);
	return arr;
}
