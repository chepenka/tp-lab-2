//
// Created by Илья on 004 04.10.19.
//
#include "task2.h"
#include <iostream>

template<typename T>
T gen()
{
    return 0;
}

int main()
{
    int* arr;
    const int n = 5;
    arr = createArr<int, n>(gen);
    for(int i = 0; i < n; i++)
    {
        std::cout << arr[i] << std::endl;
    }

    return 0;
}
