#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	//dato de entrada
	float *d, *v;
	d = new float;
	v = new float;
	//definimos y leemos
	cout << "ingrese la distancia: ";
	cin >> *d;
	cout << "ingrese la velocidad: ";
	cin >> *v;
	//dato de salida
	float *t;
	t = new float;
	//operaciones
	*t = *d / (*v);
	cout << "el tiempo es: " << *t;
	_getch();
}