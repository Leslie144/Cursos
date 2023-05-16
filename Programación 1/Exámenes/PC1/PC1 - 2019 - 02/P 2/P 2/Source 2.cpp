#include<iostream>
using namespace std;

void entrada_de_dato(int *hora_1, int *minuto_1, int *segundo_1, int *hora_2, int *minuto_2, int *segundo_2) {
	cout << "Tiempo 1: " << endl;
	cout << "Horas: "; cin >> *hora_1;
	cout << "Minutos: "; cin >> *minuto_1;
	cout << "Segundos: "; cin >> *segundo_1;

	cout << endl;
	cout << "Tiempo 2: " << endl;
	cout << "Horas: "; cin >> *hora_2;
	cout << "Minutos: "; cin >> *minuto_2;
	cout << "Segundos: "; cin >> *segundo_2;

	cout << endl;
}

int main() {
	int *hora_1 = new  int;
	int *minuto_1 = new int;
	int *segundo_1 = new int;

	int *segundo_min_1 = new int;
	int *segundo_hor_1 = new int;
	int *suma_segundo_1 = new int;

	int *hora_2 = new  int;
	int *minuto_2 = new int;
	int *segundo_2 = new int;

	int *segundo_min_2 = new int;
	int *segundo_hor_2 = new int;
	int *suma_segundo_2 = new int;

	int *resta = new int;

	entrada_de_dato(hora_1, minuto_1, segundo_1, hora_2, minuto_2, segundo_2);

	*segundo_min_1 = *minuto_1 * 60;
	*segundo_hor_1 = *hora_1 * 3600;
	*suma_segundo_1 = *segundo_min_1 + *segundo_hor_1 + *segundo_1;

	*segundo_min_2 = *minuto_2 * 60;
	*segundo_hor_2 = *hora_2 * 3600;
	*suma_segundo_2 = *segundo_min_2 + *segundo_hor_2 + *segundo_2;

	//comprobando resultados
	//cout << *segundo_min_1 << endl << *segundo_hor_1 << endl << *segundo_1 << endl << endl;
	//cout << *segundo_min_2 << endl << *segundo_hor_2 << endl << *segundo_2 << endl << endl;

	*resta = (*suma_segundo_1 > *suma_segundo_2) * (*suma_segundo_1 - *suma_segundo_2) +
		(*suma_segundo_1 < *suma_segundo_2) * (*suma_segundo_2 - *suma_segundo_1) +
		(*suma_segundo_1 == *suma_segundo_2) * (*suma_segundo_1 - *suma_segundo_2);

	//comprobando resultados
	//cout << *resta << endl;

	int *nuevo_minuto = new int;
	int *nueva_hora = new int;
	int *nuevo_segundo = new int;

	*nueva_hora = (*resta / 60) / 60;
	*nuevo_minuto = (((*resta - (*nueva_hora * 3600)) / 60) > 60) * ((*resta - (*nueva_hora * 3600)) / 60) / 60 +
		(((*resta - (*nueva_hora * 3600)) / 60) <= 60) * ((*resta - (*nueva_hora * 3600)) / 60);

	*nuevo_segundo = ((*resta - ((*nueva_hora * 3600) + (*nuevo_minuto * 60))));

	//comprobando resultados
	//cout << *nueva_hora << endl << *nuevo_minuto << endl << *nuevo_segundo << endl;
	cout << "Tiempo de referencia: " << *nueva_hora << "H " << *nuevo_minuto << "M " << *nuevo_segundo << "S ";

	cout << endl << endl;
	system("pause");
}