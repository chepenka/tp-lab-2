#include "task1.h"
#include <iostream>

int main() {
	char* val[6]{ (char*)"uhh", (char*)"kak", (char*)"byi", (char*)"ne", (char*)"vyletet", (char*)"mne" };
	msort(val, 6);
	for(int i = 0; i < 6; i++)
		std::cout << val[i] << " ";
}