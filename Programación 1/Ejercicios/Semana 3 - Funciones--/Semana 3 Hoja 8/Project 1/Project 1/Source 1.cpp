#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	float *monto = new float;
	int *opcion = new int;
	float *descuento = new float;
	cout << "Ingrese monto total de compras: "; cin >> *monto;
	if (*monto >= 0 && *monto < 100) {
		cout << "El cliente no aplica a la promocion";
	}
	else {
		cout << "Numero \tColor" << endl;
		cout << "1 \tBlanco" << endl;
		cout << "2 \tRoja" << endl;
		cout << "3 \tAzul" << endl;
		cout << "4 \tVerde" << endl;
		cout << "5 \tAmarilla" << endl;
		cout << "Elige numero: "; cin >> *opcion;
		switch (*opcion)
		{
		case 1: 
			cout << "No tiene";
			break;
		case 2: 
			*descuento = *monto - (*monto*0.1);
			cout << "El moto a pagar es: " << *descuento;
			break;
		case 3:
			*descuento = *monto - (*monto*0.2);
			cout << "El moto a pagar es: " << *descuento;
			break;
		case 4:
			*descuento = *monto - (*monto*0.25);
			cout << "El moto a pagar es: " << *descuento;
			break;
		case 5:
			*descuento = *monto - (*monto*0.5);
			cout << "El moto a pagar es: " << *descuento;
			break;
		default:
			break;
		}
	}
	
	_getch();
}