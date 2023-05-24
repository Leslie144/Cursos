#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int *a, *b, *c, *l;
	a = new int;
	b = new int;
	c = new int;
	cout << "\n ingrese lado A:";
	cin >> *a;
	cout << "\n ingrese lado B:";
	cin >> *b;
	cout << "\n ingrese lado C:";
	cin >> *c;
	//CONDICION
	if (*a + *b<*c || *a + *c<*b || *b + *c<*a)
		cout << "\n No forman un triangulo";
	else
	{
		if (*a == *b&&*a == *c&&*b == *c) {
			cout << "equilatero: V" << endl;
			cout << "isosceles: F" << endl;
			cout << "escaleno: F" << endl;
		}
		else
		{
			if (*a == *b || *a == *c || *b == *c) {
				cout << "equilatero: F" << endl;
				cout << "isosceles: V" << endl;
				cout << "escaleno: F" << endl;
			}
			else
			{
				cout << "equilatero: F" << endl;
				cout << "isosceles: F" << endl;
				cout << "escaleno: V" << endl;
			}
		}
	}
	_getch();
}