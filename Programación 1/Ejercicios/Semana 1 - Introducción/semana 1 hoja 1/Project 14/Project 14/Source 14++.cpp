#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	//dato de entrada
	int *cf;
	float *n;
	cf = new int;
	n = new  float;
	//definimos y leemos
	cout << "ingrese nota: ";
	cin >> *n;
	cout << "ingrese cantidad de faltas: ";
	cin >> *cf;
	//condicion
	if (*n >= 15 && *n <= 20 && *cf == 0)
		cout << "sí se le otorga la beca";
	if (*n >= 0 && *n <= 20 && *cf >= 1)
		cout << "no se le otorga la beca";
	//if (*n >= 15 && *n <= 20 && *cf == 0)
	//{
	//cout<<"si se le otorga la beca"}
	//else {no se le torga la beca}
	_getch();
}