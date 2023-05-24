#include<iostream>
#include<conio.h>
using namespace std;
//validamos los años
int valida_años(int *años) {
	int *puntosa = new int;
	cout << "ingrese cantidad de años que labora: ";
	cin >> *años;
	if (*años < 5) {
		*puntosa=  5 ;
	}
	else
		*puntosa = 10;
	return *puntosa;
}
//validamos los estudios
char valida_estudios(char *estudios) {
	cout << "ingrese estudios: "; cin >> *estudios;
	*estudios = toupper(*estudios);
	while (!(*estudios == 'P' || *estudios == 'S' || *estudios == 'U' || *estudios == 'G')) {
		cout << "ingrese estudios: "; cin >> *estudios;
		*estudios = toupper(*estudios);
	}
	return *estudios;
}
int main() {
	setlocale(LC_ALL, "");
	//dato de entrada
	int *años = new int;
	char *estudios = new char;
	//variable adicional
	int *puntosa = new int;
	int *puntose = new int;
	//dato de salida
	int *po = new int;
	//llamamos a la funcion
	*puntosa = valida_años(años);
	*estudios = valida_estudios(estudios);
	//condicion switch
	switch (*estudios)
	{
	case 'P':*puntose = 5;
		break;
	case 'S':*puntose = 10;
		break;
	case 'U':*puntose = 20;
		break;
	case 'G':*puntose = 30;
		break;
	}
	//condicion if
	/*if(*estudios == 'P') {
		*puntose= 5; 
	}
	if (*estudios == 'S') {
		*puntose = 10;
	}
	if (*estudios == 'U') {
		*puntose = 20;
	}
	if (*estudios == 'G') {
		*puntose = 30;
	}*/
	//resultado
	*po = *puntosa + *puntose;
	cout << "el puntaje obtenido es: " << *po;
	_getch();
}