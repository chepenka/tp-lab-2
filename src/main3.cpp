#include <iostream>
#include "task3.h"

using namespace std;

void TestStrings()
{
    char** a = new char*[3];
    a[0] = new char[2];
    a[1] = new char[2];
    a[2] = new char[2];

    for (int i = 0; i < 3; i++)
    {
        a[i][0] = 'a' + i;
        a[i][1] = 'b' + i;
    }

    cout << "Before call map func:" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            cout << a[i][j];

        cout << endl;
    }

    cout << "After call map func:" << endl;

    map<char*, 3>(a, change);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            cout << a[i][j];

        cout << endl;
    }
}

int main()
{
    TestStrings();
    return 0;
}