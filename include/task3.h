//
// Created by Илья on 005 05.10.19.
//

#ifndef TP_LAB_2_TASK3_H
#define TP_LAB_2_TASK3_H

#include <iostream>
#include <cstring>

template <typename T, const int N>
void map(T*, T (*)(T));


template <typename T, const int N>
void map(T* arr, T (*change)(T))
{
    for (int i = 0; i < N; i++)
    {
        arr[i] = change(arr[i]);
    }
}


#endif //TP_LAB_2_TASK3_H
