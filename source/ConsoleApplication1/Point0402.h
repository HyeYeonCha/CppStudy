#include <iostream>

using namespace std;

class Point {
private: int xpos, ypos;
public :
	void Init(int x, int y);
	void ShowPointInfo() const;
};
