#include <iostream>;
#include <conio.h>;
#include <math.h>;
using namespace std;

int main()
{
	setlocale(0, "");
	int i;
	int q;
	int result;
	char deistvie;
	bool error = false;
	do
	{
		system ("cls");
		cout << "������� ������ �����" << endl;
		cin >> i;
		cout << "������� ������ �����" << endl;
		cin >> q;
		cout << "������� ����" << endl;
		cin >> deistvie;
		if (deistvie == '+')
		{
			result = i + q;
		}
		else if (deistvie == '-')
		{
			result = i - q;
		}
		else if (deistvie == '*')
		{
			result = i * q;
		}
		else if (deistvie == '/')
		{
			if (q != 0)
			{
				result = i / q;
			}
			else
			{
				cout << "�� ���� ������ ������(������ �����)" << endl;
				error = true;
			}
		}
		else
		{
			cout << "�������� ����" << endl;
			error = true;
		}
		if (error == false)
		{
			cout << i << deistvie << q << '=' << result << endl;
		}
		cout << "���� ������� �����, ������� Esc, ��� ����������� ������� ����� �������" << endl;
		error = false;
	} while (_getwch() != 27);
}