#include "oop.h"
#include <iostream>

using namespace std;
const int NAME_LEN = 20;

void ShowMenu(void);
void MakeAccount(void);
void Depositmoney(void);
void Withdrawmoney(void);
void ShowAllAccinfo(void);

enum {MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT}; // enum으로 상수화시킬때, 맨 앞에 값 지정해주면 알아서 뒤에는 +1씩 증가되어 할당됨.

typedef struct {
	int accID;
	int balance; 
	char cusName[NAME_LEN];
} Account; // typedef로 구조체 별칭 지정

Account accArr[100];
int accNum = 0;

int main(void)
{
	int choice;
	while (1)
	{
		ShowMenu();
		cout << "선택 : ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case MAKE:
			MakeAccount();
			break;

		case DEPOSIT:
			Depositmoney();
			break;

		case WITHDRAW:
			Withdrawmoney();
			break;

		case INQUIRE:
			ShowAllAccinfo();
			break;

		case EXIT:
			return 0;
			
		default :
			cout << "Illegal selection.." << endl;
		}
	}

	return 0;
}

// 메뉴
void ShowMenu(void) { 
	cout << "----Menu----" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입 금" << endl;
	cout << "3. 출 금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
}

// 계좌 생성
void MakeAccount(void) { 

	int id;
	char name[NAME_LEN];
	int balance;

	cout << "[계좌개설]" << endl;
	cout << "계좌ID : "; cin >> id;
	cout << "이름 : "; cin >> name;
	cout << "입금액 : "; cin >> balance;

	accArr[accNum].accID = id;
	accArr[accNum].balance = balance;
	strcpy_s(accArr[accNum].cusName, name);

	accNum++;
}

// 입금
void Depositmoney(void) {
	int money;
	int id;
	cout << "[입   금]" <<endl;
	cout << "계좌 ID : "; cin >> id;
	cout << "입금액 : "; cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i].accID == id) {
			accArr[i].balance += money;
			cout << "입금 완료" << endl << endl;
			return;
		}

	}
	cout << "유효하지 않은 ID 입니다." << endl << endl;

}

// 출금
void Withdrawmoney(void){
	int money;
	int id;
	cout << "[출   금]" << endl;
	cout << "계좌 ID : "; cin >> id;
	cout << "출금액 : "; cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i].accID == id) {
			if (accArr[i].balance - money < 0 )
			{
				cout << "잔액 부족" << endl;
				return;
			}
			accArr[i].balance -= money;
			cout << "출금 완료" << endl << endl;
			return;
		}

	}
	cout << "유효하지 않은 ID 입니다." << endl << endl;

}

// 전체 계좌정보 출력
void ShowAllAccinfo(void) {
	for (int i = 0; i < accNum; i++)
	{
		cout << "계좌 ID : " << accArr[i].accID << endl;
		cout << "이 름 : " << accArr[i].cusName << endl;
		cout << "잔 액 : " << accArr[i].balance << endl;
	}
}
