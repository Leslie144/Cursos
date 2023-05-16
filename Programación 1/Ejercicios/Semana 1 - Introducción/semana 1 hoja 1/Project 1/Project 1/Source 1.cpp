#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	//definimos variables entrada
	int *A, *B, *C;
	A = new int;
	B = new int;
	C = new int;
	//mostramos y leemos
	cout << "ingrese Altura: "; cin >> *A;
	cout << "ingrese Base: "; cin >> *B;
	cout << "ingrese C: "; cin >> *C;
	//definimos variables salida
	int *areatriangulo, *arearectangulo, *areatotal;
	areatriangulo = new int;
	arearectangulo = new int;
	areatotal = new int;
	// operaciones
	*areatriangulo = ((*A - *C)*(*B)) / 2;
	*arearectangulo = (*C)*(*B);
	*areatotal = *areatriangulo + *arearectangulo;
	//respuesta
	cout << "el area total es: " << *areatotal;
	_getch();
}