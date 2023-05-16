#include<iostream>
using namespace std;

void reporte(char *pregunta_1, char *pregunta_2, char *pregunta_3, char *pregunta_4) {
	int definitivamente_no_reciben_un_salario_adecuado = 0;
	int a_menudo_las_tareas_asignadas = 0;
	int si_reciben_un_salario_adecuado = 0;
	int si_estan_satisfechos = 0;
	int estan_pensando_dejar = 0;
	int probablemente_si_dejen_la_compania = 0;
	int contador_personas = 0;
	int contador_total = 0;
	do {
		contador_personas++;
		cout << "Empleado #" << contador_personas << endl;
		do {
			cout << "Recibe salario adecuado por su trabajo: "; cin >> *pregunta_1;
			*pregunta_1 = toupper(*pregunta_1);
		} while (!(*pregunta_1 == 'A' || *pregunta_1 == 'B' || *pregunta_1 == 'C' || *pregunta_1 == 'D' || *pregunta_1 == 'N'));
		if (*pregunta_1 == 'N') {
			break;
		}

		do {
			cout << "Las tareas asignadas ayudan a desarrollar su aspecto profesional: "; cin >> *pregunta_2;
			*pregunta_2 = toupper(*pregunta_2);
		}while (!(*pregunta_2 == 'A' || *pregunta_2 == 'B' || *pregunta_2 == 'C' || *pregunta_2 == 'D'));

		do {
			cout << "Esta satisecho con su empleo: "; cin >> *pregunta_3;
			*pregunta_3 = toupper(*pregunta_3);
		} while (!(*pregunta_3 == 'A' || *pregunta_3 == 'B' || *pregunta_3 == 'C' || *pregunta_3 == 'D'));

		do {
			cout << "Buscara un empleo fuera de la compania: "; cin >> *pregunta_4;
			*pregunta_4 = toupper(*pregunta_4);
		} while (!(*pregunta_4 == 'A' || *pregunta_4 == 'B' || *pregunta_4 == 'C' || *pregunta_4 == 'D' || *pregunta_4 == 'E'));

		cout << endl;
		if (*pregunta_1 == 'D') {
			definitivamente_no_reciben_un_salario_adecuado++;
		}
		if (*pregunta_2 == 'B') {
			a_menudo_las_tareas_asignadas++;
		}

		if (*pregunta_1 == 'B' && *pregunta_3 == 'B') {
			si_reciben_un_salario_adecuado++;
		}

		if (*pregunta_4 == 'C') {
			estan_pensando_dejar++;
		}
		if (*pregunta_4 == 'D') {
			probablemente_si_dejen_la_compania++;
		}

		contador_total++;
	} while (!(*pregunta_1 == 'N'));

	if (*pregunta_1 == 'N') {
		cout << endl;
		cout << "Los resulatdos son: " << endl;
		cout << "----------------------------------" << endl;
		cout << "Cantidad que indican que definitivamente no reciben un salario adecuado por su trabajo: " << definitivamente_no_reciben_un_salario_adecuado << endl;
		cout << "Porcentaje que a menudo las tareas asignadas ayudan a desarrollar su aspecto profesional: " << (a_menudo_las_tareas_asignadas*100.0 / (contador_total)) << endl;
		cout << "Cantidad que si reciben un salario adecuado y si estan satisfechos con su empleo: " << si_reciben_un_salario_adecuado << endl;
		cout << "Porcentaje que estan pensando dejar o que probablemente si dejen la compania: " << ((estan_pensando_dejar + probablemente_si_dejen_la_compania)*100.0 / (contador_total)) << endl;
	}
}

int main() {
	char *pregunta_1 = new char;
	char *pregunta_2 = new char;
	char *pregunta_3 = new char;
	char *pregunta_4 = new char;

	reporte(pregunta_1, pregunta_2, pregunta_3, pregunta_4);

	cout << endl;
	system("pause");
}