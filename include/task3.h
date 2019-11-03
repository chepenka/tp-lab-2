#pragma once
#include <iostream>

template<class T, const size_t N>
void map(T (&array)[N], T (*change)(T)) {
	for (int i = 0; i < N; i++)
		array[i] = change(array[i]);
}