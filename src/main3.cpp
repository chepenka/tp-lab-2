#include <iostream>
#include "task3.h"
#include <time.h>
template <class T>
T change(T a){
    return a + 1;
}

int main() {
    const size_t n = 5;
    int arr[n]{1, 2, 3, 4, 5};
    map<int, n>(arr, change);

    for(int i = 0 ; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    double arr2[5]{1, 2.2, 3.3, 4.4, 5};
    map<double, n>(arr2, change);

    for(int i = 0 ; i < n; i++)
        std::cout << arr2[i] << " ";
    std::cout << std::endl;

}
