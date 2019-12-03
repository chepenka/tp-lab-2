#ifndef task3_h
#define task3_h

#include <cstddef>

template<typename T, const size_t N>

void map(T *array, T(*change)(T))
{

	for (size_t i = 0; i < N; i++)
	{
		array[i] = change(array[i]);
	}

}


#endif