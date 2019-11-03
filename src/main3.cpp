#include "task3.h"
#include <string.h>

template<class T>
T change(T val)
{
	return val + 1;
}

template<>
char* change(char* val)
{
	size_t n = strlen(val);
	for (size_t i = 0; i < n; i++)
		val[i] = val[i] + 1;
	return val;
}

int main()
{
	const size_t n = 5;
	/*int arr[n] = { 1, 2, 3, 4, 5 };
	map<int, n>(arr, change);*/
	/*double arr[5]{ 1, 2.2, 3.3, 4.4, 5 };
	map<double, n>(arr, change);*/
	/*char arr[n]{ '1', '2', '3', '4', '5' };
	map<char, n>(arr, change);*/
	char* arr[n];
	for (size_t i = 0; i < n; i++)
	{
		arr[i] = new char[i + 2];
		for (size_t j = 0; j < i + 1; j++)
		{
			arr[i][j] = '0' + i;
		}
		arr[i][i + 1] = '\0';
	}
	map<char*, n>(arr, change);

	return 0;
}