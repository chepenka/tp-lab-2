#pragma once
#include <cstring>
#include <cstddef>

template<typename T, size_t N>
T* createArr(T(*gen)()) {
	T *array = new T[N];
	for (size_t i = 0; i < N; i++) {
		array[i] = gen();
	}
	return array;
}
