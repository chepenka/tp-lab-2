#include <string.h>
using namespace std;

template<class T>
T changee(T val)
{
	return val + 1;
}

template<>
char* changee(char* val)
{
	size_t n = strlen(val);
	for (size_t i = 0; i < n; i++)
		val[i] = val[i] + 1;
	return val;
}


template<class T, const size_t N>
static void map(T *ar,T (*change)(T)) {
    //int n=ar.size()
	for (int i = 0; i < N; i++) {
		ar[i] = change(ar[i]);
	}
}
