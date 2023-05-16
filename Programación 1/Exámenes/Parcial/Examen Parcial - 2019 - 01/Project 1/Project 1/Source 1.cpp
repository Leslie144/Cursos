#include<iostream>
#include<conio.h>
using namespace std;

int valida_n(int *n) {
	do {
		cout << "Ingrese el valor de N: "; cin >> *n;
	} while (!(*n >= 0));
	return *n;
}

float valida_error(float *error) {
	do {
		cout << "Ingrese el minimo error de umbral: "; cin >> *error;
	} while (!(*error >= 0 && *error <= 1));
	return *error;
}

double halla_exponente(int *n) {
	int exponente = 1;
	for (int i = 1; i <= *n; i++) {
		exponente = exponente*(i);
	}
	return exponente;
}
/*
double sumatoria(int *n, float *error, float *exponente) {
	*n = valida_n(n);
	*error = valida_error(error);
	*exponente = halla_exponente(n);

	double suma = 0;
	for (int i = 1; i <= *n; i++) {
		suma = suma + (1 / *exponente);
	}
	return suma;
}
*/
int main() {
	int *n = new int;
	float *error = new float;
	float *exponente = new float;
	double *suma = new double;
	*n = valida_n(n);
	*error = valida_error(error);
	*exponente = halla_exponente(n);
	//*suma = sumatoria(n, error, exponente);
	cout << "La suma aporximada es: " << *exponente;
	_getch();
}