#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	char *escala = new char;
	int *cursos = new int;
	
	do {
		cout << "Ingrese escala: "; cin >> *escala;
		*escala = toupper(*escala);
	} while (!(*escala == 'A' || *escala == 'B'));
	cout << "Ingrese numero de cursos: "; cin >> *cursos;

	(*escala == 'A'&& *cursos >= 1 && *cursos <= 8) ? cout << "Importe S/. 900" :
		(*escala == 'A' && *cursos >= 9) ? cout << "Importe S/. 1100" :
		(*escala == 'B' && *cursos >= 1 && *cursos <= 10) ? cout << "Importe S/. 1300" : 
		cout << "Imorte: S/. 1500";


	_getch();
}