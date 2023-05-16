#include<iostream>
#include<conio.h>
using namespace std;
//función principal
int main() {
	setlocale(LC_ALL, "");   //aparecen la tildes
	int *n = new int;
	int *r = new int;
	cout << "ingrese número: "; cin >> *n;
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