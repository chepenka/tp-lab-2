
#define NNN 6
#define NN 25
#include <iostream>
#include "task2.h"
using namespace std;


int main()
{
	const size_t N = 6;
	int* NewAr;
	NewAr = createArr<int, N>(genn);
	for (int i = 0; i < N;i++) {
		printf("%d ", NewAr[i]);
	}
	return 0;
}

