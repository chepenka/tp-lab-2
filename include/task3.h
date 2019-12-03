#pragma once

template<typename T, const int N>
void map(T *array, T(*change)(T))
{
	for (int i = 0; i < N; i++)
	{
		array[i] = change(array[i]);
	}
}
