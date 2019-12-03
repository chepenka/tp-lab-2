#pragma once

template <typename T, const int N> T * createArr(T(*gen)())
{
	T * arr = new T[N];
	for (int i = 0; i < N; i++)
		arr[i] = gen();
	return arr;
}