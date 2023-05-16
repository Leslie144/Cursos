#include<iostream>
#include<conio.h>
using namespace std;

void entrada_de_dato(char *marca, int *color, int *capacidad) {
	cout << "Ingrese marca: ";
	_flushall();
	cin >> *marca;
	*marca = toupper(*marca);

	cout << "Ingrese numero de color: "; cin >> *color;
	cout << "Ingrese capacidad de almacenamiento: "; cin >> *capacidad;
}

int main() {
	char *marca = new char;
	int *color = new int;
	int *capacidad = new int;
	float *precio = new float;

	entrada_de_dato(marca, color, capacidad);

	*precio = (*marca == 'W'&&*color == 0 && *capacidad == 8)*(1200) +
		      (*marca == 'W'&&*color == 0 && *capacidad == 16)*(1500) +
		      (*marca == 'W'&&*color == 1 && *capacidad == 16)*(2300) +

		      (*marca == 'S'&&*color == 0 && *capacidad == 8)*(1900) +
		      (*marca == 'S'&&*color == 0 && *capacidad == 16)*(2600) +
		      (*marca == 'S'&&*color == 1 && *capacidad == 16)*(2900);

	cout << "El precio es S/. " << *precio;
	_getch();
}