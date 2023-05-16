#include<iostream>
#include<conio.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	long long *numero = new long long;

	cout << "Ingrese numero de 15 digitos: "; cin >> *numero;

	int *desco = new int;
	int *desco1 = new int;
	int *desco2 = new int;

	*desco = int(*numero / 10000000000);
	cout << "El primera cifra con 5 digitos es: " << *desco << endl;
	*desco1 = (*numero / 100000) % 100000;
	cout << "El segunda cifra con 5 digitos es: " << *desco1 << endl;
	*desco2 = (*numero / 1) % 100000;
	cout << "El tercera cifra con 5 digitos es: " << *desco2 << endl;

	cout << " La suma es: " << *desco + *desco1 + *desco2;
	_getch();
}