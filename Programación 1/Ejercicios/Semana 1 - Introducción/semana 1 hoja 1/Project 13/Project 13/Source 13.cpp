#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	//dato de entrada
	float *c;
	c = new float;
	//definimos y leemos
	cout << "ingrese el consumo de GB: ";
	cin >> *c;
	if (*c <= 4) {
		cout << "costo: S/.50 por mes ";
	}
	else if (*c > 4 && *c < 8) {
		cout << "costo: S/.85 por mes ";
	}
	else if (*c > 8) {
		cout << "costo de consumo adicional pagará: S/. 4.50";
	}
	_getch();
}