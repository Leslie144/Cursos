#include<iostream>

using namespace std;
using namespace System;

float potencia(float N, float X) {
	float exponente = 1;

	for (int i = 1; i <= N; i++) {
		exponente = exponente*X;
	}
	return exponente;
}

void menu_principal() {
	cout << "   Menu principal" << endl;
	cout << " 1. Hallar el n-esimo termino" << endl;
	cout << " 2. Graficar" << endl;
	cout << " 3. Fin" << endl;
}

void halla_suma(int *N, float *X) {
	float numerador, denominador;
	float exp = 1;
	long double suma = 0;

	for (int i = 0; i < *N; i++) {
		//HALLANDO EL NUMERADOR
		numerador = ((2 * (i + 1) - 1))*(potencia(potencia(i, 2), *X));

		//HALLANDO EL DENOMINADOR
		denominador = (i + 1) * 2;

		if (i % 2 == 0) {
			suma = suma + (numerador / denominador);
		}
		else {
			suma = suma - (numerador / denominador);
		}
	}
	cout << endl << "La suma es: " << suma << endl << endl;
}

void graficar(int *N) {
	int centro = 40;
	for (int fila = 1; fila <= *N - 1; fila++) {
		for (int columna = 0; columna <= centro + (*N - 1); columna++) {

			if (columna < centro) {
				cout << " ";
			}
			else {
				if (fila == 1 || fila == *N - 1 || columna == 0 + centro|| columna == (*N - 1) + centro) {
					cout << columna - centro;
				}
				else {
					cout << " ";
				}
			}
		}
		cout << endl;
	}
	
	cout << endl;
}

int main() {
	int *opcion_menu = new int;
	int *N = new int;
	float *X = new float;

	while (1) {
		menu_principal();
		cout << "Ingrese opcion: "; cin >> *opcion_menu;
		cout << endl;
		system("cls");
		switch (*opcion_menu) {
		case 1:
			do {
				cout << "Ingrese N: "; cin >> *N;
			} while (!(*N >= 1));
			do {
				cout << "Ingrese X: "; cin >> *X;
			} while (!(*X >= 0.5 && *X <= 3.5));

			halla_suma(N, X);
			system("pause");
			system("cls");
			break;
			
		case 2: 
			do {
				cout << "Ingrese N: "; cin >> *N;
			} while (!(*N >= 1 && *N <= 9));

			graficar(N);
			system("pause");
			system("cls");
			break;

		case 3:
			cout << "Fin del programa" << endl;
			exit(0);
		default:
			break;
		}
	}

	cout << endl << endl;
	system("pause");
	delete opcion_menu, N, X;
}