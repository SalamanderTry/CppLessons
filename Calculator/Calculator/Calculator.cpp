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
		cout << "Введите первое число" << endl;
		cin >> i;
		cout << "Введите второе число" << endl;
		cin >> q;
		cout << "Введите знак" << endl;
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
				cout << "На ноль делить нельзя(вообще можно)" << endl;
				error = true;
			}
		}
		else
		{
			cout << "Неверный знак" << endl;
			error = true;
		}
		if (error == false)
		{
			cout << i << deistvie << q << '=' << result << endl;
		}
		cout << "Если желаете выйти, нажмите Esc, для продолжения нажмите любую клавишу" << endl;
		error = false;
	} while (_getwch() != 27);
}