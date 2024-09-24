#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double rub = 0;
	double rub_s_com = 0;
	double com = 0;
	double itog = 0;
	int val = 0;

	while (true)
	{
		std::cout << "Введите сумму денег или 0 для завершения: ";
		std::cin >> rub;

		if (rub == 0)
		{
			break;
		}

		std::cout << "Введите валюту\n1.Доллор\n2.Евро\n3.Юань\n4.Фарит\n5.Йена\n";
		std::cin >> val;

		com = rub * 0.05;
		rub_s_com = rub - com;
		
		if (rub <= 0)
		{
			std::cout << "У вас недостаточно стредств";
			break;
		}

		else if (val == 1)
		{
			itog = rub_s_com / 92.92;
			std::cout << "Вы получили " << itog << " Доллоров";
		}

		else if (val == 2)
		{
			itog = rub_s_com / 103.22;
			std::cout << "Вы получили " << itog << " Евро";
		}

		else if (val == 3)
		{
			itog = rub_s_com / 13.11;
			std::cout << "Вы получили " << itog << " Юаней";
		}

		else if (val == 4)
		{
			std::cout << "Вы слишком бедный для использования этой валюты";
		}

		else if (val == 5)
		{
			itog = rub_s_com / 0.65143;
			std::cout << "Вы получили " << itog << " Йен";
		}
		std::cout << "\nКомиссия " << com << " Рублей\n";
	}
	
	
		return 0;
}