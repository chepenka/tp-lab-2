#include <iostream>
using namespace std;
#include "task3.h"
int change(int val) {
	return val * 2;
}
int main() {
	const int n = 5;
	int arr[n]{ 1, 2, 3, 4, 5 };
	map<int, n>(arr, change);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}
	return 0;
}