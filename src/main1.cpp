
#define NNN 6
#define NN 25
#include <iostream>
#include "task1.h"
int main()
{
	//int val[NNN] = {5, 3, 2, 4, 1, 6};
	double val[NNN]{ 4.0, 3.0, 2.4, 2.5, 2.1, -1 };
	//char* val[NNN]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
	//msort(A,NN);
	msort(val, NNN);
	for (int j = 0; j < NNN; j++) {
		//printf("%d ", A[j]);
		printf("%f ", val[j]);
	}
	return 0;
}

