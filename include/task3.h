#pragma once

#include "string.h"

template <class T, const size_t N>
void map(T* mas, T(*change)(T)){
    for(int i = 0; i < N; i++)
        mas[i] = change(mas[i]);

}
