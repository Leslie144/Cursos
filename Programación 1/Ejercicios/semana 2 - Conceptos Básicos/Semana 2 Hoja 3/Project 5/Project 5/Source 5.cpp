#include<iostream>
#include<conio.h>
using namespace std;

int main() {
	int *cant = new int;
	cout << "Ingrese cantidad de lapices: "; cin >> *cant;

	int *ciento = new int;
	int *mediociento = new int;
	int *decenas = new int;
	int *sinembolsar = new int;

	*ciento = *cant / 100;
	*mediociento = *ciento * 2;
	*decenas = (*cant - (*ciento * 100)) / 10;
	*sinembolsar = (*cant - (*ciento * 100)) - (*decenas * 10);

	cout << "Cajas de un ciento: " << *ciento << endl;
	cout << "Cajas de medio ciento: " << *mediociento << endl;
	cout << "Cajas de una decena: " << *decenas << endl;
	cout << "Lapices sin embolsar: " << *sinembolsar << endl;
	_getch();
}
