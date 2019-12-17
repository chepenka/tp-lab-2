/*#include <iostream>
#include "task2.h"
using namespace std;

template<class T>
T gen() {
	return rand() % 10;
}

int main() {
	const int N = 20;
	int* arr;
	arr = createArr<int, N>(gen);

	for (int i = 0; i < N; i++) {
		cout << arr[i] << "\n";
	}
	return 0;
}*/
#include "task2.h"
#include <iostream>

using namespace std;

int main() {
	char* arr = NULL;
	const size_t n = 6;
	arr = createArr<char, n>(gen);
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}
	return 0;
}
