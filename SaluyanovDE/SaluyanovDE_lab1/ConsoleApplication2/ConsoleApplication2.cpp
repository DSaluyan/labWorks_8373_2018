#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(0, "");
	char Sign;
	float Val1, Val2, Result;


	cout << "������� ������ �����: ";
	cin >> Val1;
	cout << "������� ������ �����: ";
	cin >> Val2;
	cout << "������� ��������: ";
	cin >> Sign;


	if (Sign != '*' && Sign!= '/' && Sign !='-' && Sign!='+') {
		cout << "������������ ��������";
		_getch();
		return 0;
	}


	switch (Sign) {
	case '*': Result = Val1*Val2;
		break;
	case '/': if (Val2 != 0) {
		Result = Val1 / Val2;
	}
			  else {
				cout << "������: ������� �� ����";
				_getch();
				return 0;
			  }
		break;
	case '+': Result = Val1 + Val2;
		break;
	case '-': Result = Val1 - Val2;
		break;
	}
	cout <<"���������:"<< Result;
	_getch();
}