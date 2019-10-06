//
// Created by Илья on 004 04.10.19.
//

#ifndef TP_LAB_2_TASK2_H
#define TP_LAB_2_TASK2_H
#define STRLEN 256
#include <iostream>
#include <cstring>
template <typename T, const int N>
T* createArr(T (*)());


template <typename T, const int N>
T* createArr(T (* func)())
{
    T* result = new T[N];
    for(int i = 0; i < N; i++)
    {
        result[i] = func();
    }
    return result;
}


#endif //TP_LAB_2_TASK2_H
