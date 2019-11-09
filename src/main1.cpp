#include "task1.h"

using namespace std;

int main()
{
    const size_t n = 6;
	double val[n]{4.0, 3.0, 2.4, 2.5, 2.1, -1};
	int *val2 = new int[n]{5, 3, 2, 4, 1, 6};
	char* val3[n]{(char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr"};
	msort(val, n);
	msort(val2, n);
	msort(val3, n);
    cout << "Hello. I will complete first task for you.\nResult will appear hear:" << '\n';
    for (int i = 0; i < n; i++){
        cout << val[i] <<' ';
    }
    cout << '\n';
    for (int i = 0; i < n; i++){
        cout << val2[i] <<' ';
    }
    cout << '\n';
    for (int i = 0; i < n; i++){
        cout << val3[i] <<' ';
    }
    cout << '\n';
    return 0;
}
