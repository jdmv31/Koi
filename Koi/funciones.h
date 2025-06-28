#pragma once
#include <string>
using namespace std;

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
	string nombre;
	string publisher;
	float precio;
	float peso;
	bool visitado;
	int calidad;
	Genero generos[4];
};

struct nodo2 {
	juegos dato;
	nodo2* siguiente;
};

struct perfil {
	string nombre;
	string apellido;
	string username;
	string password;
	int ID;
	nodo2* lista; // josue: lista simple que va a contener los juegos preferidos de cada usuario
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
extern nodo2* heap;

void PreCargarJuegos(int n);
void GenerarArbol(nodo*& arbol);
nodo* CrearNodo(int id, int indice);
void InsertarNodo(nodo*& arbol, int id, int indice);
bool IDUnica(int n, int id);
std::string GeneroAString(int genero);
std::string GenerosString(Genero generos[]);
nodo2* NuevoJuego(juegos juego);
int BuscarJuego(std::string nombrejuego);
