#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	char *zona = new char;
	int *numero_entradas = new int;
	char *socio = new char;
	

	cout << "Ingrese zona elegida (Vip, Platea, Popular): "; cin >> *zona;
	*zona = toupper(*zona);
	while (!(*zona == 'V' || *zona == 'P' || *zona == 'E')) {
		cout << "Ingrese zona elegida (Vip, Platea, Popular): "; cin >> *zona;
		*zona = toupper(*zona);
	}

	cout << "Ingrese numero de entradas: "; cin >> *numero_entradas;
	

	cout << "Es socio de la U: "; cin >> *socio;
	*socio = toupper(*socio);
	while (!(*socio == 'S' || *socio == 'N' )) {
		cout << "Es socio de la U: "; cin >> *socio;
		*socio = toupper(*socio);
	}

	

	float *monto_pagar = new float;

	switch (*zona){
	case 'V':
		switch (*socio){
		case 'S':
			if (*numero_entradas > 3 && *numero_entradas < 6) {
				*monto_pagar = (350 - (350 * 0.05)) + (350 - (350 * 0.08));
			}
			if (*numero_entradas > 7 && *numero_entradas < 9) {
				*monto_pagar = (350 - (350 * 0.075)) + (350 - (350 * 0.08));
			}
			if (*numero_entradas > 9) {
				*monto_pagar = (350 - (350 * 0.1)) + (350 - (350 * 0.08));
			}
			cout << "El monto a pagar: S/. " << *monto_pagar*(*numero_entradas);
		    break;
		case 'N':
			if (*numero_entradas > 3 && *numero_entradas < 6) {
				*monto_pagar = (350 - (350 * 0.05)) ;
			}
			if (*numero_entradas > 7 && *numero_entradas < 9) {
				*monto_pagar = (350 - (350 * 0.075)) ;
			}
			if (*numero_entradas > 9) {
				*monto_pagar = (350 - (350 * 0.1));
			}
			cout << "El monto a pagar: S/. " << *monto_pagar*(*numero_entradas);
			break;
		default:
			break;
		}
		break;
	case 'P':
		switch (*socio) {
		case 'S':
			if (*numero_entradas > 3 && *numero_entradas < 6) {
				*monto_pagar = (130 - (130 * 0.05)) + (130 - (130 * 0.08));
			}
			if (*numero_entradas > 7 && *numero_entradas < 9) {
				*monto_pagar = (130 - (130 * 0.075)) + (130 - (130 * 0.08));
			}
			if (*numero_entradas > 9) {
				*monto_pagar = (130 - (130 * 0.1)) + (130 - (130 * 0.08));
			}
			cout << "El monto a pagar: S/. " << *monto_pagar*(*numero_entradas);
			break;
		case 'N':
			if (*numero_entradas > 3 && *numero_entradas < 6) {
				*monto_pagar = (130 - (130 * 0.05));
			}
			if (*numero_entradas > 7 && *numero_entradas < 9) {
				*monto_pagar = (130 - (130 * 0.075));
			}
			if (*numero_entradas > 9) {
				*monto_pagar = (130 - (130 * 0.1));
			}
			cout << "El monto a pagar: S/. " << *monto_pagar*(*numero_entradas);
			break;
		default:
			break;
		}
		break;
	case 'E':
		switch (*socio) {
		case 'S':
			if (*numero_entradas > 3 && *numero_entradas < 6) {
				*monto_pagar = (50 - (50 * 0.05)) + (50 - (50 * 0.08));
			}
			if (*numero_entradas > 7 && *numero_entradas < 9) {
				*monto_pagar = (50 - (50 * 0.075)) + (50 - (50 * 0.08));
			}
			if (*numero_entradas > 9) {
				*monto_pagar = (50 - (50 * 0.1)) + (50 - (130 * 0.08));
			}
			cout << "El monto a pagar: S/. " << *monto_pagar*(*numero_entradas);
			break;
		case 'N':
			if (*numero_entradas > 3 && *numero_entradas < 6) {
				*monto_pagar = (50 - (50 * 0.05));
			}
			if (*numero_entradas > 7 && *numero_entradas < 9) {
				*monto_pagar = (50 - (50 * 0.075));
			}
			if (*numero_entradas > 9) {
				*monto_pagar = (50 - (50 * 0.1));
			}
			cout << "El monto a pagar: S/. " << *monto_pagar*(*numero_entradas);
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
	
	_getch();
}