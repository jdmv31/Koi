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
	Carreras,
	Peleas,
	Sandbox,
	Shooter,
	Indie,
	MundoAbierto
};

struct juegos {
	string nombre;
	string publisher;
	string descripcion;
	int peso;
	short precio;
	short calidad;
	short ID;
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
	short ID;
	nodo2* lista; // josue: lista simple que va a contener los juegos preferidos de cada usuario
};

struct nodo {
	perfil usuario;
	nodo* izq;
	nodo* der;
};

struct nodo3 {
	int dato;
	nodo3* siguiente;
};

extern nodo *arbol;
extern juegos juego[CANT_JUEGOS];
extern int *ID;
extern bool aux;
extern nodo2* heap;
extern std::string generos[14];
extern std::string username;
extern nodo3* lista_aux;
extern nodo3* heap_aux;
extern int cola[CANT_JUEGOS];
extern int global;
extern int final;
extern int indices;

void PreCargarJuegos(int n);
void GenerarArbol(nodo*& arbol);
nodo* CrearNodo(int id, int indice);
void InsertarNodo(nodo*& arbol, int id, int indice);
bool IDUnica(int n, int id);
std::string GeneroAString(int genero);
std::string GenerosString(Genero generos[]);
nodo2* NuevoJuego(juegos juego);
int BuscarJuego(std::string nombrejuego);
std::string PublisherFavorito(void);
std::string HallarPublisher(string* nombres, int cant);
void QuickSort(juegos vec[], int inicio, int fin, string publisherFav);
void LiberarMemoria(nodo*& arbol);
int CantidadPublisher(std::string nombre);
int CantidadEtiquetas(std::string nombre, int elemento);
bool PublisherRegistrado(std::string nombre, int cant);
bool GeneroComun(std::string nombre, int i);
bool GenerosFavoritos(int cant, std::string nombre);
bool Busqueda(nodo* temp, std::string nombre);
void CrearNodoAux(int dato);
bool NodoRegistrado(int dato);
bool RegistradoEnHistorial(int dato);
void Encolar(int dato);