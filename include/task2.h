#pragma once
#include <iostream>

template<class T>
T gen1()
{
	static T t = 48;
	return t++;
}

template<>
char* gen1()
{
	static unsigned t = 0;
	t++;
	char* s = new char[t + 1];

	for (size_t i = 0; i < t; i++)
		s[i] = '0' + i;
	s[t] = '\0';
	return s;
}

template<class T, const size_t N>
T* createArr(T (*gen1)()) {
	T* newArray = new T [N];
	for (int i = 0; i < N; i++) {
		newArray[i] = gen1();
	}
	return newArray;
}