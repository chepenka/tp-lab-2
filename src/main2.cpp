#include "task2.h"
#include <iostream>
using namespace std;

template<typename T>
T gen1()
{
	return 'a';
}

template<typename T>
T gen2()
{
	return 123;
}



int main()
{
	int N1 = 10;
	char * arr1;
	arr1 = createArr<char>(gen1, N1);
	for (int i = 0; i < N1; i++)
	{
		cout << arr1[i] << ' ';
	}
	
	cout << "\n";

	int N2 = 4;
	int * arr2;
	arr2 = createArr<int>(gen2, N2);
	for (int i = 0; i < N2; i++)
	{
		cout << arr2[i] << ' ';
	}


	return 0;
}