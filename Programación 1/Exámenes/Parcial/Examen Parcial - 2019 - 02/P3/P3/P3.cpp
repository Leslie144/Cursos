#include<iostream>
using namespace std;

void ingreso_datos(int *numero) {
	do {
		cout << "Ingrese un numero: "; cin >> *numero;
	} while (!(*numero >= 1 && *numero <= 14));
}

int main() {
	int *numero = new int;

	ingreso_datos(numero);


	for (int fila = 1; fila <= *numero; fila++) {
		for (int columna = 1; columna < fila; columna++) {
			cout << " ";
		}
		for (int columna = 1; columna <= *numero - fila + 1; columna++) {
			cout << columna ;
		}
		for (int columna = *numero - fila; columna >= 1; columna--) {
			cout << columna;
		}
		cout << endl;
	}

	for (int fila = 2; fila <= *numero; fila++) {
		for (int columna = 1; columna <= *numero - fila; columna++) {
			cout << " ";
		}
		for (int columna = 1; columna <=  fila; columna++) {
			cout << columna;
		}
		for (int columna = fila - 1; columna >= 1; columna--) {
			cout << columna;
		}
		cout << endl;
	}

	cout << endl;
	system("pause");
}