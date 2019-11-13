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
    char arr[n1]{ '1', '2', '3', '4', '5' };
    map<char, n1>(arr, change);
    for (int i = 0; i < n1; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;


}