#pragma once

template<class T, int n>
void map(T arr[], T(*change)(T)) {
	for (int i = 0; i < n; i++) {
		arr[i] = change(arr[i]);
	}
}