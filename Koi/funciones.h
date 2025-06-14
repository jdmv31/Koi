#pragma once
#include <string>

const int CANT_JUEGOS = 50;

struct juegos {
	int ID;
	std::string nombre;
	std::string publisher;
	float precio;
	float peso;
	bool visitado;
};


struct perfil {
	std::string nombre;
	std::string apellido;
	std::string username;
	std::string password;
	int ID;
	int cant_juegos;
	juegos juegos[CANT_JUEGOS];
};

struct nodo {
	perfil usuario;
	nodo* izq;
	nodo* der;
};

extern nodo *arbol;
extern juegos juego[CANT_JUEGOS];
extern int cola[CANT_JUEGOS];
extern int tope;

void PreCargarJuegos(int n);