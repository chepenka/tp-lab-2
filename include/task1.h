#pragma once
#include "string.h"

template <typename T> static bool cmp(T &a, T &b)
{
	return a < b;
}

template <> bool cmp(char * &a, char * &b)
{
	return strlen(a) < strlen(b);
}

template <typename T> void msort(T * arr, const int N)
{
	if (N <= 1) return;
	int n1 = N / 2;
	int n2 = N - n1;
	
	msort(arr, n1);
	msort(arr + n1, n2);

	int cur1 = 0, cur2 = 0, i = 0;
	T * buf = new T[N];

	while (cur1 < n1 && cur2 < n2) {
		if (cmp(arr[cur1], arr[n1 + cur2]))
			buf[i++] = arr[cur1++];
		else
			buf[i++] = arr[n1 + cur2++];
	}
	while (cur1 < n1) {
		buf[i++] = arr[cur1++];
	}
	while (cur2 < n2) {
		buf[i++] = arr[n1 + cur2++];
	}
	for (int i = 0; i < N; i++) {
		arr[i] = buf[i];
	}
	delete[] buf;
}