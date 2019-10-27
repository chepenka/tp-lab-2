#include <iostream>
using namespace std;
#include "task2.h"
char gen() {
	return 'r';
}
int main() {
	const int n = 10;
	char *arr;
	arr = createArr<char, n>(gen);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}
	return 0;
}