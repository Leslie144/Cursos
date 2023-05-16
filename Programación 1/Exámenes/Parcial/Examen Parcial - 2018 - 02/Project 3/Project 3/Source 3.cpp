#include<iostream>
using namespace std;

void ingreso_datos(int *numero) {
	do {
		cout << "Ingrese el valor de n: "; cin >> *numero;
	} while (!(*numero >= 1 && *numero <= 10));
}

int main() {
	int *numero = new int;

	ingreso_datos(numero);
	//PARTE SUPERIOR
	for (int fila = 1; fila <= *numero; fila++) {
		for (int columna = 1; columna <= *numero; columna++) {
			if (fila == *numero || columna == *numero || fila == columna) {
				cout << *numero;
			}
			else {
				cout << " ";
			}
		}
		for (int columna = *numero - 1; columna >= 1; columna--) {
			if (fila == *numero || fila == columna) {
				cout << *numero;
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
	//PARTE INFERIOR
	for (int fila = *numero - 1; fila >= 1; fila--) {
		for (int columna = 1; columna <= *numero; columna++) {
			if (fila == *numero || fila == columna || columna== *numero) {
				cout << *numero;
			}
			else {
				cout << " ";
			}
		}
		for (int columna = *numero - 1; columna >= 1; columna--) {
			if (fila == columna) {
				cout << *numero;
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << endl;
	system("pause");
}