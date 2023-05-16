#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	//dato de entrada
	int *num, *ultimo_digito, *penultimo_digito, *antepenultimo_digito;
	num = new int;
	ultimo_digito = new int;
	penultimo_digito = new int;
	antepenultimo_digito = new int;
	//definimos y leemos
	cout << "ingrese número: ";
	cin >> *num;
	if (*num >= 100 && *num <= 999)
	{
		cout << "es correcto";
		*ultimo_digito = *num % 10;
		*num = *num / 10;
		*penultimo_digito = *num % 10;
		*num = *num / 10;
		*antepenultimo_digito = *num % 10;
		cout << "el numero invertido es: " << *ultimo_digito << *penultimo_digito << *antepenultimo_digito;
	}
	else {
		cout << "error = -1";
	}
	_getch();
}