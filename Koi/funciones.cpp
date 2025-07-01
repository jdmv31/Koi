#include "funciones.h"
#include <iostream>
#include <cstdlib>
#include <string>


using namespace std;

nodo* arbol = nullptr;
juegos juego[CANT_JUEGOS];
bool aux = true;
int *ID = new int [10];
nodo2* heap = nullptr;


bool PublisherRegistrado(string nombre, int cant) {
    for (int i = 0; i < cant; i++) {
        if (nombre.compare(juego[i].publisher) == 0)
            return true;
    }
    
    return false;
}

int CantidadEtiquetas(string nombre, int elemento) {
    int acum = 0;
    int j = 0;

    for (int i = 0; i < CANT_JUEGOS; i++) {
        for (int j = 0; j < 4; j++) {
            if (juego[i].generos[j] == -1)
                break;
            else if (elemento == juego[i].generos[j])
                acum++;
        }
    }

    return acum;
}

int CantidadPublisher(string nombre) {
    int cont = 0;
    for (int i = 0; i < CANT_JUEGOS; i++) {
        if (juego[i].publisher == nombre)
            cont++;
    }

    return cont;
}

void LiberarMemoria(nodo*& arbol) {
    if (arbol == nullptr) {
        return;
    }

    LiberarMemoria(arbol->izq);
    LiberarMemoria(arbol->der);

    nodo2* actual = arbol->usuario.lista;
    while (actual != nullptr) {
        nodo2* siguiente = actual->siguiente;
        delete actual;               
        actual = siguiente; 
    }
    arbol->usuario.lista = nullptr;


    delete arbol;
    arbol = nullptr; 
}


bool compararJuegos(juegos& a,juegos& b,string publisherFav) {
    bool aEsFav = (a.publisher == publisherFav);
    bool bEsFav = (b.publisher == publisherFav);

    if (aEsFav && !bEsFav) return true;
    if (!aEsFav && bEsFav) return false;

    return a.nombre < b.nombre;
}

void QuickSort(juegos vec[], int inicio, int fin,string publisherFav) {
    if (inicio >= fin) return;

    int izq = inicio;
    int der = fin;
    juegos pivote = vec[(inicio + fin) / 2];

    while (izq <= der) {
        while (compararJuegos(vec[izq], pivote, publisherFav)) {
            izq++;
        }

        while (compararJuegos(pivote, vec[der], publisherFav)) {
            der--;
        }

        if (izq <= der) {
            swap(vec[izq], vec[der]);
            izq++;
            der--;
        }
    }

    if (inicio < der) {
        QuickSort(vec, inicio, der, publisherFav);
    }
    if (izq < fin) {
        QuickSort(vec, izq, fin, publisherFav);
    }
}

string HallarPublisher(string* nombres, int cant) {
    string fav, aux;
    int cont = 1, max = 0;

    for (int i = 0; i < cant - 1; i++) {
        aux = nombres[i];

        for (int j = i + 1; j < cant; j++) {
            if (aux.compare(nombres[j]) == 0) {
                cont++;
            }
        }

        if (i == 0) {
            max = cont;
            fav = aux;
        }
        else if (cont > max) {
            max = cont;
            fav = aux;
        }

        cont = 1;
    }

    return fav;
}

string PublisherFavorito(void){
    nodo2* aux = new nodo2();
    aux = arbol->usuario.lista;
    int cant = 0;

    while (aux != nullptr) {
        cant++;
        aux = aux->siguiente;
    }
    string* nombres = new string[cant];
    cant = 0;
    aux = arbol->usuario.lista;

    while (aux != nullptr) {
        nombres[cant] = aux->dato.publisher;
        cant++;
        aux = aux->siguiente;
    }

    string fav = HallarPublisher(nombres,cant);

    delete[] nombres;
    delete aux;
    nombres = nullptr;
    aux = nullptr;

    return fav;
}

