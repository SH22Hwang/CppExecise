#pragma once
#define __	CALCULATOR_H__

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
