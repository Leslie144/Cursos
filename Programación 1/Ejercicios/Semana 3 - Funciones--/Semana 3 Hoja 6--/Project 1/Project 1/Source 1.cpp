#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	//dato de entrada
	float *la = new float;
	//mostramos y leemos
	cout << "ingrese números de litros: ";
	cin >> *la;
	//dato de salida
	float *cf = new float;
	//variable adicional
	float *pago = new float;
	*cf = 20;
	//condicion
	if (*la <= 50) {
		*pago = 20.0;
	}
	else if (*la >= 51 && *la <= 200) {
		*pago = 20.0 + ((*la - 50.0) * 2.0);
	}
	else {
		*pago = 20.0 + ((*la - 50.0) * 2.0) + (((*la - 200.0)*3.5) - ((*la - 50.0) * 2.0));
	}
	cout << "el pago sería: " << *pago;
	_getch();
}
