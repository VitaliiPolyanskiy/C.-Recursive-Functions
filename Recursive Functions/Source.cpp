#include <iostream>
using namespace std;

// итерационный метод вычисления факториала числа
int Factorial_iteration(int number)
{
	int result = 1;
	while(number > 1)
	{
		result *= number--;
	}
	return result;
}

// рекурсивный метод вычисления факториала числа
int Factorial_recursion(int number)
{
	if (number < 2)
		return 1;
	else
		return number * Factorial_recursion(number - 1);
}

// итерационный метод нахождения наибольшего общего делителя двух целых чисел
int GreatestCommonDivisor_iteration(int a, int b)
{
	while (b != 0)
	{
		int c = a % b;
		a = b;
		b = c;
	}
	return a;
}

// рекурсивный метод нахождения наибольшего общего делителя двух целых чисел
int GreatestCommonDivisor_recursion(int a, int b)
{
	int c = a % b;
	if (c == 0)
		return b;
	else
		return GreatestCommonDivisor_recursion(b, c);
}

int main()
{
	int number1, number2;
	cout << "Enter a number: ";
	cin >> number1;
	cout << "Factorial of number: " << Factorial_iteration(number1) << endl;
	cout << "Factorial of number: " << Factorial_recursion(number1) << endl;

	cout << "Enter the first number: ";
	cin >> number1;
	cout << "Enter the second number: ";
	cin >> number2;
	cout << "Greatest Common Divisor: " << GreatestCommonDivisor_iteration(number1, number2) << endl;
	cout << "Greatest Common Divisor: " << GreatestCommonDivisor_recursion(number1, number2) << endl;

	return 0;
}