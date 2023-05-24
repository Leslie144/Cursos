#include<iostream>
#include<conio.h>
using namespace std;
//validamos sexo
char valida_sexo(char *sexo) {
	cout << "ingrese sexo: "; cin >> *sexo;
	*sexo = toupper(*sexo);  //minuscula a mayuscula
	while (!(*sexo == 'M' || *sexo == 'F')) {
		cout << "ingrese sexo: "; cin >> *sexo;
		*sexo = toupper(*sexo);  //minuscula a mayuscula
	}
	return *sexo;
}
int main() {
	char *sexo = new char;
	int *edad = new int;
	//variables adicionales
	int *pagara = new int;
	
	//llamamos a la funcion
	*sexo = valida_sexo(sexo);
	cout << "ingrese la edad: "; cin >> *edad;

	if (*sexo == 'F' && *edad < 25) {
		*pagara = 1000;
	}else if (*sexo == 'F' && *edad > 25)
		*pagara = 700;
	if (*sexo == 'M' && *edad < 21) {
		*pagara = 800;
	}else if (*sexo == 'M' && *edad > 21)
		*pagara = 500;
	cout << "el pagp es: " << *pagara;
	_getch();
}