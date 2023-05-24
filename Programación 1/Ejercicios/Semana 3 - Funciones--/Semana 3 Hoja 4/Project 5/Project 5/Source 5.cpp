#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	//dato de entrada
	int *cua = new int;
	float *pa = new float;
	//mostramos y leemos
	cout << "ingrese la cantidad de unidades adquiridas: ";
	cin >> *cua;
	cout << "ingrese el precio del artículo: ";
	cin >> *pa;
	//dato de salida
	float *mt = new float;
	float *mtigv = new float;
	//operaciones
	*mt = *cua*(*pa);
	*mtigv = *mt - (0.18*(*mt));
	//respuesta
	cout << "el monto total es: " << *mt << endl;
	cout << "el monto total  con IGV es: " << *mtigv;
	_getch();
}