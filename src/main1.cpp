#include <iostream>
#include "task1.h"

int main()
{
	
	const size_t n = 7;
	double arr[n]{ 4.0, 3.5, 2.4, -2.5, 2.1, 5,8 };

	msort(arr, n);

	for (size_t i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}

}