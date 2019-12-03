//
// Created by Оксана on 07.10.2019.
//

#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H
#include <cstring>
template <typename T, int n>
void map(T* a, T (*change)(T value)){
    for(int i = 0;i < n;i++){
        a[i] = change(a[i]);
    }
}

#endif //TASK1_TASK3_H
