#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

/**
* @brief Лр/ 3 ветвящийся вычислительный процесс
* Задание 4 (Вариант 4)
* Вывести "отлично" для числа 5, "хорошо" для числа 4, 
"средне" для числа 3, "хуже среднего" для значений
от 0 до 2 включительно.
*/
int main() 
{
	system("color F0");
	setlocale(LC_ALL, "ru");
	int x;
	cout << "Введите  целое число x:";
	cin >> x;

	switch (x)
	{
		case 0: cout << "Хуже среднего"; break;
		case 1: cout << "Хуже среднего"; break;
		case 2: cout << "Хуже среднего"; break;
		case 3: cout << "Средне"; break;
		case 4: cout << "Хорошо"; break;
		case 5: cout << "Отлично"; break;
		default: 
		{
			cerr << "Ошибка: неизвестная оценка" << endl;
			return 1;
		}
	}
}