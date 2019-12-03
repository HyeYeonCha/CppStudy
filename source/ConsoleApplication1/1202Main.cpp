#include "1202.h"
#include <iostream>

using namespace std;
using namespace aa;

void SwapPointer(int *ref1, int *ref2) {

	int temp = *ref1;
	*ref1 = *ref2;
	*ref2 = temp;
}

void SwapPointer1(int *(&ref1), int *(&ref2)) {
	int *temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int main(void) {

	int num1 = 5;
	int *ptr1 = &num1;
	int num2 = 10;
	int *ptr2 = &num2;

	SwapPointer1(ptr1, ptr2);
	
	cout << "num1 : " << num1 << " / num2 : " << num2 << endl;

	return 0;
}