#include<iostream>
#include<conio.h>
using namespace std;
//validamo el peso
float valida_peso(float *peso) {
	cout << "ingrese el peso: "; cin >> *peso;
	while (!(*peso > 0)) {
		cout << "ingrese el peso: "; cin >> *peso;
	}
	return *peso;
}
//validamos la altura
float valida_altura(float *altura) {
	cout << "ingrese  la altura: "; cin >> *altura;
	while (!(*altura > 0)) {
		cout << "ingrese la altura: "; cin >> *altura;
	}
	return *altura;
}
//funcion principal
int main() {
	//dato de entrada
	float *altura = new float;
	float *peso = new float;

	int *imc = new int;
	int *r = new int;
	//llamamos a la funcion
	*peso = valida_peso(peso);
	*altura = valida_altura(altura);
	//operacion
	*imc = *peso / *altura;
	cout << "El IMC es: " << *imc << endl;
	if (*imc <= 15) {
		cout << "Criterio de ingreso en hospital" << endl;
	}
	else if (*imc > 15 && *imc <= 20) {
		cout << "Bajo peso" << endl;
	}
	else if (*imc > 20 && *imc <= 30) {
		cout << "Peso normal (saludable)" << endl;
	}
	else if (*imc > 30 && *imc <= 40) {
		cout << "Sobrepeso (obesidad de grado I)" << endl;
	}
	else if (*imc > 40) {
		cout << "Sobrepeso (obesidad de grado II)" << endl;
	}

	
	_getch();
}