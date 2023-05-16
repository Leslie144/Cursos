#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	//dato de entrada
	float *n;
	n = new float;
	//definimos y leemos
	cout << "ingrese nota: ";
	cin >> *n;
	//dato de salida
	char *e;
	e = new char;
	if (*n >= 0 && *n <= 12.5)
	{ 
		cout << "el estado es: D";
	}
	else
		if (*n > 12.5 && *n <= 20)
		{
			cout << "el estado es: A";
		}
		else
		{
			cout << "nota no válida";
		}
	_getch();
}