#include "task2.h"
#include <iostream>
template<typename T> T g() {
	static T a = 10;
	a++;
	return a;
}
int main() {
	int* arr = createArr<int, 8>(g);
	for (int i = 0; i < 8; i++)
		std::cout << arr[i] << " ";
}