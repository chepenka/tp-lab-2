#pragma once

template <class T, const int N>
T* createArr(T(*gen)()){
    T *mas = new T[N];
    for(int i = 0; i < N; i++)
        mas[i] = gen();
    return mas;
}
