#include <iostream>
#include <cmath>
using namespace std;

class Calculator {
	protected:
		double num1, num2;
	public:
		Calculator() {
			num1 = 0;
			num2 = 0;
		}
		virtual double calculate() {
			return 0;
		}
};

class Add : public Calculator {
	public:
		Add(double n1, double n2) {
			num1 = n1;
			num2 = n2;
		}
		double calculate() {
			return num1 + num2;
		}
};

class Subtract : public Calculator {
	public:
		Subtract(double n1, double n2) {
		num1 = n1;
		num2 = n2;
	}
	double calculate() {
		return num1 - num2;
	}
};

class Multiply : public Calculator {
	public:
		Multiply(double n1, double n2) {
			num1 = n1;
			num2 = n2;
	}
	double calculate() {
		return num1 * num2;
	}
};

class Divide : public Calculator {
	public:
		Divide(double n1, double n2) {
			num1 = n1;
			num2 = n2;
	}
	double calculate() {
		if (num2 == 0) {
			cout << "Error: Division by zero" << endl;
			return 0;
		}
		return num1 / num2;
	}
};

class Power : public Calculator {
	public:
		Power(double n1, double n2) {
			num1 = n1;
			num2 = n2;
		}
		double calculate() {
			return pow(num1, num2);
		}
};

class Sine : public Calculator {
	public:
		Sine(double n1) {
			num1 = n1;
		}
		double calculate() {
			return sin(num1);
		}
};

int main() 
{
	double num1, num2;
	char op;

	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter operator (+, -, *, /, ^, sin): ";
	cin >> op;

	Calculator* calc;

	switch(op) {
		case '+':
			cout << "Enter second number: ";
			cin >> num2;
			calc = new Add(num1, num2);
			break;
		case '-':
			cout << "Enter second number: ";
			cin >> num2;
			calc = new Subtract(num1, num2);
			break;
		case '*':
			cout << "Enter second number: ";
			cin >> num2;
			calc = new Multiply(num1, num2);
			break;
		case '/':
			cout << "Enter second number: ";
			cin >> num2;
			calc = new Divide(num1, num2);
			break;
		case '^':
			cout << "Enter exponent: ";
			cin >> num2;
			calc = new Power(num1, num2);
			break;
		case 's':
			calc = new Sine(num1);
			break;
		default:
			cout << "Invalid Inputs" << endl;
			break;
	}
	double result = calc->calculate();
	cout << "Result: " << result << endl;
	delete calc;
	return 0;
}
