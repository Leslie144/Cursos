#include<iostream>
using namespace std;

float potencia(float exp, float lado) {
	float exponencial = 1;

	for (int i = 1; i <= exp; i++) {
		exponencial = exponencial*lado;
	}
	return exponencial;
}

void calculo_areas(float *lado, float *altura, float *base) {
	
	float areabase, arealateral, areatotal, volumen;

	cout << "Area base: " << (areabase = (6 * (potencia(2, *lado))*(sqrt(3))) / 4) << endl;
	cout << "Area lateral: " << (arealateral = 6 * *base* *altura) << endl;
	cout << "Area total: " << (areatotal = 2 * areabase + arealateral) << endl;
	cout << "Volumen: " << (volumen = areabase* *altura);

}

int main() {
	float *lado = new float;
	float *altura = new float;
	float *base = new float;

	do {
		cout << "Ingrese lado: "; cin >> *lado;
	} while (!(*lado >= 0));

	do {
		cout << "Ingrese altura: "; cin >> *altura;
	} while (!(*altura >= 0));

	do {
		cout << "Ingrese base: "; cin >> *base;
	} while (!(*base >= 0));

	calculo_areas(lado, altura, base);

	cout << endl;
	system("pause");
}
