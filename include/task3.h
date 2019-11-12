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
template <typename T, int n>
void map(char** a, char* (*change)(char* value)){
    for(int i = 0;i < n;i++){
        char* w = new char[strlen(a[i]) + 1];
        for(int j = 0;j < strlen(a[i]);j++){
            w[j] = a[i][j];
        }
        w[strlen(a[i])] = '\0';
        a[i] = change(w);
    }
}
#endif //TASK1_TASK3_H
