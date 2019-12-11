#include <iostream>

using namespace std;

class FruitSeller {
private : 
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public : 
	void InitMembers(const int price, int num, int meney);
	int SaleApples(int money);
	void ShowSalesResult();
};

class FruitBuyer {
	int myMoney;
	int numOfApples;

public :
	void InitMembers(int money);
	void BuyApples(FruitSeller &seller, int money);
	void ShowBuyResult() const;
};
