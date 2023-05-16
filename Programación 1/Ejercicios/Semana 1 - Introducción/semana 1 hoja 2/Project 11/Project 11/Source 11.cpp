#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	float *costo = new float;
	cout << "Ingrese el costo: "; cin >> *costo;
	int *entrada = new int;
	cout << "Ingrese el numero de entrada: "; cin >> *entrada;
	cout << endl;
	float *pago = new float;

	if (*entrada == 2) {
		*pago = *costo - (*costo*0.1);
	}else 	if (*entrada == 3) {
		*pago = *costo - (*costo*0.15);
	}
	else 	if (*entrada == 4) {
		*pago = *costo - (*costo*0.2);
	}
	
	cout << "El costo con descuento es: "<< *pago;
	_getch();
}