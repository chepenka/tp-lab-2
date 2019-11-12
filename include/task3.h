#include <cstring>

template <typename T>
T change(T value)
{
    return value + 2;
}

template <>
char* change(char* str)
{
    int n = strlen(str);
    for (int i = 0; i < n; i++)
        str[i] = str[i] + 1;

    return str;
}

template <typename T, int n>
void map(T* arr, T (*func)(T value))
{
    for (int i = 0; i < n; i++)
        arr[i] = func(arr[i]);
}