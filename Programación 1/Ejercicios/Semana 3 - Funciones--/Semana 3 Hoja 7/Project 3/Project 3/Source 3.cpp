#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	int *edad = new int;
	char *nacionalidad = new char;

	cout << "Edad: "; cin >> *edad;
	while (!(*edad >= 0 || *edad <= 100)) {
		cout << "Edad: "; cin >> *edad;
	}

	cout << "Nacionalidad: "; cin >> *nacionalidad;
	*nacionalidad = toupper(*nacionalidad);
	while (!(*nacionalidad == 'E' || *nacionalidad == 'N')) {
		cout << "Nacionalidad: "; cin >> *nacionalidad;
		*nacionalidad = toupper(*nacionalidad);
	}

	

	float *sueldoextranjero = new float;
	float *sueldoex = new float;
	float *sueldonacional = new float;
	
	if (*nacionalidad == 'E') {
		*sueldoex = 2500 + 500;
		if (*edad >= 15 && *edad <= 20) {
			*sueldoextranjero = *sueldoex + 1400;
		}
		else if (*edad >= 21 && *edad <= 25) {
			*sueldoextranjero = *sueldoex + 1500;
		}
		else if (*edad >= 25 && *edad <= 30) {
			*sueldoextranjero = 2500 + 500 + 1200;
		}
		else {
			*sueldoextranjero = 2500 + 500 + 800;
		}
		cout << "Su sueldo es: S/. " << *sueldoextranjero;
	}
	else {
		if (*edad >= 15 && *edad <= 20) {
			*sueldonacional = 2500 + 1400;
		}
		else if (*edad >= 21 && *edad <= 25) {
			*sueldonacional = 2500 + 1500;
		}
		else if (*edad >= 25 && *edad <= 30) {
			*sueldonacional = 2500+ 1200;
		}
		else {
			*sueldonacional = 2500 + 800;
		}
		cout << "Su sueldo es: S/. " << *sueldonacional;
	}


	_getch();
}