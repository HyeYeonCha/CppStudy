#include "1202.h"
#include <iostream>

using namespace std;
using namespace aa;


int main(void) {

	const int num = 12;
	const int* ptr = &num;

	const int &ref = *ptr;
	//const int *(&ref) = ptr;

	cout << *ptr << endl;
	cout << *(&ref) << endl;
	//cout << *ref << endl;

	return 0;
}