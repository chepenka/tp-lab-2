#pragma once
#include <iostream>

template<class T>
T change1(T val)
{
	return val + 1;
}

template<>
char* change1(char* val)
{
	size_t n = strlen(val);
	for (size_t i = 0; i < n; i++)
		val[i] = val[i] + 1;
	return val;
}

template<class T, const size_t N>
T* map(T *array, T (*ñhange1)(T)) {
	for (int i = 0; i < N; i++)
		array[i] = change1(array[i]);
	return array;
}