// main.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <iostream>
#include "stdlib.h"
#include "funcs.h"
using namespace std;

int main()
{
	 
	char op; 
	int k=0;
	
	cout << "+" << endl;
	cout << "-" << endl;
	cout << "*" << endl;
	cout << "/" << endl;
	cout << "0 End " << endl;
	while (k ==0)
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
			cout << "*" << endl;
			break;
		case '/':
			cout << "/" << endl;
			break;
		case 0:
			k = 1;
		}

	}
	system("pause");
	return 0;
}