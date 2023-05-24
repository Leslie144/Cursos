#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	int *tipo_de_pizza = new int;
	float *precio_unitario = new float;

	cout << "Tipo de pizza [1, 2, 3]: "; cin >> *tipo_de_pizza;
	while (!(*tipo_de_pizza >= 1 && *tipo_de_pizza <= 3)) {
		cout << "Tipo de pizza [1, 2, 3]: "; cin >> *tipo_de_pizza;
	}
	cout << "Precio: "; cin >> *precio_unitario;

	float *pago = new float;
	switch (*tipo_de_pizza)
	{
	case 1:
		*pago = *precio_unitario - (*precio_unitario*(0.1));
		break;
	case 2:
		*pago = *precio_unitario - (*precio_unitario*(0.15));
		break;
	case 3:
		*pago = *precio_unitario - (*precio_unitario*(0.2));
		break;
	default:
		break;
	}
	cout << "Total a pagar: " << *pago;
	_getch();
}