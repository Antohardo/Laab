#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float K, m1, t1, t2;
	const int c = 4200;
	const int L = 2260;
	char again;
	do
	{
		system("cls");
		cout << "������� ���������� �������:" << endl;
		cin >> K;
		cout << "������� ��������� �����������:" <<  endl;
		cin >>  t1;
		cout << "������� ��������� ����� ����:" << endl;
		cin >> m1;
		t2 = (K / (c * m1)) + t1;
		if (t2 <= 100)
		{
			cout << "����������� ����: " <<  t2 << endl;
			cout << "����� ����: " <<  m1 <<  endl;
		}
		else //t2 > 100
		{
			float Q, mp, m2; //mp-����� ����
			Q = c * m1 * (100 - t1);
			mp = (K - Q) / L;
			m2 = m1 - mp;
			if (m2 == 0)
			{
				cout <<  "��� ���� ���������� " <<  endl;
			}
			if (m2 > 0)
			{
				cout <<  "����������� ����: " << 100 <<  endl;
				cout <<  "����� ����: " <<  m2 <<  endl;
			}
		}
		cout << "������ �� ��� ��������� �������� ����������� � ����� ����? (y/n)" << endl;
		std::cin >> again;
		if (again == 'n')
		{
			cout <<  "������� �� ����� �������" << endl;
		}
	} while (again == 'y');
	return 0;
}