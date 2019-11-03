#include "task1.h"

int main()
{
	/*int val[] = { 9, 5, 3, 7, 4, 2, 6, 1 };
	int n = sizeof(val) / sizeof(int);
	msort(val, n);*/
	/*double val[] = { 4.0, 3.0, 2.4, 2.5, 2.1, -1};
	int n = sizeof(val) / sizeof(double);
	msort<double>(val, n);*/
	char* val[] = { (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
	int n = sizeof(val) / sizeof(char*);
	msort<char*>(val, n);
	printArr(val, n);

	return 0;
}