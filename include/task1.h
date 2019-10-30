#pragma once
#include <string.h>

template <class T>
bool cmp(T &a, T &b)
{
    return a < b;
}


template<>
bool cmp(char* &a, char* &b)
{
    return strlen(a) < strlen(b);
}



template <class T>
void msort(T* mas, const size_t N){
    if(N <= 1)
        return;
    size_t n1 = N / 2;
    size_t n2 = N - N / 2;
    msort(mas, n1);
    msort(mas + N / 2, n2);

    size_t cur1 = 0, cur2 = 0;
    T* temp = new T[N];
    size_t i = 0;
    while(cur1 < n1 && cur2 < n2){
        if(cmp(mas[cur1], mas[n1 + cur2])){
            temp[i++] = mas[cur1++];
        }
        else{
            temp[i++] = mas[n1 + cur2++];
        }
    }
    while(cur1 < n1){
        temp[i++] = mas[cur1++];
    }
    while(cur2 < n2){
        temp[i++] = mas[n1 + cur2++];
    }
    for (int i = 0; i < N; i++)
        mas[i] = temp[i];
}
