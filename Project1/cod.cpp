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
		std::cout << "������� ����� ����� ��� 0 ��� ����������: ";
		std::cin >> rub;

		if (rub == 0)
		{
			break;
		}

		std::cout << "������� ������\n1.������\n2.����\n3.����\n4.�����\n5.����\n";
		std::cin >> val;

		com = rub * 0.05;
		rub_s_com = rub - com;
		
		if (rub <= 0)
		{
			std::cout << "� ��� ������������ ��������";
			break;
		}

		else if (val == 1)
		{
			itog = rub_s_com / 92.92;
			std::cout << "�� �������� " << itog << " ��������";
		}

		else if (val == 2)
		{
			itog = rub_s_com / 103.22;
			std::cout << "�� �������� " << itog << " ����";
		}

		else if (val == 3)
		{
			itog = rub_s_com / 13.11;
			std::cout << "�� �������� " << itog << " �����";
		}

		else if (val == 4)
		{
			std::cout << "�� ������� ������ ��� ������������� ���� ������";
		}

		else if (val == 5)
		{
			itog = rub_s_com / 0.65143;
			std::cout << "�� �������� " << itog << " ���";
		}
		std::cout << "\n�������� " << com << " ������\n";
	}
	
	
		return 0;
}