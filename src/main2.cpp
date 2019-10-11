//
//  main2.cpp
//  task2.2
//
//  Created by Андрей Журавлев on 11.10.2019.
//  Copyright © 2019 Андрей Журавлев. All rights reserved.
//

#include <iostream>
#include <typeinfo>
#include "task1.h"
#include "task2.h"
#include "task3.h"

template<class T>
T gen()
{
    static int t = 48;
    return t++;
}

template<>
char* gen()
{
    static unsigned t = 0;
    t++;
    char* s = new char[t + 1];

    for(size_t i = 0; i < t; i++)
        s[i] = '0' + i;
    s[t] = '\0';

    return s;
}

int main(int argc, const char * argv[]) {
    const size_t n = 5;
    int* arr;
    arr = createArr<int, n>(gen);
    for (size_t i = 0; i < n; i++)
        std::cout << arr[i] << ' ';
    std::cout << std::endl;
}
