#include<iostream>
#include<conio.h>
using namespace std;

void entrada_de_dato(float *sueldo_mensual, char *tipo_de_vivienda, char *credito, char *carga_familiar) {
	cout << "Sueldo mensual: S/. "; cin >> *sueldo_mensual;
	cout << "Tipo de vivienda (P: pariente; A: alquilada; M: propia): "; _flushall(); cin >> *tipo_de_vivienda; *tipo_de_vivienda = toupper(*tipo_de_vivienda);
	cout << "Tarjeta de credito (N: no tiene; S: si tiene): "; _flushall(); cin >> *credito; *credito = toupper(*credito);
	cout << "Tiene carag familiar(N: no tiene; S: si tiene): "; _flushall(); cin >> *carga_familiar; *carga_familiar = toupper(*carga_familiar);
}

int main() {
	float *sueldo_mensual = new float;
	char *tipo_de_vivienda = new char;
	char *credito = new char;
	char *carga_familiar = new char;

	int *puntos_sueldo = new int;
	int *puntos_vivienda = new int;
	int *puntos_credito = new int;
	int *puntos_carga = new int;
	int *suma_puntos = new int;

	entrada_de_dato(sueldo_mensual, tipo_de_vivienda, credito, carga_familiar);

	*puntos_sueldo = (*sueldo_mensual < 1500) * 6 +
		             (*sueldo_mensual >= 1500 && *sueldo_mensual <= 6000) * 12 +
		             (*sueldo_mensual > 6000) * 18;

	*puntos_vivienda = (*tipo_de_vivienda == 'P') * 2 +
		               (*tipo_de_vivienda == 'A') * 5 +
		               (*tipo_de_vivienda == 'M') * 10;

	*puntos_credito = (*credito == 'N') * 0 +
		              (*credito == 'S') * 6;

	*puntos_carga = (*carga_familiar == 'N') * 3 +
		            (*carga_familiar == 'S') * 6;

	*suma_puntos = *puntos_sueldo + *puntos_vivienda + *puntos_credito + *puntos_carga;

	cout << endl;
	cout << "Puntaje obtenido: " << *suma_puntos << endl;
	cout << "Se le otorga el prestamo (0: No, 1: Si): ";
	cout << (int)((*suma_puntos > 20) * 1 +
		          (*suma_puntos <= 20) * 0);
	_getch();
}