//
//  task1.hpp
//  task1
//
//  Created by Андрей Журавлев on 28/09/2019.
//  Copyright © 2019 Андрей Журавлев. All rights reserved.
//

#ifndef task1_hpp
#define task1_hpp
#include <stddef.h>
#include <string.h>
#include <string>
#include <vector>

template<typename T>
void merge(T *arr, size_t n, size_t left, size_t medium, size_t right) {
    int iterationLeft = 0, iterationRight = 0;
    std::vector<T> result(right - left);
        
        while (left + iterationLeft < medium && medium + iterationRight < right) {
            if (arr[left + iterationLeft] < arr[medium + iterationRight]) {
                result[iterationLeft + iterationRight] = arr[left + iterationLeft];
                iterationLeft++;
            } else {
                result[iterationLeft + iterationRight] = arr[medium + iterationRight];
                iterationRight++;
            }
        }
        
        while (left + iterationLeft < medium) {
                result[iterationLeft + iterationRight] = arr[left + iterationLeft];
                iterationLeft++;
        }
        
        while (medium + iterationRight < right) {
                result[iterationLeft + iterationRight] = arr[medium + iterationRight];
                iterationRight++;
        }
        
        for (int i = 0; i < iterationLeft + iterationRight; i++) {
            arr[left + i] = result[i];
        }
}

template<>
void merge(char **arr, size_t n, size_t left, size_t medium, size_t right) {
    int iterationLeft = 0, iterationRight = 0;
    char **result = new char*[right - left];
    while (left + iterationLeft < medium && medium + iterationRight < right) {
        if (strlen(arr[left + iterationLeft]) < strlen(arr[medium + iterationRight])) {
            result[iterationLeft + iterationRight] = arr[left + iterationLeft];
            iterationLeft++;
        } else {
            result[iterationLeft + iterationRight] = arr[medium + iterationRight];
            iterationRight++;
        }
    }
    
    while (left + iterationLeft < medium) {
        result[iterationLeft + iterationRight] = arr[left + iterationLeft];
        iterationLeft++;
    }
    
    while (medium + iterationRight < right) {
        result[iterationLeft + iterationRight] = arr[medium + iterationRight];
        iterationRight++;
    }
    
    for (int i = 0; i < iterationLeft + iterationRight; i++)
        arr[left + i] = result[i];
}

template<typename T>
void mergeSortAction(T *arr, size_t n, size_t left, size_t right) {
    if (left + 1 >= right)
        return;
    size_t medium = (left + right) / 2;
    mergeSortAction(arr, n, left, medium);
    mergeSortAction(arr, n, medium, right);
    merge(arr, n, left, medium, right);
}

template<typename T>
void msort(T *arr, size_t n) {
    mergeSortAction(arr, n, 0, n);
}
#endif /* task1_hpp */
