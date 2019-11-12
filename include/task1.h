//
// Created by Оксана on 07.10.2019.
//

#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H
#include <vector>
#include <cstring>

using namespace std;
template <typename T>
bool cmp(T x, T y){
    return x < y;
}

template <>
bool cmp(char* x, char* y){
    return strlen(x) < strlen(y);
}
template <typename T>
void MergeSort(T* arr, int start, int end){
    if (end - start < 2)
        return;
    if (end - start == 2) {
        if (arr[start] > arr[start + 1]) {
            int t = arr[start];
            arr[start] = arr[start + 1];
            arr[start + 1] = t;
        }
        return;
    }
    MergeSort(arr, start, start + (end - start)/2);
    MergeSort(arr, start + (end - start)/2, end);

    T ans[end - start];
    int i = start;
    int j = start + (end - start)/2;
    int center = start + (end - start)/2;
    int ind = 0;

    while(i < center && j < end){
        if(cmp(arr[i], arr[j])) {
            ans[ind] =arr[i];
            ind++;
            i++;
        } else {
            ans[ind] = arr[j];
            ind++;
            j++;
        }
    }
    while(i < center){
        ans[ind] = arr[i];
        ind++;
        i++;
    }
    while(j < end) {
        ans[ind] = arr[j];
        ind++;
        j++;
    }
    ind = 0;
    for(int i = start;i < end;i++){
        arr[i] = ans[ind];
        ind++;
    }
}

template <typename T> void msort(T* a, int n) {
    MergeSort(a, 0, n);
}

#endif //TASK1_TASK1_H
