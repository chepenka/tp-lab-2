#include "task2.h"
#include <iostream>
using namespace std;

int main()
{

	template<typename T>
	T gen()
	{

		static int t = 48;
		return t++;
	}

	template<>
	char* gen()
	{

		static unsigned t = 0;
		t++;
		char* s = new char[t + 1];

		for (size_t i = 0; i < t; i++)
			s[i] = '0' + i;
		s[t] = '\0';

		return s;
	} 

	const size_t N = 5;
	char **newArr;
	newArr = createArr<char*, N>(gen);
	

	return 0;
}