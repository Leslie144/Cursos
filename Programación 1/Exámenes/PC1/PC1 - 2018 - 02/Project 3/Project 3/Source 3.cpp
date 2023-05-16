#include<iostream>
#include<conio.h>
using namespace std;


int main() {
	int *edad = new int;
	float *peso = new float;
	int *anio = new int;
	char *mes = new char;

	cout << "Ingrese edad: "; cin >> *edad;
	cout << "Ingrese peso: "; cin >> *peso;
	cout << "Ingrese anio de nacimiento: "; cin >> *anio;
	cout << "Ingrese primera letra del mes de nacimiento: "; cin >> *mes;


	cout << "la edad esta entre 16 y 25? ";
	cout << (char)((*edad >= 16 && *edad <= 25)*'S' +
		           (*edad <= 15 || *edad >= 26)*'N'); cout << endl;
	cout << (int)((*edad >= 16 && *edad <= 25) * (((((*edad / 4) / 4) % 4)* 100) + (((*edad / 4) % 4) * 10) + (*edad % 4)) +
		          (*edad <= 15 || *edad >= 26) * 69);
	cout << endl;

	cout << "el peso esta entre 50 y 60? ";
	cout << (char)((*peso >= 50 && *peso <= 60)*'S' +
		           (*peso <= 49 || *peso >= 61)*'N'); cout << endl;
	cout << ((*peso >= 50 && *peso <= 60)* ((((((((int(*peso) / 2) / 2) / 2) / 2) / 2) % 2) * 100000) + ((((((int(*peso) / 2) / 2) / 2) / 2) % 2) * 10000) + (((((int(*peso) / 2) / 2) / 2) % 2) * 1000) + ((((int(*peso) / 2) / 2) % 2) * 100) + (((int(*peso) / 2) % 2) * 10) + (int(*peso) % 2)) +
		(*peso <= 49 || *peso >= 61) * 69);
	cout << endl;
	
	cout << "el anio esta entre 1995 y 1998? ";
	cout << (char)((*anio >= 1995 && *anio <= 1998)*'S' +
		           (*anio <= 1994|| *anio >= 1999)*'N'); cout << endl;
	cout << (int)((*anio >= 1995 && *anio <= 1998)*( (((((*anio / 8) / 8) / 8) % 8)*10000) + ((((*anio / 8) / 8) % 8)*100) + (((*anio / 8) % 8)*10) + *anio % 8)+
		(*anio <= 1994 || *anio >= 1999) *69);
	cout << endl;

	cout << "Mes de nacimiento: " << endl;
	cout << "1" << ((((((int(*mes) / 2) / 2) / 2) / 2) / 2) % 2) << ((((int(*mes) / 2) / 2) / 2) / 2) % 2 << (((int(*mes) / 2) / 2) / 2) % 2 << ((int(*mes) / 2) / 2) % 2 << (int(*mes) / 2) % 2 << (int(*mes) % 2) << endl;
	
	_getch();
	
}