#ifndef __RECTANGLE_H_ // __FILE__ : ���� �ҽ��ڵ��� ���ϸ��� ��Ÿ���� ���ڿ�, #ifdef�� ��ó���� ��ũ�θ� �����Ͽ� �ߺ��� ������ �� �ִ�. ���ǵǾ� ���� �ʴٸ� �������ֱ�
#define __RECTANGLE_H_ 

#include "Point.h"

class Rectangle {
private :
	Point upLeft;
	Point lowRight;

public : 
	bool InitMembers(const Point &ul, const Point &lr);
	void ShowRecInfo() const;
};

#endif 

