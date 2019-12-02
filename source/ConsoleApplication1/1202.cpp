#include "pch.h"
#include <iostream>

int BoxVolume(int length, int width, int height) {
	return length * width*height;
}

int BoxVolume(int width, int height) {
	return width * height;
}

int BoxVolume(int height) {
	return height;
}

int SimpleFunc(void) {
	return 10;
}

int SimpleFunc(int a = 10) {
	return a + 1;
}

int main(void) {
	
	std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5, 5, D] : " << BoxVolume(5, 5) << std::endl;
	std::cout << "[7, D, D] : " << BoxVolume(7) << std::endl;
	//std::cout << "[D, D, D] : " << BoxVolume() << std::endl;

	//SimpleFunc(); // 에러남 위에 오버로드된 함수 두 개의 조건에 모두 충족하기때문에 모호해서.

	return 0;
}

