#include <iostream>
#include "Point.h"
#include "Rectangle.h"

using namespace std;

class EasyClass {
private: int num;
public : 
	void InitNum(int n) {
		num = n;
	}
	const int GetNum() {
		return num;
	}
};

class LiveClass {
private: int num;
public : 
	void InitNum(const EasyClass &easy) {
		num = easy.GetNum();
	}
};

int main(void) {

	Point pos1;
	if (!pos1.InitMember(-2, 4))
		cout << "초기화 실패" << endl;
	if (!pos1.InitMember(2, 4))
		cout << "초기화 실패" << endl;

	Point pos2;
	if (!pos2.InitMember(5, 9))
		cout << "초기화 실패" << endl;
	
	Rectangle rec;
 	if (!rec.InitMembers(pos2, pos1))
		cout << "직사각형 초기화 실패" << endl;
	if(!rec.InitMembers(pos1, pos2))
		cout << "직사각형 초기화 실패" << endl;

	rec.ShowRecInfo();

	return 0;
}