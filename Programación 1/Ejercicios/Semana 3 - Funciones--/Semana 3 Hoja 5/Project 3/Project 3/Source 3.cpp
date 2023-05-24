#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	//variables de entrada
	float *x = new float;
	float *y = new float;
	//mostrams y leemos
	cout << "ingrese la coordenada X: ";
	cin >> *x;
	cout << "ingrese la coordenada Y: ";
	cin >> *y;
	//varable de salida
	int *c = new int;
	//condicion
	if (*x > 0 && *y > 0) {
		*c = 1;
	}
	else if (*x < 0 && *y > 0) {
		*c = 2;
	}
	else if (*x < 0 && *y < 0) {
		*c = 3;
	}
	else  
		*c = 3;
	cout << "el punto que se encuentra en el cuadrante: " << *c;
	_getch();
}