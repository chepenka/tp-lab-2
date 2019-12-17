#include <iostream>
#include "task3.h"

using namespace std;

template<class T>
T change(T elem) {
	return elem * elem;
}

int main() {
	const int N = 5;
	int* Arr = new int[n];
	for (int i = 1; i < 6; i++) {
		Arr[i - 1] = i;
	}
	map<int, N>(Arr, change);
	for (int i = 0; i < N; i++) {
		cout << Arr[i] << "\n";
	}
	return 0;
}