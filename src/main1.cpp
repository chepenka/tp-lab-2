//
// Created by Оксана on 07.10.2019.
//
#include <iostream>
#include "task1.h"
#include <cstring>
using namespace std;

int main() {
    const size_t n = 6;
    char* val[n]{(char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr"};
    msort(val, n);
    char* expected[n]{(char*)"f", (char*)"ff", (char*)"vvv", (char*)"fff2", (char*)"ffff", (char*)"fffrr"};

    for(size_t i = 0; i < n; i++)
        cout << val[i] << " ";
}