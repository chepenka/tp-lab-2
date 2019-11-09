#include "task2.h"

using namespace std;
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

int main()
{
    int* arr = createArr<int, 6>(gen);
    double* arr2 = createArr<double, 6>(gen);
    char** arr3 = createArr<char*, 6>(gen);
    cout<< "generated arrays of different types:" << '\n';
    for (int i = 0; i < 6; i++){
        cout << arr[i] <<' ';
    }
    cout << '\n';
    for (int i = 0; i < 6; i++){
        cout << arr2[i] <<' ';
    }
    cout << '\n';
    for (int i = 0; i < 6; i++){
        cout << arr3[i] <<' ';
    }
    cout << '\n';
}
