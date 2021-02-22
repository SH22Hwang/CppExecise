//#pragma once
#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

#include <iostream>
using namespace std;

class Calculator {
private:
	int countAdd, countSub, countMul, countDiv;
	double result;
public:
	void Init();
	void ShowOpCount();
	double Add(const double num1, const double num2);
	double Sub(const double num1, const double num2);
	double Mul(const double num1, const double num2);
	double Div(const double num1, const double num2);
};

#endif // !__CALCULATOR_H__




