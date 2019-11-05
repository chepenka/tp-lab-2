#include "task2.h"
#include <iostream>
using namespace std;

int main()
{
	const size_t N = 5;
	char **newArr;
	newArr = createArr<char*, N>(gen);
	printArray(newArr, N);

	return 0;
}