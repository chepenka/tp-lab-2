#ifndef TASK3_H
#define TASK3_H

template<typename T>
void map(T arr[], T(*pchange)(T), int N)
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = pchange(arr[i]);
	}
}

#endif