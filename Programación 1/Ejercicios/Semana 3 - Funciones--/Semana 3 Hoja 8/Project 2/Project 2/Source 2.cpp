#include<iostream>
#include<conio.h>
using namespace std;
using namespace System;

int main() {

	int *venDD = new int;
	int *venMM = new int;
	int *venAAAA = new int;

	cout << "Dia actual:"; cin >> *venDD; 
	cout << "Mes actual:"; cin >> *venMM;
	cout << "Anio actual:"; cin >> *venAAAA;

	system("cls");

	long long *codigo = new long long;
	cout << "Ingrese codigo: "; cin >> *codigo;

	int *UU = new int;
	int *F = new int;
	char *PP1 = new char;
	char *PP2 = new char;
	int *DD = new int;
	int *MM = new int;
	int *AAAA = new int;

	

	*UU = *codigo / 10000000000000;
	*F = (*codigo / 1000000000000) % 10;
	*PP1 = (*codigo / 10000000000) % 100;
	*PP2 = (*codigo / 100000000) % 100;
	*DD = (*codigo / 1000000) % 100;
	*MM = (*codigo / 10000) % 100;
	*AAAA = *codigo % 10000;

	cout << "Numero unico: " << *UU << endl;

	if (*F == 0) {
		cout << "Fragil (N: no; S: si): S"<< endl;
	}
	else {
		cout << "Fragil (N: no; S: si): N"  << endl;
	}

	cout << "Pais de procedecia: " << *PP1 << *PP2 << endl;
	cout << "Dia, mes y año de vencimiento: " << *DD << "-" << *MM << "-" << *AAAA << endl;
	

	if ((*DD <= *venDD && *MM <= *venMM && *AAAA <= *venAAAA)||(*AAAA <= *venAAAA)||(*MM <= *venMM && *AAAA)||(*DD <= *venDD)) {
		cout << "Bien se encuentra vencido al dia de hoy (N: no; S: si): S";
	}
	else {
		cout << "Bien se encuentra vencido al dia de hoy (N: no; S: si): N";
	}
	_getch();
}