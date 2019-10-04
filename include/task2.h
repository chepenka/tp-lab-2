#pragma once
template <typename A, int N> A* createArr(A (*s)()) {
	A* arr = new A[N];
	for (int i = 0; i < N; i++) {
		arr[i] = s();
	}
	return arr;
}