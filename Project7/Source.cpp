#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

/**
* @brief ��/ 3 ���������� �������������� �������
* ������� 4 (������� 4)
* ������� "�������" ��� ����� 5, "������" ��� ����� 4, 
"������" ��� ����� 3, "���� ��������" ��� ��������
�� 0 �� 2 ������������.
*/
int main() 
{
	system("color F0");
	setlocale(LC_ALL, "ru");
	int x;
	cout << "�������  ����� ����� x:";
	cin >> x;

	switch (x)
	{
		case 0: cout << "���� ��������"; break;
		case 1: cout << "���� ��������"; break;
		case 2: cout << "���� ��������"; break;
		case 3: cout << "������"; break;
		case 4: cout << "������"; break;
		case 5: cout << "�������"; break;
		default: 
		{
			cerr << "������: ����������� ������" << endl;
			return 1;
		}
	}
}