//
// Created by Оксана on 07.10.2019.
//

#include "task3.h"
#include <iostream>
#include <string.h>
using namespace std;
template<typename T>
T change( T value)
{
    return value + 1;
}

int main(){
    const int n1 = 5;
    int arrInt[n1]{ 1, 2, 3, 4, 5 };
    map<int, n1>(arrInt, change);
    for (int i = 0; i < n1; i++)
        cout << arrInt[i] << " ";
    cout << endl;

    return 0;


}