int BuscarJuego(std::string nombrejuego) {
    string aux;
    for (int i = 0; i < CANT_JUEGOS; i++) {
        aux = juego[i].nombre;
        if (nombrejuego.compare(aux) == 0)
            return i;
    }
    return -1;
}

string GenerosString(Genero generos[]) {
    string resultado;
    for (int i = 0; i < 4; ++i) {
        if (generos[i] != -1) {
            if (!resultado.empty()) resultado += ", ";
            resultado += GeneroAString(generos[i]);
        }
    }
    return resultado;
}

string GeneroAString(int genero) {
    switch (genero) {
    case FPS: return "FPS";
    case MOBA: return "MOBA";
    case RPG: return "RPG";
    case Accion: return "Acción";
    case Aventura: return "Aventura";
    case SurvivalHorror: return "Survival Horror";
    case Plataformas: return "Plataformas";
    case Roguelike: return "Roguelike";
    case Carreras: return "Carreras";
    case Peleas: return "Peleas";
    case Sandbox: return "Sandbox";
    case Shooter: return "Shooter";
    case Indie: return "Indie";
    case MundoAbierto: return "Mundo Abierto";
    }
}

nodo2* NuevoJuego(juegos juego) {
    nodo2* nuevo = new nodo2();
    nuevo->dato = juego;
    nuevo->siguiente = heap;
    heap = nuevo;

    return nuevo;
}

nodo* CrearNodo(int id, int indice) {
    srand(time(NULL));
    nodo* nuevonodo = new nodo();
    nuevonodo->usuario.ID = id;
    int aux = 0, aux2 = 0;
    aux = rand() % 6 + 3; // josue: cada usuario precargado tendra entre 3 y 6 juegos favoritos tildados
    for (int i = 0; i < aux; i++) {
        aux2 = rand() % 50 + 1;
        aux2 -= 1;
        nuevonodo->usuario.lista = NuevoJuego(juego[aux2]);
    }
    heap = nullptr;


    switch (indice) {
    case 1:
        nuevonodo->usuario.nombre = "Ivan";
        nuevonodo->usuario.apellido = "Maidana";
        nuevonodo->usuario.username = "Sanguchito";
        nuevonodo->usuario.password = "Madonna33";
        break;
    case 2:
        nuevonodo->usuario.nombre = "Abigail";
        nuevonodo->usuario.apellido = "Alcala";
        nuevonodo->usuario.username = "Graftemon";
        nuevonodo->usuario.password = "Abigail12345";
        break;
    case 3:
        nuevonodo->usuario.nombre = "Sofia";
        nuevonodo->usuario.apellido = "Mendoza";
        nuevonodo->usuario.username = "Skyline";
        nuevonodo->usuario.password = "Sofi99";
        break;

    case 4:
        nuevonodo->usuario.nombre = "Benjamin";
        nuevonodo->usuario.apellido = "Lopez";
        nuevonodo->usuario.username = "BenchoStyle";
        nuevonodo->usuario.password = "Avila123";
        break;

    case 5:
        nuevonodo->usuario.nombre = "Camila";
        nuevonodo->usuario.apellido = "Veracierta";
        nuevonodo->usuario.username = "Sr Sot";
        nuevonodo->usuario.password = "Sodimac39";
        break;

    case 6:
        nuevonodo->usuario.nombre = "Valentina";
        nuevonodo->usuario.apellido = "Urdaneta";
        nuevonodo->usuario.username = "Pariah";
        nuevonodo->usuario.password = "Golf77$";
        break;

    case 7:
        nuevonodo->usuario.nombre = "Juan";
        nuevonodo->usuario.apellido = "Perez";
        nuevonodo->usuario.username = "Butanero";
        nuevonodo->usuario.password = "40minutos3r";
        break;

    case 8:
        nuevonodo->usuario.nombre = "Lucas";
        nuevonodo->usuario.apellido = "Zapata";
        nuevonodo->usuario.username = "karkreed";
        nuevonodo->usuario.password = "Obs50";
        break;

    case 9:
        nuevonodo->usuario.nombre = "Victor";
        nuevonodo->usuario.apellido = "Medina";
        nuevonodo->usuario.username = "Iowa3107";
        nuevonodo->usuario.password = "Macuin19";
        break;
    }

    nuevonodo->izq = nullptr;
    nuevonodo->der = nullptr;
    return nuevonodo;
}

