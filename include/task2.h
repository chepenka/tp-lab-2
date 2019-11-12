#include <cstdlib>
#include <ctime>
using namespace std;

template <typename T>
T gen()
{
    T value = rand() % 100 + 1;
    return value;
}

template <>
char* gen()
{
    int n = rand() % 10 + 1;
    char* str = new char[n];

    for (int i = 0; i < n - 1; i++)
        str[i] = 'a' + rand() % 26;

    str[n - 1] = '\0';
    return str;
}

template <typename T, int size>
T* createArr(T (*generate)())
{
    srand(time(NULL));
    T* arr = new T[size];
    for (int i = 0; i < size; i++)
        arr[i] = generate();

    return arr;
}
