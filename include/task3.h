#ifndef __TASK3_H_
#define __TASK3_H_

#include <iostream>

template<class T> T own_change(T val)
{
	return ++val;
}

template<typename T, const size_t size> void map(T* arr, T(*change)(T val))
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = change(arr[i]);
	}
}

#endif //__TASK3_H_

