#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	float *sueldo = new float;
	char *tipo = new char;
	char *credito = new char;
	char *carga = new char;

	cout << "Sueldo mensual: "; cin >> *sueldo;
	cout << "Tipo de vivienda (P:pariente; A:alquilada; M:propia): "; cin >> *tipo;
	*tipo = toupper(*tipo);
	while (!(*tipo == 'P' || *tipo == 'A' || *tipo == 'M')) {
		cout << "Tipo de vivienda (P:pariente; A:alquilada; M:propia): "; cin >> *tipo;
		*tipo = toupper(*tipo);
	}

	cout << "Tarjeta de credito (N:no tiene; S:si tiene): "; cin >> *credito;
	*credito = toupper(*credito);
	while (!(*credito == 'S' || *credito == 'N')) {
		cout << "Tarjeta de credito (N:no tiene; S:si tiene): "; cin >> *credito;
		*credito = toupper(*credito);
	}

	cout << "Tiene carga familiar (N:no tiene; S:si tiene): "; cin >> *carga;
	*carga = toupper(*carga);
	while (!(*credito == 'S' || *credito == 'N')) {
		cout << "Tiene carga familiar (N:no tiene; S:si tiene): "; cin >> *carga;
		*carga = toupper(*carga);
	}

	int *puntossueldo = new int;
	int *puntostipo = new int;
	int *puntoscredito = new int;
	int *puntosvivienda = new int;

	if (*sueldo < 1500) {
		*puntossueldo = 6;
	}
	if (*sueldo >= 1500 && *sueldo <= 6000) {
		*puntossueldo = 12;
	}
	else {
		*puntossueldo = 18;
	}

	if (*tipo == 'P') {
		*puntostipo = 2;
	}
	if (*tipo == 'A') {
		*puntostipo = 5;
	}
	if (*tipo == 'M') {
		*puntostipo = 10;
	}
	
	
	if (*credito == 'S') {
		*puntoscredito = 6;
	}
	else  {
		*puntoscredito = 0;
	}

	if (*carga == 'N') {
		*puntosvivienda = 3;
	}
	else {
		*puntosvivienda = 6;
	}
	
	int *suma = new int;
	*suma = *puntossueldo + *puntostipo + *puntoscredito + *puntosvivienda;
	cout << "________________________________________________________________" << endl;
	cout << "Puntaje obtenido: " << *suma << endl;
	if (*suma > 20) {
		cout << "Se le otorga prestamo";
	}
	else {
		cout << "No se le otorga prestamo";
	}

	_getch();
}