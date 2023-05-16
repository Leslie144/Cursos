#include<iostream>
#include<conio.h>
using namespace std;

char tipo_de_cliente(char *tipo_cliente) {
	do {
		cout << "Tipo de cliente: "; cin >> *tipo_cliente;
		*tipo_cliente = toupper(*tipo_cliente);
	} while (!(*tipo_cliente == 'N' || *tipo_cliente == 'J' || *tipo_cliente == 'F'));

	return *tipo_cliente;
}

char tipo_de_publicidad(char *tipo_orden) {
	do {
		cout << "Tipo de publicidad: "; cin >> *tipo_orden;
		*tipo_orden = toupper(*tipo_orden);
	} while (!(*tipo_orden == 'P' || *tipo_orden == 'V'));

	return *tipo_orden;
}

char horario(char *turno) {
	do {
		cout << "Turno: "; cin >> *turno;
		*turno = toupper(*turno);
	} while (!(*turno == 'M' || *turno == 'T' || *turno == 'N'));
	return *turno;
}

int cantidad_de_publicidad(int *cantidad) {
	do {
		cout << "Cantidad: "; cin >> *cantidad;
		cout << endl;
	} while (!(*cantidad >= 1 && *cantidad <= 10));
	return *cantidad;
}

void reporte(char *cliente, char *orden, char *turno, int *cantidad) {
	int contnatu = 0, contjur = 0, contma = 0, contar = 0, contno = 0, contpau = 0, contlocu = 0;
	int suma_pauta = 0, suma_locucion = 0;

	do {
		*cliente = tipo_de_cliente(cliente);
		if (*cliente == 'f' || *cliente == 'F') {
			break;
		}
		else {
			*orden = tipo_de_publicidad(orden);
			*turno = horario(turno);
			*cantidad = cantidad_de_publicidad(cantidad);
			


			if (*cliente == 'N') {
				contnatu++;
			}
			if (*cliente == 'J') {
				contjur++;
			}

			if (*turno == 'M') {
				contma++;
			}
			if (*turno == 'T') {
				contar++;
			}
			if (*turno == 'N') {
				contno++;
			}

			if (*orden == 'P') {
				contpau++;
				suma_pauta = (suma_pauta + *cantidad) / contpau;
			}
			if (*orden == 'V') {
				contlocu++;
				suma_locucion = (suma_locucion + *cantidad) / contlocu;
			}

		}
	} while (!(*cliente == 'f' || *cliente == 'F'));

	if (*cliente == 'f' || *cliente == 'F') {
		cout << endl << "Los resultados son: " << endl;
		cout << "______________________" << endl;
		cout << "Tipo de cliente Natural: " << contnatu << endl;
		cout << "Tipo de cliente Jurídico: " << contjur << endl << endl;
		cout << "Ordenes de publicidad registradas en la maniana: " << contma << endl;
		cout << "Ordenes de publicidad registradas en la tarde: " << contar << endl;
		cout << "Ordenes de publicidad registradas en la noche: " << contno << endl;
		if (contma >= contar && contma >= contno) {
			cout << "El horario donde se registran mas ordenes de publicidad: Maniana" << endl << endl;
		}
		else if (contar >= contno && contar >= contma) {
			cout << "El horario donde se registran mas ordenes de publicidad: Tarde" << endl << endl;
		}
		else if (contno >= contma && contno >= contar) {
			cout << "El horario donde se registran mas ordenes de publicidad: Noche" << endl << endl;
		}
		
		cout << "La cantidad promedio por pauta publicitaria grabada: " << suma_pauta << endl;
		cout << "La cantidad promedio por locucion en vivo: " << suma_locucion << endl;
	}
}

int main() {
	char *cliente = new char;
	char *orden = new char;
	char *hora = new char;
	int *cantidad = new int;

	reporte(cliente, orden, hora, cantidad);
	_getch();
}