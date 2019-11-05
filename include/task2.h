#pragma once


template <typename T>
static void printArray(T* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
}

template<typename T> T gen()
{
	
	static int t = 48;
	return t++;
}

template<> char* gen()
{
	
	static unsigned t = 0;
	t++;
	char* s = new char[t + 1];

	for (size_t i = 0; i < t; i++)
		s[i] = '0' + i;
	s[t] = '\0';

	return s;
}

template<typename T, const size_t N> T* createArr(T (*gen)())
{
	T* newArr = new T[N];

	for (int i = 0; i < N; i++)
		newArr[i] = gen();
	return newArr;
}

