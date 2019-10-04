#ifndef task2_h
#define task2_h

#include <cstddef>

template<typename T, const int N>

T *createArr(T (*gen)())
{
	T *array = new T[N];

	for (size_t i = 0; i < N; i++)
	{
		array[i] = gen();
	}

	return array;
}


#endif