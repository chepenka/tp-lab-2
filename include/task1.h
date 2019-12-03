#pragma once
#include <string.h>
#include <iostream>

template<typename T> void msort(T* mas, int n) {
	if (n > 1) {
		int mid = n / 2, i, j, k;
		T* leftHalf = new T[mid];
		T* rightHalf = new T[n - mid];

		for (i = 0; i < mid; i++) {
			leftHalf[i] = mas[i];
			rightHalf[i] = mas[mid + i];
		}

		
		if (n % 2 != 0) rightHalf[mid] = mas[n - 1];

		msort(leftHalf, mid);
		msort(rightHalf, n - mid);

		i = 0;
		j = 0;
		k = 0;

		for (; k < n; k++) {
			
			if (i > mid - 1) {
				mas[k] = rightHalf[j];
				j++;
			}
			else if (j > n - mid - 1) {
				mas[k] = leftHalf[i];
				i++;
			}
			else if (leftHalf[i] < rightHalf[j]) {
				mas[k] = leftHalf[i];
				i++;
			}
			else {
				mas[k] = rightHalf[j];
				j++;
			}
		}

		delete[] leftHalf;
		delete[] rightHalf;
	}
}
template<> void msort(char **mas, int n) {
	if (n > 1) {
		int mid = n / 2, i, j, k;
		char** leftHalf = new char*[mid];
		char** rightHalf = new char *[n - mid];

		for (i = 0; i < mid; i++) {
			leftHalf[i] = mas[i];
			rightHalf[i] = mas[mid + i];
		}


		if (n % 2 != 0) rightHalf[mid] = mas[n - 1];

		msort(leftHalf, mid);
		msort(rightHalf, n - mid);

		i = 0;
		j = 0;
		k = 0;

		for (; k < n; k++) {

			if (i > mid - 1) {
				mas[k] = rightHalf[j];
				j++;
			}
			else if (j > n - mid - 1) {
				mas[k] = leftHalf[i];
				i++;
			}
			else if (strlen(leftHalf[i]) < strlen(rightHalf[j])) {
				mas[k] = leftHalf[i];
				i++;
			}
			else {
				mas[k] = rightHalf[j];
				j++;
			}
		}

		delete[] leftHalf;
		delete[] rightHalf;
	}
}