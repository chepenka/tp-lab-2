#include <iostream>
#include "task1.h"

int main() {
	int nums[] = { 12, 11, -5, 1, 5, -53, 17, 6, -1, 3, 4, 7, 21, 13 };
	char * words[] = { (char *) "three", (char *) "five", (char *) "sixteen", (char *) "aye", (char *) "on" };
	double doubles[] = { 4.0, 3.0, 2.4, 2.5, 2.1, -1 };
	size_t n1 = 14, n2 = 5, n3 = 6;
	msort(nums, n1);
	msort(words, n2);
	msort(doubles, n3);
	for (int i = 0; i < n1; i++)
		std::cout << nums[i] << " ";
	std::cout << std::endl;
	
	for (int i = 0; i < n2; i++)
		std::cout << words[i] << " ";
	std::cout << std::endl;
	
	for (int i = 0; i < n3; i++)
		std::cout << doubles[i] << " ";
}
