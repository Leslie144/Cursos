#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	//dato de entrada
	int *nht = new int;
	//mostramos y leemos
	cout << "ingrese número de horas trabajadas: ";
	cin >> *nht;
	//dato de salida 
	float *paga = new float;
	//condicion 
	if (*nht <= 40) {
		*paga = 16 * (*nht);
	}
	else
		*paga = 16 * 40 + 20 * (*nht - 40);
	//respuesta
	cout << "el salario semanal es: " << *paga;
	_getch();
}