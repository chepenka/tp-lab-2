#pragma once

template<class T, int n>
T* createArr(T (*gen)()) {
	T* arr = (T*)malloc(sizeof(T*) * n);
	for (int i = 0; i < n; i++) {
		arr[i] = gen();
	}
	return arr;
}