#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	//dato de entrada
	int *n;
	n = new int;
	//definimos y leemos
	cout << "ingrese n�mero: ";
	cin >> *n;
	if (*n >= 1 && *n <= 100) {
		cout << "es correcto" << endl;
		if (*n >= 1 && *n <= 9) {
			cout << "1 d�gito";
		}
		if (*n >= 10 && *n <= 99) {
			cout << "2 d�gitos" ;
		}
		if (*n >= 100 && *n <= 100) {
			cout << "3 d�gitos" ;
		}
	}
	else {
		cout << "error";
	}
	_getch();
}