#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	//dato de entrada
	int *nn = new int;
	cout << "ingrese número de neumáticos: ";
	cin >> *nn;
	//dato de salida
	float *cn = new float;
	//condicion 
	if (*nn < 3) {
		*cn = 145 * (*nn);
	} if (*nn >= 3 && *nn <= 5) {
		*cn = 168 * (*nn);
	}
	else
		*cn = 135 * (*nn);
	//respuesta
	cout << "el monto total que pagará es: " << *cn;
	_getch();
}