#include "task3.h"
#include "task2.h"
#include "task1.h"

int main()
{
	int* val = createArr<int, 10>(own_gen);

	printArr(val, 10);

	map<int, 10>(val, own_change);

	printArr(val, 10);

	delete[] val;

	return(0);
}

