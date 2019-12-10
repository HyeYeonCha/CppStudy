#ifndef __RECTANGLE_H_ // __FILE__ : 현재 소스코드의 파일명을 나타내는 문자열, #ifdef로 전처리기 매크로를 선언하여 중복을 방지할 수 있다. 정의되어 있지 않다면 정의해주기
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

