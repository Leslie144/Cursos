#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	//dato de entrada
	float *ht, *th;
	ht = new float;
	th = new float;
	//definimos y leemos
	cout << "ingrese el número de horas trabajadas: ";
	cin >> *ht;
	cout << "ingrese la tarifa horaria: ";
	cin >> *th;
	//dato de salida
	float *sb, *dESSALUD, *dAFP, *sn;
	sb = new float;
	dESSALUD = new float;
	dAFP = new float;
	sn = new float;
	//operaciones
	*sb = *ht*(*th);
	*dESSALUD = (9.0 / 100.0) * (*sb);
	*dAFP = (11.5 / 100.0)*(*sb);
	*sn = *sb - (*dESSALUD + *dAFP);
	cout << "el sueldo bruto es:S/. "<< *sb << endl;
	cout << "el descuento por ESSALUD es:S/. " << *dESSALUD << endl;
	cout << "el descuento por AFP es: S/. " << *dAFP << endl;
	cout << "el sueldo neto es:S/. " << *sn;
	_getch();
}