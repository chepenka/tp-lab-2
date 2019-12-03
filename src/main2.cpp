#include "task2.h"
template<typename T> T g() {
	static T a = 8;
	a = a + 1;
    return a;
}
int main() {
	int* arr = createArr<int,8>(g);
}