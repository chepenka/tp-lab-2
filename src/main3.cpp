#include "task3.h"

template<class T>
	T change(T val)
	{
		return val*9;
	}

template<>
	char* change(char* val)
	{
		val[0]='X';
		return val;
	}

int main() {
	int a[8]{2,3,4,5,6,7,8,4};
	map<int,8>(a,change);
}