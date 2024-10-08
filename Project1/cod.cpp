#include <iostream>
#include <Windows.h>


float Plus(float num1, float num2)
{
	std::cout << num1 + num2 << "\n";
	return num1 + num2;
}
float Minus(float num1, float num2)
{
	std::cout << num1 - num2 << "\n";
	return num1 - num2;
}
float Multiply(float num1, float num2)
{
	std::cout << num1 * num2 << "\n";
	return num1 * num2;
}
float Divide(float num1, float num2)
{
	std::cout << num1 / num2 << "\n";
	return num1 / num2;
}
float Percentage(float num1, float num2)
{
	std::cout << (num1 * num2) / 100 << "\n";
	return (num1 * num2) / 100;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Plus(2, 2);
	Minus(5, 4);
	Multiply(2, 4);
	Divide(6, 3);
	Percentage(5, 60);

	return 0;
}