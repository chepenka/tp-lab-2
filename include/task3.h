#pragma once
template<typename T, int N>
void map(T(&arr)[N], T(*change)(T)) {
	for (int i = 0; i < N; i++)
		array[i] = change(array[i]);
}
