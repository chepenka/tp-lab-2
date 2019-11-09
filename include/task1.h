#ifndef TASK1_H_INCLUDED
#define TASK1_H_INCLUDED
#include <iostream>
#include <string.h>
template<class T>
void merge(T* (&arr), int startPos, int middlePos, int lastPos){
    int lengthLeft = middlePos - startPos + 1;
        int lengthRight = lastPos - middlePos;
        int length = lengthRight + lengthLeft;
        T* tempLeft = new T[lengthLeft];
        T* tempRight = new T[lengthRight];
        for (int i = 0; i < lengthLeft; i++) {
            tempLeft[i] = arr[startPos + i];
        }
        for (int i = 0; i < lengthRight; i++) {
            tempRight[i] = arr[1 + middlePos + i];
        }
        int i = startPos;
        int posl = 0;
        int posr = 0;
        while ((posl < lengthLeft) && (posr < lengthRight)) {
            if (tempLeft[posl] <= tempRight[posr]) {
                arr[i] = tempLeft[posl];
                posl++;
            }
            else{
                arr[i] = tempRight[posr];
                posr++;
            }
            i++;
        }
        while (posl < lengthLeft) {
            arr[i] = tempLeft[posl];
            posl++;
            i++;
        }
        while (posr < lengthRight) {
            arr[i] = tempRight[posr];
            posr++;
            i++;
        }
}
template<>
void merge(char** (&arr), int startPos, int middlePos, int lastPos){
    int lengthLeft = middlePos - startPos + 1;
        int lengthRight = lastPos - middlePos;
        int length = lengthRight + lengthLeft;
        char** tempLeft = new char*[lengthLeft];
        char** tempRight = new char*[lengthRight];
        for (int i = 0; i < lengthLeft; i++) {
            tempLeft[i] = arr[startPos + i];
        }
        for (int i = 0; i < lengthRight; i++) {
            tempRight[i] = arr[1 + middlePos + i];
        }
        int i = startPos;
        int posl = 0;
        int posr = 0;
        while ((posl < lengthLeft) && (posr < lengthRight)) {
            if (strlen(tempLeft[posl]) <= strlen(tempRight[posr])) {
                arr[i] = tempLeft[posl];
                posl++;
            }
            else{
                arr[i] = tempRight[posr];
                posr++;
            }
            i++;
        }
        while (posl < lengthLeft) {
            arr[i] = tempLeft[posl];
            posl++;
            i++;
        }
        while (posr < lengthRight) {
            arr[i] = tempRight[posr];
            posr++;
            i++;
        }
}

template<class T>
void recmsort(T* (&arr), int startPos, int lastPos){
    if (startPos < lastPos){
        int middlePos = (lastPos + startPos) / 2;
        recmsort(arr, startPos, middlePos);
        recmsort(arr, middlePos + 1, lastPos);
        merge(arr, startPos, middlePos, lastPos);
    }
}

template<class T>
void msort(T* arr, int n) {
    recmsort(arr, 0, n-1);
}

#endif // TASK1_H_INCLUDED

