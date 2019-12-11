#include <iostream>
#include "Point.h"
#include "Rectangle.h"

using namespace std;

// const Ű���� ���� (const Ű���带 ����ϴ� �Լ� �ȿ��� �ٸ� ȣ���� ���� ȣ��Ǵ� �Լ��� const Ű���带 ���� �Լ����� �Ѵ�. )

class SimpleClass {
private: int num;
public : 
	void InitNum(int n) {
		num = n;
	}
	int GetNum() const {
		return num;
	}
	void ShowNum() const {
		cout << GetNum() << endl;
	}
};

class EasyClass {
private: int num;
public : 
	void InitNum(int n) {
		num = n;
	}
	int GetNum() const {
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
		cout << "�ʱ�ȭ ����" << endl;
	if (!pos1.InitMember(2, 4))
		cout << "�ʱ�ȭ ����" << endl;

	Point pos2;
	if (!pos2.InitMember(5, 9))
		cout << "�ʱ�ȭ ����" << endl;
	
	Rectangle rec;
 	if (!rec.InitMembers(pos2, pos1))
		cout << "���簢�� �ʱ�ȭ ����" << endl;
	if(!rec.InitMembers(pos1, pos2))
		cout << "���簢�� �ʱ�ȭ ����" << endl;

	rec.ShowRecInfo();

	return 0;
}