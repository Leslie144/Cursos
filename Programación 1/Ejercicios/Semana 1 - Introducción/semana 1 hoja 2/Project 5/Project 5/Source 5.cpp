#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	float *x = new float;
	float *y = new float;
	//mostramos y leemos
	cout << "ingrese x: "; cin >> *x;
	cout << "ingrese y: "; cin >> *y;
	//condicion
	if (*x >= 5 && *x <= 5) {
		if (*y >= 5 && *y <= 5) {
			cout << "se encuentra dentro del circulo";
		}
		else
			cout << "error";
	}
	else
		cout << "error";
	_getch();
}