bool IDUnica(int n, int id) {
    for (int i = 0; i < n; i++) {
        if (id == ID[i])
            return false;
    }
    return true;
}

void InsertarNodo(nodo*& arbol, int id, int indice) {
    if (arbol == nullptr) {
        arbol = CrearNodo(id,indice);
    }
    else {
        if (id > arbol->usuario.ID)
            InsertarNodo(arbol->der, id,indice);
        else
            InsertarNodo(arbol->izq, id,indice);
    }
}


void GenerarArbol(nodo*& arbol) {
    srand(time(NULL));
    int aux;

    for (int i = 1; i < 10; i++) {
        do {
            aux = rand() % 500 + 1;
        } while (!IDUnica(i, aux));

        ID[i] = aux;
        InsertarNodo(arbol, aux, i);
    }
}

void PreCargarJuegos(int n) {

    switch (n) {
    case 0:
        juego[n].nombre = "League of Legends";
        juego[n].publisher = "Riot Games";
        juego[n].generos[0] = MOBA;
        break;
    case 1:
        juego[n].nombre = "Valorant";
        juego[n].publisher = "Riot Games";
        juego[n].generos[0] = FPS;
        juego[n].generos[1] = Shooter;
        break;
    case 2:
        juego[n].nombre = "Balatro";
        juego[n].publisher = "PlayStack";
        juego[n].generos[0] = Roguelike;
        juego[n].generos[1] = Indie;
        break;
    case 3:
        juego[n].nombre = "Dress to Impress";
        juego[n].publisher = "Roblox";
        juego[n].generos[0] = Sandbox;
        break;
    case 4:
        juego[n].nombre = "Mario Kart";
        juego[n].publisher = "Nintendo";
        juego[n].generos[0] = Carreras;
        break;
    case 5:
        juego[n].nombre = "Ultrakill";
        juego[n].publisher = "New Blood Interactive";
        juego[n].generos[0] = FPS;
        juego[n].generos[1] = Shooter;
        juego[n].generos[2] = Indie;
        break;
    case 6:
        juego[n].nombre = "Left 4 Dead 2";
        juego[n].publisher = "Valve";
        juego[n].generos[0] = FPS;
        juego[n].generos[1] = Shooter;
        break;
    case 7:
        juego[n].nombre = "Terraria";
        juego[n].publisher = "Re-Logic";
        juego[n].generos[0] = Sandbox;
        juego[n].generos[1] = Aventura;
        break;
    case 8:
        juego[n].nombre = "Dark Souls";
        juego[n].publisher = "FromSoftware";
        juego[n].generos[0] = RPG;
        juego[n].generos[1] = Accion;
        break;
    case 9:
        juego[n].nombre = "The Binding of Isaac";
        juego[n].publisher = "Nicalis";
        juego[n].generos[0] = Roguelike;
        juego[n].generos[1] = Indie;
        break;
    case 10:
        juego[n].nombre = "Hollow Knight";
        juego[n].publisher = "Team Cherry";
        juego[n].generos[0] = Plataformas;
        juego[n].generos[1] = Aventura;
        juego[n].generos[2] = Indie;
        break;
    case 11:
        juego[n].nombre = "Cuphead";
        juego[n].publisher = "Studio MDHR";
        juego[n].generos[0] = Plataformas;
        juego[n].generos[1] = Indie;
        break;
    case 12:
        juego[n].nombre = "Celeste";
        juego[n].publisher = "Maddy Makes Games";
        juego[n].generos[0] = Plataformas;
        juego[n].generos[1] = Indie;
        break;
    case 13:
        juego[n].nombre = "Devil May Cry 5";
        juego[n].publisher = "Capcom";
        juego[n].generos[0] = Accion;
        break;
    case 14:
        juego[n].nombre = "Dark Souls 2";
        juego[n].publisher = "FromSoftware";
        juego[n].generos[0] = RPG;
        juego[n].generos[1] = Accion;
        break;
    case 15:
        juego[n].nombre = "Devil May Cry 3";
        juego[n].publisher = "Capcom";
        juego[n].generos[0] = Accion;
        break;
    case 16:
        juego[n].nombre = "Street Fighter VI";
        juego[n].publisher = "Capcom";
        juego[n].generos[0] = Peleas;
        break;
    case 17:
        juego[n].nombre = "Resident Evil 8";
        juego[n].publisher = "Capcom";
        juego[n].generos[0] = SurvivalHorror;
        break;
    case 18:
        juego[n].nombre = "DOOM";
        juego[n].publisher = "Bethesda";
        juego[n].generos[0] = FPS;
        juego[n].generos[1] = Shooter;
        break;
    case 19:
        juego[n].nombre = "DOOM Eternal";
        juego[n].publisher = "Bethesda";
        juego[n].generos[0] = FPS;
        juego[n].generos[1] = Shooter;
        break;
    case 20:
        juego[n].nombre = "Grand Theft Auto V";
        juego[n].publisher = "Rockstar Games";
        juego[n].generos[0] = MundoAbierto;
        juego[n].generos[1] = Accion;
        break;
    case 21:
        juego[n].nombre = "Grand Theft Auto San Andreas";
        juego[n].publisher = "Rockstar Games";
        juego[n].generos[0] = MundoAbierto;
        juego[n].generos[1] = Accion;
        break;
    case 22:
        juego[n].nombre = "FarCry 3";
        juego[n].publisher = "Ubisoft";
        juego[n].generos[0] = FPS;
        juego[n].generos[1] = MundoAbierto;
        break;
    case 23:
        juego[n].nombre = "The Elder Scrolls V: Skyrim";
        juego[n].publisher = "Bethesda";
        juego[n].generos[0] = RPG;
        juego[n].generos[1] = MundoAbierto;
        break;
    case 24:
        juego[n].nombre = "Fallout New Vegas";
        juego[n].publisher = "Bethesda";
        juego[n].generos[0] = RPG;
        juego[n].generos[1] = MundoAbierto;
        break;
    case 25:
        juego[n].nombre = "Fallout 3";
        juego[n].publisher = "Bethesda";
        juego[n].generos[0] = RPG;
        juego[n].generos[1] = MundoAbierto;
        break;
    case 26:
        juego[n].nombre = "Hades";
        juego[n].publisher = "SuperGiant Games";
        juego[n].generos[0] = Roguelike;
        juego[n].generos[1] = Accion;
        juego[n].generos[2] = Indie;
        break;
    case 27:
        juego[n].nombre = "Risk of Rain";
        juego[n].publisher = "Hopoo Games";
        juego[n].generos[0] = Roguelike;
        juego[n].generos[1] = Indie;
        break;
    case 28:
        juego[n].nombre = "Half-Life 2";
        juego[n].publisher = "Valve";
        juego[n].generos[0] = FPS;
        juego[n].generos[1] = Shooter;
        break;
    case 29:
        juego[n].nombre = "Hotline Miami";
        juego[n].publisher = "Devolver Digital";
        juego[n].generos[0] = Accion;
        juego[n].generos[1] = Indie;
        break;
    case 30:
        juego[n].nombre = "Hotline Miami 2";
        juego[n].publisher = "Devolver Digital";
        juego[n].generos[0] = Accion;
        juego[n].generos[1] = Indie;
        break;
    case 31:
        juego[n].nombre = "Undertale";
        juego[n].publisher = "Toby Fox";
        juego[n].generos[0] = RPG;
        juego[n].generos[1] = Indie;
        break;
    case 32:
        juego[n].nombre = "Need for Speed - Most Wanted";
        juego[n].publisher = "Electronic Arts";
        juego[n].generos[0] = Carreras;
        break;
    case 33:
        juego[n].nombre = "The Witcher 3: Wild Hunt";
        juego[n].publisher = "WB Games";
        juego[n].generos[0] = RPG;
        juego[n].generos[1] = MundoAbierto;
        break;
    case 34:
        juego[n].nombre = "Subnautica";
        juego[n].publisher = "Unknown Worlds";
        juego[n].generos[0] = Aventura;
        juego[n].generos[1] = SurvivalHorror;
        break;
    case 35:
        juego[n].nombre = "Geometry Dash";
        juego[n].publisher = "RobTop Games";
        juego[n].generos[0] = Plataformas;
        juego[n].generos[1] = Indie;
        break;
    case 36:
        juego[n].nombre = "Subnautica: Below Zero";
        juego[n].publisher = "Unknown Worlds";
        juego[n].generos[0] = Aventura;
        juego[n].generos[1] = SurvivalHorror;
        break;
    case 37:
        juego[n].nombre = "Resident Evil 4";
        juego[n].publisher = "Capcom";
        juego[n].generos[0] = SurvivalHorror;
        juego[n].generos[1] = Accion;
        break;
    case 38:
        juego[n].nombre = "Nier:Automata";
        juego[n].publisher = "Square Enix";
        juego[n].generos[0] = RPG;
        juego[n].generos[1] = Accion;
        break;
    case 39:
        juego[n].nombre = "Tekken 8";
        juego[n].publisher = "Konami";
        juego[n].generos[0] = Peleas;
        break;
    case 40:
        juego[n].nombre = "Metal Gear Solid V";
        juego[n].publisher = "Konami";
        juego[n].generos[0] = Accion;
        juego[n].generos[1] = MundoAbierto;
        break;
    case 41:
        juego[n].nombre = "Outlast";
        juego[n].publisher = "Red Barrels";
        juego[n].generos[0] = SurvivalHorror;
        break;
    case 42:
        juego[n].nombre = "Outlast 2";
        juego[n].publisher = "Red Barrels";
        juego[n].generos[0] = SurvivalHorror;
        break;
    case 43:
        juego[n].nombre = "Hitman: Absolution";
        juego[n].publisher = "Square Enix";
        juego[n].generos[0] = Accion;
        break;
    case 44:
        juego[n].nombre = "Dying Light";
        juego[n].publisher = "WB Games";
        juego[n].generos[0] = FPS;
        juego[n].generos[1] = SurvivalHorror;
        break;
    case 45:
        juego[n].nombre = "Dying Light 2";
        juego[n].publisher = "WB Games";
        juego[n].generos[0] = FPS;
        juego[n].generos[1] = SurvivalHorror;
        break;
    case 46:
        juego[n].nombre = "BioShock";
        juego[n].publisher = "2K Games";
        juego[n].generos[0] = FPS;
        juego[n].generos[1] = Shooter;
        break;
    case 47:
        juego[n].nombre = "Bayonetta";
        juego[n].publisher = "Sega";
        juego[n].generos[0] = Accion;
        break;
    case 48:
        juego[n].nombre = "Dead Space";
        juego[n].publisher = "Electronic Arts";
        juego[n].generos[0] = SurvivalHorror;
        break;
    case 49:
        juego[n].nombre = "Wolfenstein: The New Order";
        juego[n].publisher = "Bethesda";
        juego[n].generos[0] = FPS;
        juego[n].generos[1] = Shooter;
        break;
    }

}


 