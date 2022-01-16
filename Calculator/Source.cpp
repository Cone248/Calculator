#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
	Numbers number;
	cout << "first number: \n";
	cin >> number.num1;
	cout << "second number: \n";
	cin >> number.num2;

	int operation;
	cout << "1. Addition \n";
	cout << "2. Substraction \n";
	cout << "3. Multiplication \n";
	cout << "4. Division \n";
	cout << "select operation:";
	cin >> operation;

	switch (operation)
	{
	case 1:
		cout << number.num1 + number.num2;
		break;

	case 2:
		cout << number.num1 - number.num2;
		break;

	case 3:
		cout << number.num1 * number.num2;
		break;

	case 4:
		cout << number.num1 / number.num2;
		break;

	default:
		cout << "invalid input.";
	}
	return 0;
}