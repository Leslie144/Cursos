#include<iostream>
#include<conio.h>
using namespace std;

void entrada_de_dato(int *dato_ingresado) {
	cout << "Dato ingresado: anio: "; cin >> *dato_ingresado;
}

int main() {
	int *dato_ingresado = new int;
	int *a = new int;
	int *b = new int;
	int *c = new int;
	int *d = new int;
	int *e = new int;
	int *n = new int;
	int *dia = new int;
	char *mes = new char;

	//cout << "Dato ingresado: anio: ";cin >> *dato_ingresado;2
	entrada_de_dato(dato_ingresado);

	*a = *dato_ingresado % 19;
	*b = *dato_ingresado % 14;
	*c = *dato_ingresado % 7;
	*d = ((19 * (*a)) + 24) % 30;
	*e = (((*b * 2) + (*c * 4) + (*d * 6)) + 5) % 7;

	*n = (22 + *d + *e);

	//comprabacion de datos:
	//cout << *a << endl << *b << endl << *c << endl << *d << endl << *e << endl << *n << endl;

	*mes = (*n > 30)*'A' +
		(*n <= 30)*'M';

	*dia = (*n > 30)*(*n - 30) +
		(*n == 30) * 30 +
		(*n < 30)* (*n);

	cout << "Salida: " << *dia << " " << *mes;

	cout << endl << endl;
	system("pause");
}
