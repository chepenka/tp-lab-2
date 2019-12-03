#ifndef TASK3_H_INCLUDED
#define TASK3_H_INCLUDED
#include <iostream>
#include <string.h>
template<class T, int N>
void map(T (&arr)[N], T (*pchange)(T val)) {
    for(int i = 0; i < N; i++){
        arr[i] = pchange(arr[i]);
    }
}

#endif
