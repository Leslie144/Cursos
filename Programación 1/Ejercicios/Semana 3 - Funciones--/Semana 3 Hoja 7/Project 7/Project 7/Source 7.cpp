#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	char *modelo = new char;
	char *color = new char;
	int *edad = new int;

	cout << "Ingrese modelo: "; cin >> *modelo;
	*modelo = toupper(*modelo);
	while (!(*modelo == 'A' || *modelo == 'B')) {
		cout << "Ingrese modelo: "; cin >> *modelo;
		*modelo = toupper(*modelo);
	}

	cout << "Color (B:blanco, M:metalizado, O:otros): "; cin >> *color;
	*color = toupper(*color);
	while (!(*color == 'B' || *color == 'M' || *color == 'O')) {
		cout << "Color (B:blanco, M:metalizado, O:otros): "; cin >> *color;
		*color = toupper(*color);
	}

	cout << "Edad: "; cin >> *edad;
	while (!(*edad >= 0 && *edad <= 150)) {
		cout << "Edad: "; cin >> *edad;
	}

	float *precio = new float;


	switch (*modelo)
	{
	case 'A':
		switch (*color)
		{
		case 'B':
			if (*edad < 31) {
				*precio = 240.50 + (240.50 * 0.25);
			}
			if (*edad > 31 && *edad < 65) {
				*precio = 240.50;
			}
			if (*edad > 65) {
				*precio = 240.50 + (240.50 * 0.1);
			}
			cout << "Precio seguro: " << *precio;
			break;
		case 'M':
			if (*edad < 31) {
				*precio = 330 + (330 * 0.25);
			}
			if (*edad > 31 && *edad < 65) {
				*precio = 330;
			}
			if (*edad > 65) {
				*precio = 330 + (330 * 0.1);
			}
			cout << "Precio seguro: " << *precio;
			break;
		case 'O':
			if (*edad < 31) {
				*precio = 270.50 + (270.50 * 0.25);
			}
			if (*edad > 31 && *edad < 65) {
				*precio = 270.50;
			}
			if (*edad > 65) {
				*precio = 270.50 + (270.50 * 0.1);
			}
			cout << "Precio seguro: " << *precio;

			break;
		default:
			break;
		}
		break;
	case 'B':
		switch (*color)
		{
		case 'B':
			if (*edad < 31) {
				*precio = 300 + (300 * 0.25);
			}
			if (*edad > 31 && *edad < 65) {
				*precio = 300;
			}
			if (*edad > 65) {
				*precio = 300 + (300 * 0.1);
			}
			cout << "Precio seguro: " << *precio;
			break;
		case 'M':
			if (*edad < 31) {
				*precio = 360.50 + (360.50 * 0.25);
			}
			if (*edad > 31 && *edad < 65) {
				*precio = 360.50;
			}
			if (*edad > 65) {
				*precio = 360.50 + (360.50 * 0.1);
			}
			cout << "Precio seguro: " << *precio;
			break;
		case 'O':
			if (*edad < 31) {
				*precio = 330 + (330 * 0.25);
			}
			if (*edad > 31 && *edad < 65) {
				*precio = 330;
			}
			if (*edad > 65) {
				*precio = 330 + (330 * 0.1);
			}
			cout << "Precio seguro: " << *precio;

			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
	_getch();
}