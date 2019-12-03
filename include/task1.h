#pragma once
#include <string.h>

template<class T> 
static bool cmp(T a, T b){
	return a < b;
}
template<> 
bool cmp< char*>( char* a,  char* b)
{
	return strlen(a) < strlen(b);
}
template<class T>
void msort(T* arr, int left, int right) {
	if (left >= right)
		return;
	int middle = (left + right) / 2;
	msort(arr, left, middle);
	msort(arr, middle + 1, right);

	T* q1 = new T[middle - left + 1];
	T* q2 = new T[right - middle];

	for (int i = left; i <= middle; i++) {
		q1[i - left] = arr[i];
	}
	for (int i = middle + 1; i <= right; i++) {
		q2[i - middle - 1] = arr[i];
	}

	int i = left;
	int ind_q1 = 0;
	int ind_q2 = 0;
	while (ind_q1 < middle - left + 1 && ind_q2 < right - middle) {
		if (cmp(q1[ind_q1], q2[ind_q2])) {
			arr[i] = q1[ind_q1];
			ind_q1++;
		}
		else {
			arr[i] = q2[ind_q2];
			ind_q2++;
		}
		i++;
	}

	while (ind_q1 < middle - left + 1) {
		arr[i] = q1[ind_q1];
		ind_q1++;
		i++;
	}

	while (ind_q2 < right - middle) {
		arr[i] = q2[ind_q2];
		ind_q2++;
		i++;
	}
	delete[] q1;
	delete[] q2;
}

template<class T>
void msort(T* arr, int n) {
	msort(arr, 0, n - 1);
}