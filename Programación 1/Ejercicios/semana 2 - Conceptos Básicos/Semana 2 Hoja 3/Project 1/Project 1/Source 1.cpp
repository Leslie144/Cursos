#include<iostream>
#include<conio.h>
using namespace std;
//funci�n principal
int main() {
	setlocale(LC_ALL, "");   //aparecen la tildes
	int *n = new int;
	int *r = new int;
	cout << "ingrese n�mero: "; cin >> *n;
	//condicionamos 
	if (*n >= 10) {
		*r = 3 * (*n);
	}
	else {
		*r = *n / 4;
	}
	cout << "el resultado es: " << *r;
	_getch();
}