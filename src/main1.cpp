#include "task1.h"
#include <iostream>
using namespace std;

int main()
{
	const int n = 5;

	char *array_1[n] = { "I", "~~~~~", "bread", "am", "heheheh" };
	msort<char*>(array_1, n);
	for (int i = 0; i < n; i++)
	{
		cout << array_1[i] << ' ';
	}
	cout << '\n';

	int array_2[n] = { 12, 32, 54, 79, 0 };
	msort<int>(array_2, n);
	for (int i = 0; i < n; i++)
	{
		cout << array_2[i] << ' ';
	}

	return 0;
}
