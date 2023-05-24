#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	int *numero = new int;
	cout << "Ingreso: "; cin >> *numero;

	int *des = new int;
	int *desc = new int;
	int *desco = new int;
	int *descom = new int;

	*des = *numero / 1000;
	*desc = (*numero / 100) % 10;
	*desco = (*numero / 10) % 10;
	*descom = *numero % 10;

	int *s1 = new int;
	int *s2 = new int;
	int *s3 = new int;
	int *s4 = new int;

	if (*des % 2 != 0) {
		cout << *des << " ";
		*s1 = *des;
	}

	if (*desc % 2 != 0) {
		cout << *desc << " ";
		*s2 = *desc;
	}

	if (*desco % 2 != 0) {
		cout << *desco << " ";
		*s3 = *desco;
	}

	if (*descom % 2 != 0) {
		cout << *descom;
		*s4 = *descom;
	}
	cout << endl;
	int *suma1 = new int;
	int *suma2 = new int;
	int *suma3 = new int;
	int *suma4 = new int;

	if (*s1 >= 0 && *s2 >= 0 && *s3 >= 0 && *s4 >= 0) {
		*suma1 = *s1 + *s2 + *s3 + *s4;
		cout << "Salida: " << *suma1 << endl;
	}

	if (*s1 >= 0 && *s2 >= 0 && *s3 >= 0) {
		*suma2 = *s1 + *s2 + *s3;
	}
	else if (*s2 >= 0 && *s3 >= 0 && *s4 >= 0) {
		*suma2 = *s4 + *s2 + *s3;
	}
	else if (*s3 >= 0 && *s4 >= 0 && *s1 >= 0) {
		*suma2 = *s4 + *s1 + *s3;
	}
	else if (*s4 >= 0 && *s1 >= 0 && *s2 >= 0) {
		*suma2 = *s4 + *s2 + *s1;
	}
	cout << "Salida: " << *suma2 << endl;


	if (*s1 >= 0 && *s2 >= 0) {
		*suma3 = *s1 + *s2;
	}
	else if (*s1 >= 0 && *s3 >= 0) {
		*suma3 = *s1 + *s3;
	}
	else if (*s1 >= 0 && *s4 >= 0) {
		*suma3 = *s3 + *s4;
	}

	else if (*s2 >= 0 && *s3 >= 0) {
		*suma3 = *s2 + *s3;
	}
	else if (*s2 >= 0 && *s4 >= 0) {
		*suma3 = *s2 + *s4;
	}

	else if (*s3 >= 0 && *s4 >= 0) {
		*suma3 = *s3 + *s4;
	}
	else if (*s4 >= 0 && *s1 >= 0) {
		*suma3 = *s1 + *s4;
	}
	cout << "Salida: " << *suma3 << endl;

	if (*s1 >= 0) {
		*suma4 = *s1;
		cout << "Salida: " << *suma4 << endl;
	}
	_getch();
}