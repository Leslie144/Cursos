#include<iostream>
using namespace std;

void ingresa_n(int *n) {
	do {
		cout << "Ingrezse n: "; cin >> *n;
	} while (!(*n > 10 && *n < 20));
}

void generar_numeros(int *n, int *numeros) {
	for (int i = 0; i < *n; i++) {
		numeros[i] = 1 + rand() % 80;
	}
}

void mostrar_numeros(int *n, int *numeros) {
	cout << "Numeros" << endl;
	for (int i = 0; i < *n; i++) {
		cout << numeros[i] << " ";
	}
	cout << endl;
}

void ascendente(int *n, int *numeros) {
	int mayor = numeros[0];
	cout << "Los numeros amigos que protegen al: " << endl;
	for (int i = 0; i < *n; i++) {
		if (mayor < numeros[i]) {
			//cout << (mayor = numeros[i]) << " ";
			mayor = numeros[i];
			cout << mayor << " ";
		}
		else {
			cout << endl;
			//cout << (mayor = numeros[i]) << " ";
			mayor = numeros[i];
			cout << mayor << " ";
		}
	}
	cout << endl;
}

int main() {
	srand(time_t(NULL));
	int *n = new int;
	ingresa_n(n);
	int *numeros = new int[*n];

	generar_numeros(n, numeros);
	mostrar_numeros(n, numeros);
	ascendente(n, numeros);

	system("pause");
	delete n;
	delete[] numeros;
}