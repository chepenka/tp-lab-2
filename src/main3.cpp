#include "task3.h"
#include <iostream>
using namespace std;

template<typename T>
T change(T element)
{
	return element + 2;
}

int main() 
{
	const int n = 5;

	int array_1[n] = { 12, 32, 54, 79, 0 };
	map<int, n>(array_1, change);
	for (int i = 0; i < n; i++)
		cout << array_1[i] << " ";
	cout << '\n';

	char array_2[n] = { 'a', 'b', 'c', 'd', 'e' };
	map<char, n>(array_2, change);
	for (int i = 0; i < n; i++)
		cout << array_2[i] << " ";

	return 0;
}
