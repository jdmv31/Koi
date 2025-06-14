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
	int juegos[CANT_JUEGOS]; // esto va a almacenar las ID de cada juego
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
extern int *ID;
extern bool aux;

void PreCargarJuegos(int n);
void GenerarJuegos(nodo*& nuevonodo, int n);
void GenerarArbol(nodo*& arbol);
nodo* CrearNodo(int id, int indice);
void InsertarNodo(nodo*& arbol, int id, int indice);
bool IDUnica(int n, int id);