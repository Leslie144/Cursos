#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	//datos de entrada
	int *dr = new int;
	int *de = new int;
	//mostramos y leemos
	cout << "ingrese distancia recorrida: ";
	cin >> *dr;
	cout << "ingrese días de estancia: ";
	cin >> *de;
	//dato salida
	int *ct = new int;
	int *cr = new int;
	int *cd = new int;
	float *ctd = new float;
	//operaciones
	*cr = (*dr * 150) / 100;
	*cd = 520 * (*de);
	*ct = *cr + *cd;
	//resultado
	cout << "el costo total es: " << *ct << endl;
	if (*ct > 2500) {
		//ctd = *ct - (*ct *0.35);
		*ctd = *ct - (*ct * (35.0/100.0));
		cout << "el costo total con descuento es: " << *ctd;
	}
	_getch();
}