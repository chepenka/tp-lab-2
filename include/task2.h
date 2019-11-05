#pragma once
#include <iostream>

template<typename T, const size_t N>
T* createArr(T (*gen)())
{
	T* newArr = new T[N];

	for (int i = 0; i < N; i++)
		newArr[i] = gen();
	return newArr;
}

