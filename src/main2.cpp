#include <iostream>
#include "task2.h"

template <typename T> T gen()
{
	static T t = 10;
	return ++t;
}

int main() {
	const int n = 15;
	int * arr;
	arr = createArr<int, n>(gen);
	for (int i = 0; i < n; i++)
		std::cout << arr[i] << " ";
	std:: cout << std::endl;
}