#include <iostream>
#include <time.h>
#include <cstdlib>
#include "task2.h"
using namespace std;

template<class T>
T gen() {
	return rand() % 50 + 1;
}

int main() {
	srand(time(NULL));
	const int n = 10;
	int* arr;
	arr = createArr<int, n>(gen);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";  
	}
	cout << endl;

	return 0;
}