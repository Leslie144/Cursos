#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	//definimos variables entrada
	float  *at, *a1, *a2, *a3, *g1, *g2, *g3, *mt;
	at = new float;
	a1 = new float;
	a2 = new float;
	a3 = new float;
	g1 = new float;
	g2 = new float;
	g3 = new float;
	mt = new float;
	//mostramos y leemos 
	cout << "ingrese acciones socio 1: ";
	cin >> *a1;
	cout << "ingrese acciones socio 2: ";
	cin >> *a2;
	cout << "ingrese acciones socio 3: ";
	cin >> *a3;
	cout << "ingrese monto total: S/. ";
	cin >> *mt;
	//definimos variables salida
	float *m1, *m2, *m3;
	m1 = new float;
	m2 = new float;
	m3 = new float;
	// operaciones
	*at = *a1 + *a2 + *a3;
	*m1 = (*mt / (*at))*(*a1);
	*m2 = (*mt / (*at))*(*a2);
	*m3 = (*mt / (*at))*(*a3);
	//respuesta
	cout << "ganancia socio 1:S/. " << *m1 <<endl ;
	cout << "ganancia socio 2:S/. " << *m2 <<endl ;
	cout << "ganancia socio 3:S/. " << *m3;
	_getch();
}
