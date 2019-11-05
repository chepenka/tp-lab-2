#pragma once
#include <string.h>

template <typename T>
bool cmp(T a, T b)
{
	return a < b;
}

template<>
bool cmp(char* a, char* b)
{
	return strlen(a) < strlen(b);
}

template <typename T>
void msort(T *array, int left, int right)
{
	if (left == right)
		return;
	int mid = (left + right) / 2;

	msort(array, left, mid);
	msort(array, mid + 1, right);
	int i = left;					// start first way
	int j = mid + 1;				//start second way
	T * tmp = new T[right];
	for (int step = 0; step < right - left + 1; step++)
	{
		if ((j > right) || (i <= mid && (cmp(array[i],array[j]))))
		{
			tmp[step] = array[i];
			i++;
		}
		else
		{
			tmp[step] = array[j];
			j++;
		}
	}
	for (int step = 0; step < right - left + 1; step++)
		array[left + step] = tmp[step];
}

template <typename T>
void msort(T *array, int n)
{
	msort(array, 0, n - 1);
}
