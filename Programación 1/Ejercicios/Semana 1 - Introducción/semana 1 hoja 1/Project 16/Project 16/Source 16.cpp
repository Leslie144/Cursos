#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	//dato de entrada
	int *num, *num2, *n, *ultimo_digito, *penultimo_digito, *antepenultimo_digito;
	num = new int;
	num2 = new int;
	n = new int;
	ultimo_digito = new int;
	penultimo_digito = new int;
	antepenultimo_digito = new int;
	//definimos y leemos
	cout << "ingrese número: ";
	cin >> *num;
	*num2 = *num;
	if (*num >= 100 && *num <= 999)
	{
		*ultimo_digito = *num2 % 10;
		*num2 = *num2 / 10;
		*penultimo_digito = *num2 % 10;
		*num2 = *num2 / 10;
		*antepenultimo_digito = *num2 % 10;

		*n = (*ultimo_digito * 100) + (*penultimo_digito * 10) + (*antepenultimo_digito * 1);
		if (*num == *n) {
			cout << "S";
		}
		else {
			cout << "N";
		}
	}
	else {
		cout << "error ";
	}
	_getch();
}