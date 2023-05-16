#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	//dato de entrada
	int *cs;
	cs = new int;
	cout << "Ingrese la cantidad de segundos: ";
	cin >> *cs;
	//dato de salida
	int *s, *m, *h, *mf;
	s = new int;
	m = new int;
	h = new int;
	//operaciones
	*h = int(*cs / 3600);
	*m = ((*cs * 60) / 3600) - 60;
	*s = (((((*cs * 60) / 3600) * 3600) / 60) - *cs)*(-1);

	//mostramos
	cout << "La hora es: " << *h << endl;
	cout << "Los minutos serian: " <<*m << endl;
	cout << "Los segundos son: "<< *s;
	_getch();
}