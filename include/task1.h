#ifndef __TASK1_H_
#define __TASK1_H_

#include <string>
#include <vector>
#include <iostream>

template <typename T> bool own_less(T a, T b)
{
	return a < b;
}
template <> bool own_less(char* a, char* b)
{
	std::string A(a);
	std::string B(b);

	if (A.size() == B.size())
	{
		return A < B;
	}
	else
	{
		return A.size() < B.size();
	}
}

template <typename T> void merge(T* arr, size_t start, size_t mid, size_t stop)
{
	size_t iterator1 = 0;
	size_t iterator2 = 0;

	std::vector <T> result(stop - start);

	for (; (start + iterator1 < mid) && (mid + iterator2 < stop);)
	{

		if (own_less(arr[start + iterator1], arr[mid + iterator2]))
		{
			result[iterator1 + iterator2] = arr[start + iterator1];
			iterator1++;
		}
		else
		{
			result[iterator1 + iterator2] = arr[mid + iterator2];
			iterator2++;
		}
	}

	for (; start + iterator1 < mid; iterator1++)
	{
		result[iterator1 + iterator2] = arr[start + iterator1];
	}

	for (; mid + iterator2 < stop; iterator2++)
	{
		result[iterator1 + iterator2] = arr[mid + iterator2];
	}

	for (size_t i = 0; i < result.size(); i++)
	{
		arr[start + i] = result[i];
	}
}

template <typename T> void rms(T* arr, size_t start, size_t stop)
{ 
	if (start + 1 >= stop)
	{
		return;
	}
	size_t mid = start + (stop - start) / 2;
	rms(arr, start, mid);
	rms(arr, mid, stop);
	merge(arr, start, mid, stop);
	return;
}

template<typename T> void msort(T* arr, size_t n) 
{
	rms(arr, 0, n);
}

#endif //__TASK1_H_
