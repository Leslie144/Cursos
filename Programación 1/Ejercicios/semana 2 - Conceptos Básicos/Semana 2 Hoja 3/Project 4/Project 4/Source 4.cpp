#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	//dato de entrada
	int *cs = new int;
	cout << "ingrese cantidad de sobres: ";
	cin >> *cs;
	//dato salida
	int *c1 = new int;
	int *c2 = new int;
	int *c21 = new int;
	int *c3 = new int;
	int *c31 = new int;
	//solucion
	*c1 = *cs / 50;
    *c2 = *cs - (*c1 * 50);
	   //empaque de 30
	*c21 = *c2 / 30;
    *c3 = *c2 - (*c21 * 30);
	   //empaque de 12
	*c31 = *c3 / 12;
	//respuestas
	cout << "cantidad de empaques de 50: " << *c1 << endl;
	cout << "cantidad de empaques de 30: " << *c21 << endl;
	cout << "cantidad de empaques de 12: " << *c31;
	_getch();
}