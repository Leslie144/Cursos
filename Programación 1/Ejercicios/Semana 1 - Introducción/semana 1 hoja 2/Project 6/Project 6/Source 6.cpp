#include<iostream>
#include<conio.h>
#include<math.h>
#include <stdio.h>


using namespace std;
int main() {
	setlocale(LC_ALL, "");
	double *x1 = new double;
	double *y1 = new double;
	double *x2 = new double;
	double *y2 = new double;
	//mostramos y leemos
	cout << "ingrese x1: "; cin >> *x1;
	cout << "ingrese y1: "; cin >> *y1;
	cout << "ingrese x2: "; cin >> *x2;
	cout << "ingrese y2: "; cin >> *y2;

	int *d = new int;
	double *m = new double;
	double *a = new double;

	*d = sqrt(pow((*x1 - *x2), 2) + pow((*y1 - *y2), 2));
	*m = (*y2 - *y1) / (*x2 - *x1);
	*a =  atan(*m);

	cout << "la distancia entre los dos puntos: " << *d << endl;
	cout << "la pendiente: " << *m << endl;
	cout << "el ángulo es: " << *a;

	_getch();
}