#include <iostream>
#include <string>
#include <cstdlib>
#include <task1.h>
using namespace std;

void TestStrings()
{
    char* arr[5] = {"hey", "name", "my", "Egor", "heey"};

    cout << "Initial array:" << endl;

    for (int i = 0; i < 5; i++)
    {
        int n = strlen(arr[i]);
        for (int j = 0; j < n; j++)
            cout << arr[i][j];
        cout << " ";
    }

    msort(arr, 5);
    cout << endl << "Sorted array" << endl;

    for (int i = 0; i < 5; i++)
    {
        int n = strlen(arr[i]);
        for (int j = 0; j < n; j++)
            cout << arr[i][j];
        cout << " ";
    }

    cout << endl;
}

int main()
{
    TestStrings();
    return 0;
}