#include <iostream>
#include "task2.h"
#include <ctime>

using namespace std;

template <typename T>
T gen()
{
    T value = rand() % 100 + 1;
    return value;
}

template <>
char* gen()
{
    int n = rand() % 10 + 1;
    char* str = new char[n];

    for (int i = 0; i < n - 1; i++)
        str[i] = 'a' + rand() % 26;

    str[n - 1] = '\0';
    return str;
}

void TestingStrings()
{
    auto a = createArr<char*, 5>(gen);
    cout << "Generated array:" << endl;
    for (int i = 0; i < 5; i++)
        cout << a[i] << endl;
}

int main()
{
    srand(time(NULL));
    TestingStrings();
    return 0;
}
