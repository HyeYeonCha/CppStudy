#include "pch.h"
#include <iostream>


int main(void) {
	char name[100];
	char lang[200];

	std::cout << "�̸��� �����Դϱ�?";
	std::cin >> name;
	std::cout << "�����ϴ� ���� ����?";
	std::cin >> lang;

	std::cout << "�� �̸��� " << name << "�Դϴ�.";
	std::cout << "�����ϴ� ���� " << lang << "�Դϴ�. " << std::endl;
	return 0;
}