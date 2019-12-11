#include <iostream>
#include "Point0402.h"

void Point::Init(int x, int y) {
	xpos = x;
	ypos = y;
}

void Point::ShowPointInfo() {
	cout << "[" << xpos << ", " << ypos << "]" << endl;
}