#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(0, "");
	char Sign;
	//char Calc[29];
	//int i;
	/*for (i = 1; i<=29; i++) {

	}*/
	//gitbash??
	float Val1, Val2;
	cout << "������� ������ �����: ";
	cin >> Val1;
	cout << endl;
	cout << "������� ������ �����: ";
	cin >> Val2;
	cout << "������� ��������: ";
	cin >> Sign;
	switch(Sign) {
		case '*': cout << Val1*Val2;
			break;
		case '/': if (Val2 != 0) {
			cout << Val1 / Val2;
		}
				  else {
					  cout << "������: ������� �� ����";
				  }
			break;
		case '+': cout << Val1+Val2;
			break;
		case '-': cout << Val1-Val2;
			break;
	}
	if (Sign != '*', Sign != '/', Sign != '-', Sign != '+') {
		cout << "������: ������ �������� ����";

	}
	cout << endl;
	_getch();
	//������ � ��������, ������� �� ����, �������� ����.
}