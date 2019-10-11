//
//  main.cpp
//  task1
//
//  Created by Андрей Журавлев on 28/09/2019.
//  Copyright © 2019 Андрей Журавлев. All rights reserved.
//

#include <iostream>
#include <typeinfo>
#include "task1.h"
#include "task2.h"
#include "task3.h"

int main(int argc, const char * argv[]) {
    const size_t n = 6;
    int *val = new int[n]{5, 3, 2, 4, 1, 6};
    mergeSort(val, n);
    for (size_t i = 0; i < n; i++)
        std::cout << val[i] << ' ';
    std::cout << std::endl;
}

