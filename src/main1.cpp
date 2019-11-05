#include "task1.h"
#include "string.h"

int main()
{
	const size_t m = 10;
	int a[m];
	for (int i = 0; i < 10; i++)
		a[i] = rand() % 20 - 10;

	msort(a, m);



	const size_t n = 6;
	char* val[n]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
	
	msort(val, n);
	

	const size_t s = 6;
	double val1[n]{ 4.0, 3.0, 2.4, 2.5, 2.1, -1 };
	
	msort(val1, s);
	

	return 0;
}