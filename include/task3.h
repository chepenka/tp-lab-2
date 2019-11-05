#pragma once
#include <string.h>
#include <iostream>





template<typename T, const size_t N>
T* map(T* arr, T(*change)(T))
{
	for (int i = 0; i < N; i++)
		arr[i] = change(arr[i]);
	return arr;
}
