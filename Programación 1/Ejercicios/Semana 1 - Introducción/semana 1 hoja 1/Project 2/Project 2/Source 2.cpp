#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	//entrada datos
	float *A, *B, *L, *precio;
	A = new float;
	B = new float;
	L = new float;
	precio = new float;
	//salida datos
	float *metrocubico, *pago;
	metrocubico = new float;
	pago = new float;
	//mostrar y leer
	cout << "ingrese Altura: ";
	cin >> *A;
	cout << "ingrese Base: ";
	cin >> *B;
	cout << "ingrese Longitud: 1";
	cin >> *L;
	cout << "ingrese precio: S/.";
	cin >> *precio;
	//proceso
	*metrocubico = *A * (*B) * (*L);
	*pago = *metrocubico*(*precio);
	cout << "el pago es:S/." << *pago;
	_getch();
}