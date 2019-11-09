#ifndef TASK2_H_INCLUDED
#define TASK2_H_INCLUDED
#include <iostream>
#include <string.h>
template<class T, int N>
T* createArr(T (*pgen)()) {
    T* arr = new T[N];
    for(int i = 0; i < N; i++) {
        arr[i] = pgen();
    }
    return arr;
}
#endif
