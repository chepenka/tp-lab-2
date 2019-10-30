template<class T>
T genn()
{
	static int t = 123;
	return t++;
}

template<>
char* genn()
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
 static T* createArr(T (*gen)()) {
	T* newAr = new T[N];
	for (int i = 0; i < N; i++) {
		newAr[i] = gen();
	}
	return newAr;
}