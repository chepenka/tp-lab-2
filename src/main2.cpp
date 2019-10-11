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



int main(int argc, const char * argv[]) {
    const size_t n = 5;
    int* arr;
    arr = createArr<int, n>(gen);
    for (size_t i = 0; i < n; i++)
        std::cout << arr[i] << ' ';
    std::cout << std::endl;
}
