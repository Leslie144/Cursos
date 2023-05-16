#include<iostream>
#include<conio.h>
using namespace std;

int main() {
	char *escala = new char;
	int *numero_de_cursos = new int;
	float *cuota_variable = new float;

	cout << "Escala: "; _flushall(); cin >> *escala; *escala = toupper(*escala);
	cout << "Numero de cursos: "; cin >> *numero_de_cursos;

	*cuota_variable = (*escala == 'A'&&*numero_de_cursos >= 1 && *numero_de_cursos <= 8) * 200 +
		              (*escala == 'A'&&*numero_de_cursos >= 9) * 400 +
		              (*escala == 'B'&&*numero_de_cursos >= 1 && *numero_de_cursos <= 10) * 600 +
		              (*escala == 'B'&&*numero_de_cursos >= 11) * 800;

	cout << "Importe: S/. " << *cuota_variable + 700;
	_getch();
}