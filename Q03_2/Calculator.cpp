#include "Calculator.h"
#include <cstring>


void Calculator::Init() {
	countAdd = 0; countSub = 0;
	countMul = 0; countDiv = 0;
	result = 0;
}

void Calculator::ShowOpCount() {
	cout << "µ¡¼À: " << countAdd
		<< " »¬¼À: " << countSub
		<< " °ö¼À: " << countMul
		<< " ³ª´°¼À: " << countDiv << endl;
}

double Calculator::Add(const double num1, const double num2) {
	result = num1 + num2;
	countAdd++;
	return result;
}

double Calculator::Sub(const double num1, const double num2) {
	result = num1 - num2;
	countSub++;
	return result;
}

double Calculator::Mul(const double num1, const double num2) {
	result = num1 * num2;
	countMul++;
	return result;
}

double Calculator::Div(const double num1, const double num2) {
	result = num1 / num2;
	countDiv++;
	return result;
}
