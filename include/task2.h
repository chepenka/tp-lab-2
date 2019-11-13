#pragma once
template <typename A, int N> A* createArr(A (*function)()) {
	A* arr = new A[N];
	for (int i = 0; i < N; i++) {
		arr[i] = function();
	}
	return arr;
}
