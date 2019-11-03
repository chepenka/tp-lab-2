#include "task3.h"

int main()
{
	const size_t n = 5;
	int arr[n] = { 1, 2, 3, 4, 5 };
	map<int, n>(arr, change);
	/*double arr[5]{ 1, 2.2, 3.3, 4.4, 5 };
	map<double, n>(arr, change);*/
	/*char arr[n]{ '1', '2', '3', '4', '5' };
	map<char, n>(arr, change);*/
	/*char* arr[n];
	for (size_t i = 0; i < n; i++)
	{
		arr[i] = new char[i + 2];
		for (size_t j = 0; j < i + 1; j++)
		{
			arr[i][j] = '0' + i;
		}
		arr[i][i + 1] = '\0';
	}
	map<char*, n>(arr, change);*/
	printArr(arr, n);

	return 0;
}