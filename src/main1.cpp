#include "task1.h"
#include <iostream>
using namespace std;

int main()
{
	int array0[9] = { 1,0,6, 788, 53, 34, 34, 2, 24 };
	msort(array0, 0, 8);
	for (int i = 0; i < 9; i++)
		cout << array0[i] << " ";

	cout << "\n";

	int array1[10] = { 10, 100, 23, 3545, 3, 0, 3, 6, 753, 23 };
	msort(array1, 0, 9);
	for (int i = 0; i < 10; i++)
		cout << array1[i] << " ";

	cout << "\n";

	char* array2[10] = { (char*)"one", (char*)"two", (char*)"three", (char*)"four", (char*)"five", (char*)"six", (char*)"seven", (char*)"eight", (char*)"nine", (char*)"ten"};
	msort(array2, 0, 9);
	cout << "\n";
	for (int i = 0; i < 10; i++)
		cout << array2[i] << " ";

	cout << "\n";

	return 0;
}

