#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	//dato de entrada
	int *cd, *ct, *cd1;
	cd = new int;
	ct = new int;
	cd1 = new int;
	//definimos y leemos
	cout << "ingrese cantidad de dinero: S/.";
	cin >> *ct;
	//dato de salida
	int *m1, *m2, *m5;
	m1 = new int;
	m2 = new int;
	m5 = new int;
	//operaciones
	*m5 = (*ct / 5);
	*cd = *ct - *m5 * 5;
	*m2 =  *cd / 2;
	*cd1 = *cd - *m2 * 2;
	*m1 = *cd1 / 1;
	//mostramos
	cout << "las monedas de 5 son: " << *m5 << endl;
	cout << "las monedas de 2 son: " << *m2 << endl;
	cout << "las monedas de 1 son: " << *m1;
	_getch() ;
}