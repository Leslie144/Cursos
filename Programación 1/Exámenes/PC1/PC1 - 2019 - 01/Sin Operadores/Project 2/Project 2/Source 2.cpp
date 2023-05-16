#include<iostream>
#include<conio.h>
using namespace std;

int main() {
	float *trabajos = new float;
	float *medio_ciclo = new float;
	float *fin_ciclo = new float;
	int *tardanzas = new int;
	float *promedio = new float;

	cout << "Ingrese nota de trabajos: "; cin >> *trabajos;
	cout << "Ingrese nota de medio de ciclo: "; cin >> *medio_ciclo;
	cout << "Ingrese nota de fin de ciclo: "; cin >> *fin_ciclo;
	cout << "Ingrese cantidad de tardanzas: "; cin >> *tardanzas;

	*promedio = (*trabajos*0.2) + (*medio_ciclo*0.3) + (*fin_ciclo*0.5);

	cout << "Su promedio es: " << *promedio << endl;
	cout << "Estado: ";
	cout << (char)((*promedio >= 16 && *promedio <= 20 && *tardanzas == 0)*'B' +
		           (*promedio >= 11 && *promedio <= 15 && *tardanzas >= 1 && *tardanzas <= 3)*'R' +
		           (*promedio >= 6 && *promedio <= 10 && *tardanzas >= 3 && *tardanzas < 6)*'M' +
		           (*promedio >= 0 && *promedio <= 5 && *tardanzas >= 6)*'P');
	_getch();
}