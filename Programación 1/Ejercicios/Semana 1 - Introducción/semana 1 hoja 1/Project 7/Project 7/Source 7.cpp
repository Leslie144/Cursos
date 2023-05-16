#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	//definimos variables entrada
	float *ht, *th;
	ht = new float;
	th = new float;
	//mostramos y leemos 
	cout << "ingrese horas trabajadas: ";
	cin >> *ht;
	cout << "ingrese tarifa horaria: ";
	cin >> *th;
	//definimos variables salida
	float *sba, *sn, *sbr;
	sba = new float;
	sn = new float;
	sbr = new float;
	// operaciones
	*sba = (*ht*(*th));
	*sbr = *sba + ((18.0/100.0)*(*sba));
	*sn = *sbr - ((12.0/100.0)*(*sbr));
	//respuesta
	cout << "el sueldo basico es: S/." << *sba << endl;
    cout << "el sueldo bruto es: S/." << *sbr << endl;
	cout << "el sueldo neto es: S/." << *sn;
	_getch();
}
