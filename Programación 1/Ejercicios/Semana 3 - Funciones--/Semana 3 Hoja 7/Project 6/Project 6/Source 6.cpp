#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	long long *codigo = new long long;

	cout << "Ingrese codigo del empleado: "; cin >> *codigo;

	char *NN = new char;
	char *PP = new char;
	char *AA = new char;
	int *HH = new int;
	int *MM = new int;
	int *SS = new int;
	int *opcion = new int;

	*NN = *codigo / 10000000000;
	*PP = (*codigo / 100000000) % 100;
	*AA = (*codigo / 1000000) % 100;

	*HH = ((*codigo / 10000) % 100);
	*MM = (*codigo / 100) % 100;
	*SS = *codigo % 100;
	
	cout << endl;
	cout << "Hora de entrada: " << *HH << endl;
	cout << "Minuto de entrada: " << *MM << endl;
	cout << "Segundo de entrada: " << *SS << endl;
	cout << "Su nombre empieza con la letra: " << *NN << endl;
	cout << "Su apellido paterno inicia con la letra: " << *PP << endl;
	cout << "Su apellido materno inicia con la letra: " << *AA << endl;

	if (*NN > 9 && *MM > 0 && *SS > 0) {
		*opcion = 1;
	}
	else {
		*opcion = 2;
	}
	cout << "Llego tarde (1:Si; 2:No): " << *opcion;
	_getch();
}