#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
using namespace System;

int Genera_matriz[30][30] = {
	{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
	{ 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0 },
    { 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0 },
	{ 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0 },
	{ 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0 },
	{ 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0 },
	{ 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0 },
	{ 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0 },
	{ 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0 },
	{ 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0 },
	{ 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0 },
	{ 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0 },
	{ 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0 },
	{ 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0 },
	{ 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0 },
	{ 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0 },
	{ 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0 },
	{ 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0 },
	{ 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0 },
	{ 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0 },
	{ 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0 },
	{ 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0 },
	{ 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0 },
	{ 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0 },
	{ 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0 },
	{ 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0 },
	{ 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0 },
	{ 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0 },
	{ 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0 },
	{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
};
void Muestra_matriz() {
	for (int x = 0; x < 30; x++) {
		for (int y = 0; y < 30; y++) {
			System::Console::SetCursorPosition(x, y);
			System::Console::ForegroundColor = System::ConsoleColor::Blue;
			if (Genera_matriz[y][x] == 0) {
				cout << (char)219;
			}
		}
	}
}


struct Movimiento {
	int x, y, dx, dy;
	char c;
};

void Iniciar_jugador(Movimiento*jugador) {
	jugador->x = 15;
	jugador->y = 28;
	jugador->dx = 1;
	jugador->dy = 0;
	jugador->c = (char)201;
}
void Dibujar_jugador(Movimiento*jugador) {
	System::Console::SetCursorPosition(jugador->x, jugador->y);
	cout << jugador->c;
}
void Borrar_jugador(Movimiento*jugador) {
	System::Console::SetCursorPosition(jugador->x, jugador->y);
	cout << " ";
}

void Iniciar_Balas(Movimiento*balas, Movimiento*jugador, int *num_balas) {
	if (*num_balas < 100) {
		balas[*num_balas].c = '.';
		balas[*num_balas].x = jugador->x;
		balas[*num_balas].y = jugador->y;
		balas[*num_balas].dx = 0;
		balas[*num_balas].dy = -1;
		*num_balas = *num_balas + 1;
	}
}

void Borrar_Balas(Movimiento* balas, int *num_balas){
	Movimiento *balas_auxiliar = new Movimiento[100];
	int j = 0;
	for (int i = 0; i < *num_balas; i++) {
		if (balas[i].y != 1)	{
			balas_auxiliar[j] = balas[i];
			j++;
		}
	}
	*num_balas = j; //ACTUALIZO EL NRO DE BALAS QUE NO FUERON DESCARTADAS
	balas = balas_auxiliar; //ACTUALIZO EL ARREGLO DE BALAS
}
void Mover_Balas(Movimiento* balas, int *num_balas) {
	for (int i = 0; i < *num_balas; i++){
		System::Console::SetCursorPosition(balas[i].x, balas[i].y);
		cout << " ";
	}
	for (int i = 0; i < *num_balas; i++) {
		if (balas[i].y + balas[i].dy < 1) 		balas[i].y = 1;
		else
			balas[i].y = balas[i].y + balas[i].dy;

	}
	Borrar_Balas(balas, num_balas);
	for (int i = 0; i < *num_balas; i++) {
		System::Console::ForegroundColor = ConsoleColor::Cyan;
		System::Console::SetCursorPosition(balas[i].x, balas[i].y);
		cout << balas[i].c;
	}
}


void Iniciar_enemigo(Movimiento*enemigos, int *cantidad_de_enemigos) {
	for (int i = 0; i < *cantidad_de_enemigos; i++) {
		enemigos[i].x = 1 + rand() % (29 - 1);
		enemigos[i].y = 1 + rand() % (10 - 1);
		enemigos[i].dx = 1;
		enemigos[i].dy = 1;
		enemigos[i].c = (char)205;
	}
}
void Dibujar_enemigo(Movimiento*enemigos, int *cantidad_de_enemigos) {
	for (int i = 0; i < *cantidad_de_enemigos; i++) {
		System::Console::SetCursorPosition(enemigos[i].x, enemigos[i].y);
		cout << enemigos[i].c;
	}
}
void Borrar_enemigo(Movimiento*enemigos, int *cantidad_de_enemigos) {
	for (int i = 0; i < *cantidad_de_enemigos; i++) {
		System::Console::SetCursorPosition(enemigos[i].x, enemigos[i].y);
		cout << " ";
	}
}
void Mover_enemigo(Movimiento*enemigos, int *cantidad_de_enemigos) {
	Borrar_enemigo(enemigos, cantidad_de_enemigos);
	for (int i = 0; i < *cantidad_de_enemigos; i++) {
		if (enemigos[i].y + enemigos[i].dy < 28) {
			enemigos[i].y += enemigos[i].dy;
		}
		else {
			enemigos[i].y = 1;
		}
	}
	Dibujar_enemigo(enemigos, cantidad_de_enemigos);
}

void Colision(Movimiento* balas, int *num_balas, Movimiento* enemigo) {
	for (int i = 0; i < *num_balas; i++)	{
		if (balas[i].x == enemigo[i].x && balas[i].y == enemigo[i].y)
			//system("cls");
			cout << "Ganaste";
	}
}

int main() {
	System::Console::SetWindowSize(30, 30);

	int *cantidad_de_enemigos = new int;
	do {
		cout << "Ingrese cantidad de enemigos: "; cin >> *cantidad_de_enemigos;
	} while (!(*cantidad_de_enemigos >= 1));

	system("cls");

	Movimiento*jugador = new Movimiento;
	const int max_balas = 100;  		int *num_balas = new int;
	Movimiento* balas = new Movimiento[max_balas]; 	*num_balas = 0;
	Movimiento*enemigos = new Movimiento[*cantidad_de_enemigos];


	Muestra_matriz();

	Iniciar_enemigo(enemigos, cantidad_de_enemigos);
	Iniciar_jugador(jugador);
	while (true) {
		Dibujar_jugador(jugador);
		Mover_enemigo(enemigos, cantidad_de_enemigos);

		if (_kbhit()) {
			char tecla = _getch();
			switch (tecla){
			case 75:
				Borrar_jugador(jugador);
				if (Genera_matriz[jugador->y][jugador->x - 1] == 1) {
					jugador->x--;
				}
				break;

			case 77:
				Borrar_jugador(jugador);
				if (Genera_matriz[jugador->y][jugador->x + 1] == 1) {
					jugador->x++;
				}
				break;

			case 32:
				
				Iniciar_Balas(balas, jugador, num_balas);

				break;

			default:
				break;
			}
			Mover_Balas(balas, num_balas);
			Colision(balas, num_balas, enemigos);
		}
		Sleep(100);
	}

	_getch();
}