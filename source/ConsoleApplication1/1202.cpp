#include "pch.h"
#include <iostream>


int main(void) {
	
	//// 1
	//int input;
	//int result = 0;

	//for (int i = 0; i < 5; i++)
	//{
	//	std::cout << i << "��° ���� �Է� : ";
	//	std::cin >> input;
	//	result += input;
	//}

	//std::cout << "�հ� : " << result;

	//// 2
	//char name[10];
	//char phone[15];

	//std::cout << "�̸���? : ";
	//std::cin >> name;

	//std::cout << "��ȭ��ȣ��? : ";
	//std::cin >> phone;

	//std::cout << "�̸��� " << name << " ��ȭ��ȣ�� " << phone;

	////3
	//int val;
	//std::cout << "�� ��? : ";
	//std::cin >> val;

	//for (int i = 0; i < 10; i++)
	//{
	//	std::cout << val << " * " << i << " = " << val * i << std::endl;
	//}

	//4

	int val = 0; 
	double hap = 0;
	
	while (1)
	{

		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է� (-1 to end): ";
		std::cin >> val;

		if (val == -1) {

			break;
		}

		hap = 50 + val * 0.12;
		std::cout << "�̹� �� �޿� : " << hap << std::endl;

	}
	std::cout << "���α׷��� �����մϴ�.";
	return 0;

}