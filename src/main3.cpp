#include <iostream>
#include "task3.h"

template <typename T> T change(T a)
{
	return a * a;
}

int main() {
	const int n = 5;
	int nums[n] = { 1, 2, 3, 4, 5 };
	double doubles[n] = { 1.2, 2.3, 3.4, 4.5, 5.6 }; 
	
	map<int, n>(nums, change);	
	map<double, n>(doubles, change);

	for (int i = 0; i < n; i++)
		std::cout << nums[i] << " ";
	std::cout << std::endl;
	
	for (int i = 0; i < n; i++)
		std::cout << doubles[i] << " ";
	std::cout << std::endl;
}