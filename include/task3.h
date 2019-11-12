#include <cstring>

template <typename T, int n>
void map(T* arr, T (*func)(T value))
{
    for (int i = 0; i < n; i++)
        arr[i] = func(arr[i]);
}