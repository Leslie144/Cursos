#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	int *num = new int;
	cout << "         abcdef" << endl;
	cout << "Ingreso: "; cin >> *num;

	int *des = new int;
	int *desc = new int;
	int *desco = new int;
	int *descom = new int;
	int *descomp = new int;
	int *descompo = new int;

	*des = *num / 100000;
	*desc = *num % 10;
	*desco = (*num / 10000) % 10;
	*descom = (*num / 10) % 10;
	*descomp = (*num / 1000) % 10;
	*descompo = (*num / 100) % 10;

	cout << "        afbecd" << endl;
	cout << "Salida: " << *des << *desc << *desco << *descom << *descomp << *descompo;
	_getch();
}