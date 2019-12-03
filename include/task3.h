#pragma once

template<typename T, int n>
void map(T (&arr)[n], T(*change)(T val)) {
	for (int i = 0; i < n; i++) {
		arr[i] = change(arr[i]);
	}
}