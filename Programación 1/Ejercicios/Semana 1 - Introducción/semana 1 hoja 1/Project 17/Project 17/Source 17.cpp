#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	//dato de entrada
	int *n;
	n = new int;
	//definimos y leemos
	cout << "ingrese número: ";
	cin >> *n;
	if (*n >= 1 && *n <= 100) {
		cout << "es correcto" << endl;
		if (*n >= 1 && *n <= 9) {
			cout << "1 dígito";
		}
		if (*n >= 10 && *n <= 99) {
			cout << "2 dígitos" ;
		}
		if (*n >= 100 && *n <= 100) {
			cout << "3 dígitos" ;
		}
	}
	else {
		cout << "error";
	}
	_getch();
}