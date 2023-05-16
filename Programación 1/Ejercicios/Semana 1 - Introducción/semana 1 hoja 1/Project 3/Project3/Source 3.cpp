#include<iostream>
#include<conio.h>
using namespace std;
//funcion principal
int main() {
	//definimos variables entrada
	float *cm, *ce, *cev;
	cm = new float;
	ce = new float;
	cev = new float;
	//mostramos y leemos 
	cout << "ingrese capital michaela:";
	cin >> *cm;
	cout << "ingrese capital efrain:";
	cin >> *ce;
	cout << "ingrese capital even:";
	cin >> *cev;
	//definimos variables salida
	float *ct, *pm, *pe, *pev;
	ct = new float;
	pm = new float;
	pe = new float;
	pev = new float;
	// operaciones
	*ct = *cm + (*ce) + *cev;
	*pm = (*cm * 100) / (*ct);
	*pe = (*ce * 100) / (*ct);
	*pev = (*cev * 100) / (*ct);
	//respuesta
	cout << "el capital total es:" << *ct <<endl;
	cout << "el porcentaje de michaela:" << *pm << "%" <<endl;
	cout << "el porcentaje de efrain:" << *pe << "%" <<endl;
	cout << "el porcentaje de even:" << *pev << "%";
	_getch();
}