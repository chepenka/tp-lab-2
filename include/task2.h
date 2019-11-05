#ifndef TASK2_H
#define TASK2_H
#include <iostream>
using namespace std;

template<typename T>
T * createArr(T(*pgen)(), int N)
{
	T *array = new T[N];
	for (int i = 0; i < N; i++)
	{
		array[i] = pgen();
	}
	return array;
}

#endif
