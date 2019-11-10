#ifndef __TASK2_H_
#define __TASK2_H_

using namespace std;

template<class T> T own_gen()
{
	static int t = 48;
	return t++;
}

template<typename T, const size_t size> T* createArr(T(*gen)()) {
	T* arr = new T[size];
	for (size_t i = 0; i < size; i++)
		arr[i] = gen();
	return arr;
}

#endif //__TASK2_H_

