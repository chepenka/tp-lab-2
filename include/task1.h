#pragma once
#include <iostream>
#include <string.h>
using namespace std;

template <typename T>
bool compare(T a, T b) {
	return a < b;
}

bool compare(char* a, char* b) {
	return strlen(a) < strlen(b);
}

template <typename T>
void msort(T* array, int left, int right) {

	if (left == right)
		return;

	int mid = (left + right) / 2;

	msort(array, left, mid);
	msort(array, mid + 1, right);

	int itLeft = left;
	int itRight = mid + 1;
	T* temp = new T[right];

	int nSteps = right - left + 1;

	for (int step = 0; step < nSteps; step++) {
		if ((itRight > right) || ((itLeft <= mid) && (compare(array[itLeft], array[itRight])))) {
			temp[step] = array[itLeft];
			itLeft++;
		}
		else {
			temp[step] = array[itRight];
			itRight++;
		}
	}

	for (int step = 0; step < nSteps; step++) {
		array[left + step] = temp[step];
	}
}