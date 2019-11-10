#include "task2.h"

int main()
{
	int* val = createArr<int, 10>(own_gen);
	
	printArr(val, 10);

	delete[] val;

	return(0);
}

