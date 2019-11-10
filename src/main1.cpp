#include "task1.h"
#include <iostream>
#include <string>

int main()
{

	int intArr[] = { 9,-32,122,-56,0,54, 8,6,5,4,3,1};
	char foo[]  = "foo";
	char bar[]  = "bar";
	char bar2[] = "bar2";
	char* charArr[]{ foo, bar, bar2 };

	printArr(intArr, sizeof(intArr)/sizeof(intArr[0]));

	msort(intArr, sizeof(intArr) / sizeof(intArr[0]));

	printArr(intArr, sizeof(intArr) / sizeof(intArr[0]));


	const size_t n = 6;
	char* val[n]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
	char* expected[n]{ (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fff2", (char*)"ffff", (char*)"fffrr" };

	printArr(val, sizeof(val)/sizeof(val[0]));
	msort(val, sizeof(val)/sizeof(val[0]));
	printArr(val, sizeof(val)/sizeof(val[0]));

	return(0);
}
