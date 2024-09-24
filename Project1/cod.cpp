#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float num = 0;
	float sum = 0;

	while (true)
	{
		std::cout << "¬ведите перове число: ";
		std::cin >> num;

		if (num == 0)
		{
			break;
		}
		sum += num;

	}
	std::cout << "\n" << sum;

		return 0;
}