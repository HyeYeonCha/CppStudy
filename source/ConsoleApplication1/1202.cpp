#include "1202.h"
#include <iostream>

using namespace std;

void Printer::SetString(const char *str) {
	strcpy_s(str1, str);
}
void Printer::ShowString(void) {
	cout << str1 << endl;
}
