// main.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include "funcs.h"
using namespace std;

int main()
{
	int input;
	int k=0;
	cout << "1" << endl;
	cout << "2" << endl;
	cout << "3" << endl;
	cout << "4" << endl;
	cout << "0 End " << endl;
	while (k ==0) {
		
		cin >> input;
		switch (input)
		{
		case 1:
			cout << "+" << endl;
			break;
		case 2:
			cout << "-" << endl;
			break;
		case 3:
			cout << "*" << endl;
			break;
		case 4:
			cout << "/" << endl;
			break;
		case 0:
			k = 1;
		}

	}
	system("pause");
	return 0;
}