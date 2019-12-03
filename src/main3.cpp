#include "task3.h"
#include <iostream>
using namespace std;

template<class T>
T change(T val)
{
	return val + 1;
}


int main() {
	char mas[5] = { '1','2','3','4','5' };
	const size_t n = 5;
	map<char, n>(mas, change);
	for (size_t i = 0; i < n; i++) {
		cout << mas[i] << endl;
	}
}
