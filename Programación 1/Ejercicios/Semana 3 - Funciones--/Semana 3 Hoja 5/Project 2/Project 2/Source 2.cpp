#include<iostream>
#include<conio.h>
using namespace std;
int valida_mes(int *mes) {
	cout << "ingrese el número del mes: ";
	cin >> *mes;
	while (!(*mes >= 1 && *mes <= 12)) {
		cout << "ingrese el número del mes: ";
		cin >> *mes;
	}
	return *mes;
}
int main() {
	setlocale(LC_ALL, "");
	//dato de entrada
	int *mes = new int;
	//variable adicional
	int *dias = new int;
	//llamamos a la funcion
	*mes = valida_mes(mes);
	//condicion
	if (*mes == 1 || *mes == 4 || *mes == 5 || *mes == 7 || *mes == 8 || *mes == 10 || *mes == 12) {
		*dias = 31;
	}
	else if (*mes == 2) {
		*dias = 28;
	}
	else if (*mes == 3 || *mes == 6 || *mes == 9 || *mes == 11) {
		*dias = 30;
	}
	//respuesta
	cout << "el mes es " << *mes << " tiene " << *dias << " días";
	_getch();