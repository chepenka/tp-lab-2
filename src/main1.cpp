#include "task1.h"
#include <iostream>

using namespace std;

int main() {
	int mas[]{ 5, -9, -3, 2, 8, 4, -1, 6, 7 };
	int n = 9;

	msort<int>(mas, n);
	for (int i = 0; i < n; i++) {
		cout << mas[i] << endl;
	}

	char* val[6]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
	msort(val, 6);

	for (int i = 0; i < 6; i++) {
		cout << val[i] << endl;
	}
}