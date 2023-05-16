#include<iostream>
using namespace std;

void ingreso_datos(int *numero_de_terminos) {
	do {
		cout << "Ingrese el numero de terminos: "; cin >> *numero_de_terminos;
	} while (!(*numero_de_terminos >= 1));
}

double potencia(int numero_de_terminos, int base) {
	double exponencial = 1.0;

	for (int terminos = 1; terminos <= numero_de_terminos; terminos++) {
		exponencial = exponencial*(base);
	}
	return exponencial;
}

void hallando_la_suma(int *numero_de_terminos) {
	double numerador, denominador;
	double suma = 0.0;
	for (int terminos = 1; terminos <= *numero_de_terminos; terminos++) {
		//HALLANDO EL NUMERADOR
		numerador = potencia(terminos, 8);
		//HALLANDO EL DENOMINADOR
		denominador = potencia(terminos, terminos);

		if (terminos % 2 == 0) {
			suma = suma - (numerador / denominador);
		}
		else {
			suma = suma + (numerador / denominador);
		}
	}
	cout << endl;
	cout << "Suma = " << suma;
}

int main() {
	int *numero_de_terminos = new int;

	ingreso_datos(numero_de_terminos);
	hallando_la_suma(numero_de_terminos);

	cout << endl;
	system("pause");
}