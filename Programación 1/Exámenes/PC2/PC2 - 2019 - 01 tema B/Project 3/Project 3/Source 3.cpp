#include<iostream>
using namespace std;

void GenerarMostrarNotas(int *cantidad_de_alumnos, float *notasestudiantes) {
	for (int i = 1; i <= *cantidad_de_alumnos; i++) {
		notasestudiantes[i - 1] = ((rand() % 21 * 1.0) + (rand() % 99/100.0));
		if (notasestudiantes[i - 1] > 20) {
			notasestudiantes[i - 1] = 20.0;
		}
	}

	cout << "Las notas son: " << endl;
	for (int i = 0; i < *cantidad_de_alumnos; i++) {
		cout << "Ingrese nota del alumno " << i + 1 << " es: " << notasestudiantes[i] << endl;
	}
	cout << "----------------------------------------------------" << endl;
}

void AprobadosDesaprobados(int *cantidad_de_alumnos, float *notasestudiantes) {
	int contador_aprobados = 0, contador_desaprobados = 0;
	int ubicacion_mayor = 0, ubicacion_menor = 0;
	float mayor = notasestudiantes[ubicacion_mayor], menor = notasestudiantes[ubicacion_menor];

	cout << "Lista de Aprobados:" << endl;
	for (int i = 0; i < *cantidad_de_alumnos; i++) {

		if (notasestudiantes[i] >= 13) {
			contador_aprobados++;
			ubicacion_mayor = i;
			mayor = notasestudiantes[ubicacion_mayor];
			cout << "El alumno " << ubicacion_mayor + 1 << " su nota es: " << mayor << endl;
		}
	}
	cout << "Hay " << contador_aprobados << " alumnos aprobados" << endl;
	cout << endl;
	cout << "Lista de Desaprobados:" << endl;
	for (int i = 0; i < *cantidad_de_alumnos; i++) {

		if (notasestudiantes[i] < 13) {
			contador_desaprobados++;
			ubicacion_menor = i;
			menor = notasestudiantes[ubicacion_menor];
			cout << "El alumno " << ubicacion_menor + 1 << " su nota es: " << menor << endl;
		}
	}
	cout << "Hay " << contador_desaprobados << " alumnos desaprobados" << endl;
}

int main() {
	int *cantidad_de_alumnos = new int;
	
	do {
		cout << "Ingrese canidad de alumnos: "; cin >> *cantidad_de_alumnos;
	} while (!(*cantidad_de_alumnos >= 1 && *cantidad_de_alumnos <= 50));
	cout << "----------------------------------------------------" << endl;
	float *notasestudiantes = new float[*cantidad_de_alumnos];

	GenerarMostrarNotas(cantidad_de_alumnos, notasestudiantes);
	AprobadosDesaprobados(cantidad_de_alumnos, notasestudiantes);

	cout << endl;
	system("pause");
}