#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	//dato de entrada
	int *h = new int;
	int *m = new int;
	int *s = new int;
	//dato de salida
	int *mre = new int;
	int *sre = new int;
	int *hre = new int;
	//definimos y leemos
	cout << "ingrese las horas: ";
	cin >> *h;
	while (!(*h >= 0 && *h <= 12)){
		cout << "ingrese las horas: ";
		cin >> *h;
	}
	cout << "ingrese los minutos: ";
    cin >> *m;
	while (!(*h >= 0 && *h <= 59)) {
		cout << "ingrese los minutos: ";
		cin >> *m;
	}
	if (*m == 59) {
		*mre = 00;
	}
	else {
		*mre = *m;
	}

	cout << "ingrese los segundos: ";
	cin >> *s;
	while (!(*h >= 0 && *h <= 59)) {
		cout << "ingrese los segundos: ";
		cin >> *s;
	}
	if (*s == 59) {
		*sre = 00;
	}
	else {
		*sre = *s+1;
	}


	if (*s == 59 && *m == 59) {
		*hre = *h + 1;
	}

	//mostramos
	cout << *hre << ':' << *mre << ':' << *sre;


	_getch();
}