#pragma once
#include <iostream>

template<class T, const size_t N>
T* createArr(T (*gen)()) {
	T* newArray = new T [N];
	for (int i = 0; i < N; i++) {
		newArray[i] = gen();
	}
	return newArray;
}