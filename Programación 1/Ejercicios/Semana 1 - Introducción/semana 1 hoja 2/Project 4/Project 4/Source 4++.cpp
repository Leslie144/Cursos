#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main() {
	//dato de entrada
	int *r;
	double *pi;
	r = new int;
	pi = new double;
	//definimos y leemos
	cout << "ingrese radianes: ";
	cin >> *r;
	//dato de salida
	double *g, *s, *m, *gdecimal, *mdecimal;
	int *gentero, *mentero;
	gentero = new int;
	mentero = new int;
	g = new double;
	m = new double;
	s = new double;
	gdecimal = new double;
	mdecimal = new double;
	//operaciones
	*pi = 3.1416;   
	//hallando grados
	*g = (*r * 180) / *pi;
	//grado entero
	*gentero = int(*g);     //trunC
	*gdecimal = *g - *gentero;
	//hallando minutos
	*m = *gdecimal * 60;
	//minuto entero
	*mentero = int(*m);     //trunC
	*mdecimal = *m - *mentero;
	//hallando segundos
	*s = *mdecimal * 60;
	cout << "el grado es: " << *g<< endl;
	//cout << "el grado entero es: " << *gentero << endl;
    cout << "los minutos es: " << *m << endl;
    cout << "los segundos es: " << *s;
	_getch();
}