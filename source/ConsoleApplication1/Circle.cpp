#include <iostream>
#include "Circle.h"

using namespace std;

void Circle::Init(int x, int y, int r) {
	p.Init(x, y);
	this->r = r;
}


void Circle::ShowCircleInfo() const {
	cout << "radius: " << r << endl;
	p.ShowPointInfo();
}

void Ring::Init(int r1Xpos, int r1Ypos, int r1R, int r2Xpos, int r2Ypos, int r2R) {
	c1.Init(r1Xpos, r1Ypos, r1R);
	c2.Init(r2Xpos, r2Ypos, r2R);
}

void Ring::ShowRingInfo() const {
	cout << "Inner Circle Info ..." << endl;
	c1.ShowCircleInfo();
	cout << "Outter Circle Info ..." << endl;
	c2.ShowCircleInfo();
}
