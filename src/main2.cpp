#include <iostream>
#include "task2.h"

using namespace std;

void TestingStrings()
{
    auto a = createArr<char*, 5>(gen);
    cout << "Generated array:" << endl;
    for (int i = 0; i < 5; i++)
        cout << a[i] << endl;
}

int main()
{
    TestingStrings();
    return 0;
}
