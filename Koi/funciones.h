#pragma once
#include <string>

const int CANT_JUEGOS = 50;

enum Genero{
	FPS,
	MOBA,
	RPG,
	Accion,
	Aventura,
	SurvivalHorror,
	Plataformas,
	Roguelike,
	Estrategia,
	Carreras,
	Peleas,
	Sandbox,
	Shooter,
	Indie,
	MundoAbierto
};

struct juegos {
	int ID;
	std::string nombre;
	std::string publisher;
	float precio;
	float peso;
	bool visitado;
	int calidad;
	Genero generos[4];
};


struct perfil {
	std::string nombre;
	std::string apellido;
	std::string username;
	std::string password;
	int ID;
};

struct nodo2 {
	juegos dato;
	nodo2* siguiente;
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