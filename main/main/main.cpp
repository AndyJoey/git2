// main.cpp: ���������� ����� ����� ��� ����������� ����������.
//
#include "stdafx.h"
#include <iostream>
#include "stdlib.h"
#include "funcs.h"
using namespace std;

int main()
{
	
	char op,y; 
	int k=0;
	
	while (k==0)
	{
		double x1, x2;
		cin >> x1;
		cin >> op;
		cin >> x2;
		switch (op)
		{
		case '+':
			cout << x1 << " + " << x2 << " = " << add(x1, x2) << endl;
			break;
		case '-':
			cout << x1 << " - " << x2 << " = " << sub(x1, x2) << endl;
			break;
		case '*':
			cout << x1 << " * " << x2 << " = " << mul(x1, x2) << endl;
			break;
		case '/':
			cout << x1 << " / " << x2 << " = " << div(x1, x2) << endl;
			break;
		}
		cout<< "Continue? (y or n)"<<endl;
		cin >> y;
		if (y=='n') k=1;
	}
	system("pause");
	return 0;
}