#include <iostream>
#include "task2.h"
#include <time.h>
template <class T>
T gen(){

    return rand() % 10;
}

int main() {
    const size_t n = 5;
    int* arr;
    srand(time(nullptr));
    arr = createArr<int, n>(gen);

    for(int i = 0 ; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
    char* arr1;
    arr1 = createArr<char, n>(gen);

    for(int i = 0 ; i < n; i++)
        std::cout << arr1[i] << " ";
    std::cout << std::endl;
    return 0;

}
