#include "task3.h"
#include <iostream>
using namespace std;

template<class T>
T change(T val)
{
	return val + 1;
}

template<>
char* change(char* val)
{
	size_t n = strlen(val);
	for (size_t i = 0; i < n; i++)
		val[i] = val[i] + 1;
	return val;
}

int main() {
	char mas[5] = { '1','2','3','4','5' };
	const size_t n = 5;
	map<char, n>(mas, change);
	for (size_t i = 0; i < n; i++) {
		cout << mas[i] << endl;
	}
}
