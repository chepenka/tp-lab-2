#include "task3.h"
#include <iostream>
#include <string.h>
#include <cstdlib>
#include <time.h>
using namespace std;

template<class T>
T change(T a) {
	return a + 1;
}

int main() {

	srand(time(NULL));
	const int n = 5;
	cout << "arr1: ";
	int arr1[n];
	for (int i = 0; i < n; i++) {
		arr1[i] = rand() % 50 + 1;
		cout << arr1[i] << " ";
	}
	cout << endl;
	map<int, n>(arr1, change);
	cout << "changed arr1: ";
	for (int i = 0; i < n; i++) {
		cout << arr1[i] << " ";
	}
	cout << endl << endl << "arr2: ";
	double arr2[n];
	for (int i = 0; i < n; i++) {
		arr2[i] = (double)(rand() % 100 + 1) / (rand() % 10 + 1);
		cout << arr2[i] << " ";
	}
	map<double, n>(arr2, change);
	cout << endl << "changed arr2: ";
	for (int i = 0; i < n; i++) {
		cout << arr2[i] << " ";
	}

	return 0;
}