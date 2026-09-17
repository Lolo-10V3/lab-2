#include <iostream>

using namespace std;

int main(){

	int num1, num2;
	char op;
	cout<<" enter two numbers ";
	cin >> num1 >> num2;
	cout << " choose an operation (+, -, *, /): ";
	cin >> op;
	if (op == '+') {
		cout << "The result is: " << num1 + num2;
	}
	else if (op == '-') {
		cout << "The result is: " << num1 - num2;
	}
	else if (op == '*') {
		cout << "The result is: " << num1 * num2;
	}
	else if (op == '/') {
		if (num2 == 0) {
			cout << "Error: Division by zero!";
		}
		else {
			cout << "The result is: " << num1 / num2;
		}
	}
	else {
		cout << "Invalid operation!";
	}

}
