template<typename T, int len>
T* createArr(T (*gen)()) {
	T* arr = new T[len];
	for (int i = 0; i < len; i++) {
		arr[i] = gen();
	}
	return arr;
}