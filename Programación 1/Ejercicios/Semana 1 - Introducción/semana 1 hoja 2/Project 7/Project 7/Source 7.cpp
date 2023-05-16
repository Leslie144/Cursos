#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	int *v1 = new int;
	int *v2 = new int;
	int *v3 = new int;
	//mostramos y leemos
	cout << "ingrese valor 1: "; cin >> *v1;
	cout << "ingrese valor 2: "; cin >> *v2;
	cout << "ingrese valor 3: "; cin >> *v3;

	int *mayor = new int;
	int *menor = new int;

	if (*v1 > *v2 && *v1 > *v3) {
		*mayor <-*v1;
	}
	else
		
		if (*v2>*v1 && *v2 > *v3) {
			*mayor <-*v2;
		}else
		
			if (*v3>*v1 && *v3 > *v1) {
				*mayor <- *v3;
			}

	if (*v1 < *v2 && *v1 < *v3) {
		*menor <- *v1;
	}else
		if (*v2 < *v1 && *v2 < *v3) {
			*mayor <- *v2;
		}else
			if (*v3 < *v1 && *v3 < *v1) {
				*mayor <- *v3;
			}
	cout << "el mayor valor es: " << *mayor << endl;
	cout << "el menor valor es: " << *menor;
	_getch();
}