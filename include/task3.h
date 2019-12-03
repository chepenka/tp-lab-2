#pragma once
template <typename A, int N> void map(A(&arr)[N], A (*s)(A)) {
	for (int i = 0; i < N; i++) {
		arr[i] = s(arr[i]);
	}
}