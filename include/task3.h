template<typename T, int len>
void map(T (&arr)[len], T(*change)(T val)) {
	for (int i = 0; i < len; i++) {
		arr[i] = change(arr[i]);
	}
}