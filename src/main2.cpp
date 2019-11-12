//
// Created by Оксана on 07.10.2019.
//
#include "task2.h"
#include <iostream>
using namespace std;

template<typename T>
T gen()
{
    return 1;
}
int main(){
    int* arr;
    const int n = 5;
    arr = createArr<int, n>(&gen);
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;

}
