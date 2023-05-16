#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	int *anios = new int;
	float *salario_actual = new float;
	float *aumento = new float;
	float *salario_final = new float;
	cout << "Ingrese años de servicio: "; cin >> *anios;
	cout << "Ingrese salario actual: "; cin >> *salario_actual;
	if (*anios <= 3) {
		*aumento = 0;
		*salario_final = *salario_actual;
	}
	else if (*anios > 3 && *anios <= 6) {
		*aumento = *salario_actual*0.04;
		*salario_final = *salario_actual + *aumento;
	}
	else if (*anios > 6 && *anios <= 10) {
		*aumento = *salario_actual*0.06;
		*salario_final = *salario_actual + *aumento;
	}
	else if (*anios > 10) {
		*aumento = *salario_actual*0.1;
		*salario_final = *salario_actual + *aumento;
	}
	cout << "El aumento es: S/. " << *aumento << endl;
	cout << "El salario final es: S/. " << *salario_final;
	_getch();
}