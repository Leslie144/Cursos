#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	//definimos variables entrada
	float *pc, *pg ;
	pc = new float;
	pg = new float;
	//mostramos y leemos 
	cout << "ingrese precio de compra: S/.";
	cin >> *pc;
	cout << "ingrese procentaje de ganancia:";
	cin >> *pg;
	//definimos variables salida
	float *pv;
	pv = new float;
	// operaciones
	*pv = *pc + ((*pg*(*pc))/100);
	//respuesta
	cout << "el precio de venta es:S/." << *pv;
	_getch();
}
