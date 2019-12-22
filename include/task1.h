#include <iostream>
#include <cstring>


template <typename T>
bool cmp(T a, T b) {
	return a < b;
}
template<>
bool cmp(char* a, char* b) {
	return strlen(a) < strlen(b);
}


template <typename T>
void msort(T *a, size_t n) {
	size_t middle = n / 2;
	if (n > 1) {
		msort(a, middle);
		msort(a + middle, n - middle);
	}
	size_t leftP = 0;
	size_t rightP = n / 2;
	T* result = new T[(n)];
	for (size_t i = 0; i < n; i++) {
		if ((rightP >= n) || ((leftP < n / 2) && (cmp(a[leftP], a[rightP])))) {
			result[i] = a[leftP];
			leftP++;
		}
		else {
			result[i] = a[rightP];
			rightP++;
		}
	}
	for (size_t i = 0; i < n; i++) {
		a[i] = result[i];
	}
	free(result);
}