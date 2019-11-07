#ifndef TASK3_H
#define TASK3_H

template<typename T, int N>
void map(T arr[], T(*pchange)(T))
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = pchange(arr[i]);
	}
}

#endif