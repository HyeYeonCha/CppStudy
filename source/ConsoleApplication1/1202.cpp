#include "1202.h"
#include <iostream>

using namespace std;

void Calculator::Init() {
	numAdd = 0;
	numMin = 0;
	numMul = 0;
	numDiv = 0;
}

double Calculator::Add(double a, double b) {
	numAdd++;
	return a + b;
}

double Calculator::Min(double a, double b) {
	numMin++;
	return a - b;
}

double Calculator::Mul(double a, double b) {
	numMul++;
	return a * b;
}

double Calculator::Div(double a, double b) {
	numDiv++;
	return a / b;
}

void Calculator::ShowOpCout() {
	cout << "µ¡¼À : " << numAdd << " –y¼À : " << numMin << " °ö¼À : " << numMul << " ³ª´°¼À : " << numDiv;
}

