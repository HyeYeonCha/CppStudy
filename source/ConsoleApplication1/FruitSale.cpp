#include <iostream>
#include "FruitSale.h"

using namespace std;

void FruitSeller::InitMembers (const int price, int num, int money) {
	APPLE_PRICE = price;
	numOfApples = num;
	myMoney = money;
}

int FruitSeller::SaleApples(int money) {

	if (money <= 0)
	{
		cout << "�߸��� �Է°��Դϴ�." << endl;
		return 0;
	}

	int num = money / APPLE_PRICE;
	numOfApples -= num;
	myMoney += money;
	return num;
}

void FruitSeller::ShowSalesResult() {
	cout << "���� ��� : " << numOfApples << endl;
	cout << "�Ǹ� ���� : " << myMoney << endl;
}

void FruitBuyer::InitMembers(int money) {
	myMoney = money;
	numOfApples = 0;
}

void FruitBuyer::BuyApples(FruitSeller &seller, int money) {

	if (money <= 0)
	{
		cout << "�߸��� �Է°��Դϴ�." << endl;
		return;
	}

	numOfApples += seller.SaleApples(money);
	myMoney -= money;
}

void FruitBuyer::ShowBuyResult() const {
	cout << "���� �ܾ� : " << myMoney << endl;
	cout << "��� ���� : " << numOfApples << endl;
}