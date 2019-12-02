#include "pch.h"
#include <iostream>


int main(void) {
	
	//// 1
	//int input;
	//int result = 0;

	//for (int i = 0; i < 5; i++)
	//{
	//	std::cout << i << "번째 정수 입력 : ";
	//	std::cin >> input;
	//	result += input;
	//}

	//std::cout << "합계 : " << result;

	//// 2
	//char name[10];
	//char phone[15];

	//std::cout << "이름은? : ";
	//std::cin >> name;

	//std::cout << "전화번호는? : ";
	//std::cin >> phone;

	//std::cout << "이름은 " << name << " 전화번호는 " << phone;

	////3
	//int val;
	//std::cout << "몇 단? : ";
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

		std::cout << "판매 금액을 만원 단위로 입력 (-1 to end): ";
		std::cin >> val;

		if (val == -1) {

			break;
		}

		hap = 50 + val * 0.12;
		std::cout << "이번 달 급여 : " << hap << std::endl;

	}
	std::cout << "프로그램을 종료합니다.";
	return 0;

}