#include <iostream>
#include "Point0402.h"

using namespace std;

class Circle {
private: int xpos, ypos, r;
		 Point p;
public : 
	void Init(int x, int y, int r);
	void ShowCircleInfo() const;
};

class Ring {
private: int xpos, ypos, r;
		 Circle c1;
		 Circle c2;

public : 
	void Init(int r1Xpos, int r1Ypos, int r1R, int r2Xpos, int r2Ypos, int r2R);
	void ShowRingInfo() const;
};
