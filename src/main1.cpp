#include <iostream>
#include "task1.h"

using namespace std;

int main() {
	int n;
	cin >> n;
	char* str[5] = { (char*)"Nizkaya", (char*)"zhizn`", (char*)"ya", (char*)"svoih", (char*)"topchy" };
	msort(str, n);
	for (int i = 0; i < n; i++) {
		cout << str[i] << "\n";
	}

	int* mas = new int[n];
	for (int i = 0; i < n; i++) {
		mas[i] = n - i;
	}
	msort(mas, n);
	for (int i = 0; i < n; i++) {
		cout << mas[i] << "\n";
	}
	cin >> n;
	delete[] mas;
	return 0;
}