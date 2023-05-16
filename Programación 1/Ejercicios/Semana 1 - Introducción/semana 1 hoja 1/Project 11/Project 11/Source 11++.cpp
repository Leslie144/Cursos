#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	//dato de entrada
	float *d, *h, *c;
	d = new float;
	h = new float;
	c = new float;
	//definimos y leemos
	cout << "ingrese cantidad de dias: ";
	cin >> *d;
	cout << "ingrese costo de hotel: S/. ";
	cin >> *h;
	cout << "ingrese costo de comida: S/. ";
	cin >> *c;
	//dato de salida
	float *og, *mh, *mc, *mt;
	og = new float;
	mh = new float;
	mc = new float;
	mt = new float;
	//operaciones
	*og = 100.0 * (*d);
	*mh = *h*(*d);
	*mc = *c*(*d);
	*mt = *og + *mh + *mc;

	cout << "el monto del cheque es: S/." << *mt;
	_getch();
}