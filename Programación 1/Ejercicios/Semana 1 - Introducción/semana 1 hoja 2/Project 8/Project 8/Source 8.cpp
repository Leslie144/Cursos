#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	//variabe de entrada
	int *a = new int;
	int *b = new int;
	int *c = new int;
	//mostramos y leemos
	cout << "ingrese a: "; cin >> *a;
	cout << "ingrese b: "; cin >> *b;
	cout << "ingrese c: "; cin >> *c;
	//variable de salida
	int *mayor = new int;
	int *menor = new int;
	int *medio= new int;
	//condicion 
	//verificamos el mayor
	if (*a > *b && *a > *c) {
		*mayor = *a;
	}
	else if (*b > *a && *b > *c) {
		*mayor = *b;
	}
	else {
		*mayor = *c;
	}
	//verificamos el menor
	if (*a < *b && *a < *c) {
		*menor = *a;
	}
	else if (*b < *a && *b < *c) {
		*menor = *b;
	}
	else {
		*menor = *c;
	}
	//verificamos el medio
	if (*a > *menor && *a < *mayor) {
		*medio = *a;
	}
	else if (*b > *menor && *b < *mayor) {
		*medio = *b;
	}
	else {
		*medio = *c;
	}
//respuesta
	cout << "el mayor es: " << *mayor << endl;
	cout << "el medio es: " << *medio << endl;
	cout << "el menor es: " << *menor << endl;
	cout << *mayor << " " << *medio <<" " << *menor;
	//respuesta
	_getch();
	//system("pause"); //detiene el programa 
	//return 0;  //finaliza

}

	