#ifndef __TASK2_H_
#define __TASK2_H_

template<class T> T own_gen()
{
	static int t = 48;
	return t++;
}

template <class T> void printArr(T* arr, size_t len)
{
	for (size_t i = 0; i < len; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

template<typename T, const size_t size> T* createArr(T(*gen)()) {
	T* arr = new T[size];
	for (size_t i = 0; i < size; i++)
		arr[i] = gen();
	return arr;
}

#endif //__TASK2_H_

