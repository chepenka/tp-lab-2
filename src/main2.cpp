#include "task2.h"
#include <iostream>
using namespace std;

template<typename T>
T gen()
{
	return rand()%100;
}

int main() 
{
	const int n = 5;

	int *array = createArr<int, n>(gen);
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}

	return 0;
}
