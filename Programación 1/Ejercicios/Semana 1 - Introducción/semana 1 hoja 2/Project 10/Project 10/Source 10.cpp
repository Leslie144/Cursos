#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	int *opcion = new int;
	char *rpta = new char;
	cout << "Ingrese digito: "; cin >> *opcion;
	//convercion de entero a caracter
	*rpta = char(*opcion);
	if (*opcion >= 48 && *opcion <= 57) {
		cout << "El numero es: "<< *rpta;
	}
	else if (*opcion >= 65 && *opcion <= 90) {
		cout << "La letra mayuscula es: " << *rpta;
	}
	else if (*opcion >= 97 && *opcion <= 122) {
		cout << "La letra minuscula es: " << *rpta;
	}
	_getch();
}