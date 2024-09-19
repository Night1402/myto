#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float Num1 = 0;
    float Num2 = 0;
    float Sum = 0;
    char Oper;

    std::cout << "Введите перове число: ";
    std::cin >> Num1;
    std::cout << "\nКакую операцию вы хотите сделать +, -, *, /, %: ";
    std::cin >> Oper;
    std::cout << "\nВведите второе число: ";
    std::cin >> Num2;
    if (Oper == '+')
    {
        Sum = Num1 + Num2;
    }
    else if (Oper == '-')
    {
        Sum = Num1 - Num2;
    }
    else if (Oper == '*')
    {
        Sum = Num1 * Num2;
    }
    else if (Oper == '/')
    {
        if (Num2 == 0)
        {
            std::cout << "\nОшибка";
            return 0;
        }
        Sum = Num1 / Num2;
    }
    else if (Oper == '%')
    {
        Sum = (Num1 / 100) * Num2;
    }

    std::cout << "\n" << Num1 << " " << Oper << " " << Num2 << " = " << Sum;

    return 0;
}