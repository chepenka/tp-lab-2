//
// Created by Илья on 004 04.10.19.
//

#ifndef TP_LAB_2_TASK1_H
#define TP_LAB_2_TASK1_H
#include <iostream>
#include<cstring>
#include <type_traits>
#define STRLEN 256

template<typename T>
void msort(T* arr, int n);

template<typename T>
void mergeSort(T* arr, int l, int r);

template<typename T>
void merge(T* arr, int l, int m, int r);
template<>
void merge(char** arr, int l, int m, int r);


template<typename T>
void msort(T* arr, int n)
{
    mergeSort(arr, 0, n-1);
}

template<typename T>
void mergeSort(T* arr, int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

template<typename T>
void merge(T* arr, int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    /* create temp arrays */
    T* L = new T[n1];
    T* R = new T[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    /* Merge the temp arrays back into arr[l..r]*/

    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
    delete[]R;
    delete[]L;
}

template<>
void merge(char** arr, int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    /* create temp arrays */
    char** L = new char*[n1];
    char** R = new char*[n2];

    for (i = 0; i < n1; i++)
        L[i] = new char[STRLEN];
    for (j = 0; j < n2; j++)
        R[j] = new char[STRLEN];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        strcpy(L[i], arr[l + i]);
    for (j = 0; j < n2; j++)
        strcpy(R[j], arr[m + 1 + j]);

    /* Merge the temp arrays back into arr[l..r]*/

    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (strlen(L[i]) < strlen(R[j]))
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
    delete[]R;
    delete[]L;
}

#endif //TP_LAB_2_TASK1_H
