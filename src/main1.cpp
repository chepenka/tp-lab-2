#include <iostream>
#include <time.h>
#include <cstdlib>
#include "task1.h"
using namespace std;

int main() {
	const int n = 5;
	int arr1[n];
	srand(time(NULL)); 
	cout << "arr1: ";
	for (int i = 0; i < n; i++) {
		arr1[i] = rand() % 50 + 1;
		cout << arr1[i] << " ";
	}
	cout << endl;
	msort(arr1, n);
	cout << "sorted arr1: ";
	for (int i = 0; i < n; i++) {
		cout << arr1[i] << " ";
	}
	cout << endl << endl;
	
	
	double arr2[n];
	cout << "arr2: ";
	for (int i = 0; i < n; i++) {
		arr2[i] = (double)(rand() % 100+1) / (rand() % 10+1);
		cout << arr2[i] << " ";
	}
	msort(arr2, n);
	cout << endl << "sorted arr2: ";
	for (int i = 0; i < n; i++) {
		cout << arr2[i] << " ";
	}
	
	
	char* arr3[n] = { (char*)"abcdef", (char*)"abc", (char*)"b", (char*)"bced", (char*)"abbaabba" };
	cout << endl << endl << "arr3: ";
	for (int i = 0; i < n; i++) {
		cout << arr3[i] << " ";
	}
	msort(arr3, n);
	cout << endl << "sorted arr3: ";
	for (int i = 0; i < n; i++) {
		cout << arr3[i] << " ";
	}
	return 0;
}