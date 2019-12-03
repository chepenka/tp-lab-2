//
// Created by Оксана on 07.10.2019.
//

#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H

template <typename T, int n> T* createArr(T (*gen)(void)){
    T* arr = new T[n];
    for (int i = 0; i < n; i ++){
        arr[i] = gen();
    }
    return arr;
}

#endif //TASK1_TASK2_H
