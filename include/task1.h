#ifndef task1_h
#define task1_h


#include <cstddef>
#include <cstring>

template <class T>
bool cmp(T &a, T &b)
{
	return a < b;
}


template<>
bool cmp(char* &a, char* &b)
{
	return strlen(a) < strlen(b);
}



template <class T>

void msort(T array[], size_t n)
{

	if (n <= 1)
		return;

	msort(array, n / 2);

	msort(array + n / 2, n - n / 2);

	T * tmp = new T[n];

	int left_half = 0, right_half = 0; // pointers to the right and left halves of array

	while (left_half < n / 2 && right_half < n - n / 2)
	{
		if (cmp(array[left_half], array[n / 2 + right_half]))
		{
			tmp[left_half + right_half] = array[left_half];
			left_half++;
		}
		else
		{
			tmp[left_half + right_half] = array[n / 2 + right_half];
			right_half++;
		}
	}

	while (left_half < n / 2)
	{
		tmp[left_half + right_half] = array[left_half];
		left_half++;
	}

	while (n / 2 + right_half < n)
	{
		tmp[left_half + right_half] = array[n / 2 + right_half];
		right_half++;
	}

	for (int i = 0; i < n; i++)
		array[i] = tmp[i];

}

#endif