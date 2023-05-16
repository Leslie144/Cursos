#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	int *he = new int;
	int *hs = new int;
	
	cout << "Ingresa la hora de entrada: "; cin >> *he;
	cout << "Ingresa la hora de salida: "; cin >> *hs;
	int *tarifa = new int;
	int *tarifa1 = new int;
	if (*he + 100 < *hs) {
		*tarifa = 10;
	}
	*tarifa1 = ((*hs - (*he *2))/100)*6;
	cout << "La tarifa a pagar es: S/. " << *tarifa + *tarifa1;
	_getch();
}