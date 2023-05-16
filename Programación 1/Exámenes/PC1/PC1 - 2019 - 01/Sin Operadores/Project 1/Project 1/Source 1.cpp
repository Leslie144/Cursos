#include<iostream>
#include<conio.h>
using namespace std;

int main() {
	int *anios_de_servicio = new int;
	float *salario_actual = new float;
	float *aumento = new float;
	float *salario_final = new float;

	cout << "Anios de servicio: "; cin >> *anios_de_servicio;
	cout << "Salario actual: S/. "; cin >> *salario_actual;

	*aumento = (*anios_de_servicio < 3) * 0 +
		       (*anios_de_servicio >= 3 && *anios_de_servicio <= 6)*(*salario_actual*0.04) +
		       (*anios_de_servicio >= 7 && *anios_de_servicio <= 10)*(*salario_actual*0.06) +
		       (*anios_de_servicio > 10) * 0.1;

	*salario_final = *salario_actual + (*aumento);

	cout << endl;
	cout << "Aumento que recibira: " << *aumento << endl;
	cout << "Salario inal: S/. " << *salario_final;

	_getch();
}