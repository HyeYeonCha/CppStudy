#include "1202.h"
#include <iostream>

using namespace std;
using namespace aa;

typedef struct __Point {
	int xpos;
	int ypos;
}Point;

Point& PntAdder(const Point &p1, const Point &p2) {
	
	Point *ppt = new Point;

	ppt->xpos = p1.xpos + p2.xpos;
	ppt->ypos = p1.ypos + p2.ypos;
	
	return *ppt;
}

int main(void) {

	Point *p1 = new Point;
	p1->xpos = 1;
	p1->ypos = 2;

	Point *p2 = new Point;
	p2->xpos = 2;
	p2->ypos = 1;

	Point &ref = PntAdder(*p1, *p2);

	cout << "(" << ref.xpos << "," << ref.ypos << ")" << endl;

	delete p1;
	delete p2;
	delete &ref;

	return 0;
}