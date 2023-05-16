#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	//definimos variables entrada
	float *pd, *po;
	pd = new float;
	po = new float;
	//mostramos y leemos 
	cout << "ingrese porcentaje de descuento:";
	cin >> *pd;
	cout << "ingrese precio de oferta:";
	cin >> *po;
	//definimos variables salida
	float *ic, *id, *ip;
	ic = new float;
	id = new float;
	ip = new float;

	// operaciones
	*ic = *po -( (*po*(*pd / 100)));
	*id = *ic*(*pd / 100);
	*ip = *ic - *id;
	//respuesta
	cout << "el importe de compra es:" << *ic << endl;
	cout << "el importe de descuento es:" << *id << endl;
	cout << "el importe a pagar:" << *ip;
	_getch();
}
