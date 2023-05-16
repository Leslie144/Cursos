#include<iostream>
using namespace std;

void ingreso_datos(int *N, float *a, float *x) {
	do {
		cout << "Ingrese valor de N: "; cin >> *N;
	} while (!(*N >= 1));

	do {
		cout << "Ingrese valor de a: "; cin >> *a;
	} while (!(*a >= 1 && *a <= 5));

	do {
		cout << "Ingrese valor de x: "; cin >> *x;
	} while (!(*x >= 0));
}

void hallando_la_suma(int *N, float *a, float *x) {
	float base = 0;
	float numerador, denominador;
	float suma = 0.0;

	for (int terminos = 1; terminos <= *N; terminos++) {
		numerador = terminos**x;

		if (terminos % 2 != 0) {
			base = base + 1;
			denominador = base**a;
		}
		else {
			denominador = 1;
		}
		if (terminos % 2 == 0) {
			suma = suma - (numerador / denominador);
		}
		else {
			suma = suma + (numerador / denominador);
		}
	}
	cout << "Resultado: " << suma;
}

int main() {
	int *N = new int;
	float *a = new float;
	float *x = new float;

	ingreso_datos(N, a, x);
	hallando_la_suma(N, a, x);

	cout << endl << endl;
	system("pause");
}