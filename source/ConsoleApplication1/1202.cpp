#include "pch.h"
#include <iostream>


int main(void) {
	int val1;
	std::cout << "첫 번째 숫자 입력 : ";
	std::cin >> val1;

	int val2;
	std::cout << "두 번째 숫자 입력 : ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "두 수의 합 : " << result <<std::endl;
	return 0;
}