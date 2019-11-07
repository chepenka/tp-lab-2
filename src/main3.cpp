#include "task3.h"
#include <iostream>
using namespace std;

template<typename T>
T change(T param)
{
	return param * 2;
}

int main()
{
	int arr[5] = { 0, 1, 2, 3, 4};
	map<int, 5>(arr, change);
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}