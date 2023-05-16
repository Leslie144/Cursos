#include<iostream>
#include<conio.h>
using namespace std;
using namespace System;
int main() {
	Random r;
	int *nota = new int;
	*nota = r.Next(1, 21);
	cout << "Ingrese nota: " << *nota << endl;
	char *estado = new char;
	switch (*nota)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
		*estado = 'E';
		break;
	case 10:
	case 11:
	case 12:
		*estado = 'D';
		break;
	case 13:
	case 14:
	case 15:
		*estado = 'C';
		break;
	case 16:
	case 17:
	case 18:
		*estado = 'B';
		break;
	case 19:
	case 20:
		*estado = 'A';
		break;
	default:
		break;
	}

	cout << "El estado es: " << *estado;
	_getch();
}