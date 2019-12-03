#include <iostream>
#include "task1.h"
int main() {
    const size_t n = 6;
    int *val = new int[n]{5, 3, 2, 4, 1, 6};
    char* val1[n]{(char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr"};
    double val2[n]{4.0, 3.0, 2.4, 2.5, 2.1, -1};
    msort(val, n);
    msort(val1, n);
    msort(val2, n);
    for(int i = 0; i < n;i++)
        std::cout << val[i] << " ";
    std::cout << std::endl;
    for(int i = 0; i < n;i++)
        std::cout << val1[i] << " ";
    std::cout << std::endl;
    for(int i = 0; i < n;i++)
        std::cout << val2[i] << " ";
    std::cout << std::endl;
    return 0;
}
