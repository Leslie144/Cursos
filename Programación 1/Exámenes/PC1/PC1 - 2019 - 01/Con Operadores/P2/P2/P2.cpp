#include<iostream>
#include<conio.h>

using namespace std;
int main() {

	float *T = new float;
	float *M = new float;
	float *F = new float;
	int *tardanzas = new int;
	float *promedio = new float;

	cout << "Ingrese nota de trabajos: "; cin >> *T;
	cout << "Ingrese nota de medio ciclo: "; cin >> *M;
	cout << "Ingrese nota de fin de ciclo: "; cin >> *F;
	cout << "Ingrese numero de tardanzas: "; cin >> *tardanzas;
	
	*promedio = (*T*0.2) + (*M*0.3) + (*F*0.5);
	cout << "Su promedio es: " << *promedio << endl;

	(*promedio >= 16.0 && *promedio <= 20.0 && *tardanzas==0) ? cout << "Bueno" :
		(*promedio >= 11.0 && *promedio <= 15.0 && *tardanzas >= 1 && *tardanzas <= 3) ? cout << "Regular" :
		(*promedio >= 6.0 && *promedio <= 10.0 && *tardanzas >= 4 && *tardanzas <= 6) ? cout << "Malo" : cout << "Pesimo";
	
	_getch();
}