#include <iostream>
#include "task1.h"
using namespace std;
int main() {
	int n1 = 9, n2 = 5, n3 = 6;
	int mas1[]{ 5, -9, -3, 2, 8, 4, -1, 6, 7 };
	double mas2[]{5.5, 3.1, 1.3, 4.4, 2.8};
	char* mas3[6]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };

	msort<int>(mas1, n1);
	for (int i = 0; i < n1; i++) {
		cout << mas1[i] << " ";
	}
	cout << "\n";

	msort<double>(mas2, n2);
	for (int i = 0; i < n2; i++) {
		cout << mas2[i] << " ";
	}
	cout << "\n";

	msort<char *>(mas3, n3);
	for (int i = 0; i < n3; i++) {
		cout << mas3[i] << " ";
	}
	cout << "\n";
	return 0;
}