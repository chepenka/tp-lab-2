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
        if (arr[start] > arr[start + 1])
            swap(arr[start], arr[start + 1]);
        return;
    }
    MergeSort(arr, start, start + (end - start)/2);
    MergeSort(arr, start + (end - start)/2, end);

    vector<T> ans;
    int ans_part_one = start;
    int ans_center = start + (end - start)/2;
    int ans_part_two = ans_center;
    while(ans.size() != end - start){
        if (ans_part_one >= ans_center || (ans_part_two < end && arr[ans_part_two] <= arr[ans_part_one])) {
            ans.push_back(arr[ans_part_two]);
            ans_part_two++;
        } else {
            ans.push_back(arr[ans_part_one]);
            ans_part_one++;
        }
    }
    for (int i = start; i < end; i++)
        arr[i] = ans[i - start];
}

template <typename T> void MSort(T* a, int n) {
    MergeSort(a, 0, n);
}

#endif //TASK1_TASK1_H
