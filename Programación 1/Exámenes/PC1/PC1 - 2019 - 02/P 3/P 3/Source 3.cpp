#include<iostream>
using namespace std;

void entrada_de_dato(char *tipo_de_linea, int *num_de_tel) {
	cout << "Tipo de Linea (A: pre pago; B: post pago): ";
	_flushall();
	cin >> *tipo_de_linea;
	*tipo_de_linea = toupper(*tipo_de_linea);

	cout << "Nro de Telefonos a afiliar: "; cin >> *num_de_tel;
}

int main() {
	char *tipo_de_linea = new char;
	int *num_de_tel = new int;
	float *costo = new float;

	entrada_de_dato(tipo_de_linea, num_de_tel);

	*costo = (*tipo_de_linea == 'A' &&  *num_de_tel == 1)*0.19 +
		(*tipo_de_linea == 'A' && (*num_de_tel >= 2 && *num_de_tel <= 5))*0.15 +
		(*tipo_de_linea == 'A' &&  *num_de_tel >= 6)*0.13 +

		(*tipo_de_linea == 'B' && (*num_de_tel >= 1 && *num_de_tel <= 3))*0.15 +
		(*tipo_de_linea == 'B' &&  *num_de_tel == 4)*0.12 +
		(*tipo_de_linea == 'B' &&  *num_de_tel >= 5)*0.10;

	cout << "Costo por minuto: S/. " << *costo;
	cout << endl << endl;
	system("pause");
}