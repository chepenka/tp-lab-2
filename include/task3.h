#pragma once
#include <cstring>
#include <cstddef>

template<typename T, size_t N>
void map(T (&array)[N], T(*change)(T)) {
	for (size_t i = 0; i < N; i++)
		array[i] = change(array[i]);
}
