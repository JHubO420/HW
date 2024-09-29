#include <iostream>
using namespace std;

#include "Calculator.h"

void Add::setValue(int x, int y) {
	a = x; b = y;
}
int Add::calculate() {
	return a + b;
}
void Sub::setValue(int x, int y) {
	a = x; b = y;
}
int Sub::calculate() {
	return a - b;
}
void Mul::setValue(int x, int y) {
	a = x; b = y;
}
int Mul::calculate() {
	return a * b;
}
void Div::setValue(int x, int y) {
	a = x; b = y;
}
int Div::calculate() {
	return a / b;
}
int main() {
	Add a;
	Sub s;
	Mul m;
	Div d;

	while (true) {
		cout << "두 정수와 연산자를 입력하세요>>";
		int x, y;
		char op;
		cin >> x >> y >> op;
		if (op == '+') {
			a.setValue(x, y);
			a.calculate();
			cout << a.calculate() << endl;
		}
		else if (op == '-') {
			s.setValue(x, y);
			s.calculate();
			cout << s.calculate() << endl;
		}
		else if (op == '*') {
			m.setValue(x, y);
			m.calculate();
			cout << m.calculate() << endl;
		}
		else if (op == '/') {
			d.setValue(x, y);
			d.calculate();
			cout << d.calculate() << endl;
		}
	}
}