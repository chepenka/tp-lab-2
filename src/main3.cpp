//
// Created by Илья on 006 06.10.19.
//
#include <iostream>
#include "task3.h"
using std::cout;
using std::endl;
template<class T>
T change(T val)
{
    return 51;
}

template<>
char* change(char* val)
{
    return "abc";
}

int main()
{
    const int n = 5;
    int arr[n]{1, 1, 2, 3, 5};
    map<int, n>(arr, change);
    for(int a : arr)
    {
        cout << a << endl;
    }
    return 0;
}
