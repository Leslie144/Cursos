#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "");
	//dato de entrada
	float *r, *h, *pi;
	r = new float;
	h = new float;
	pi = new float;
	//definimos y leemos
	cout << "ingrese el radio: ";
	cin >> *r;
	cout << "ingrese la hipotenusa: ";
	cin >> *h;
	cout << "ingrese pi: ";
	cin >> *pi;
	//dato de slaida
	float *asc, *atr, *ato;
	asc = new float;
	atr = new float;
	ato = new float;
	//operaciones
	*asc = (*pi*(*r*(*r))) / 2;
	*atr = 2*(*h - *r);
	*ato = *asc + *atr;

	cout << "el �rea del semi-c�rculo es: " << *asc << endl;
	cout << "el �rea del tri�ngulo es:" << *atr << endl;
	cout << "el �rea total es: " << *ato;
_getch();
}