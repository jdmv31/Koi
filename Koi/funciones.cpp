#include "funciones.h"
#include <iostream>
#include <cstdlib>
#include <string>


using namespace std;

nodo* arbol = nullptr;
juegos juego[CANT_JUEGOS];
int cola[CANT_JUEGOS];
int tope = -1;
bool aux = true;
int *ID = new int [10];

string GeneroAString(int genero){
    switch (genero) {
    case FPS: 
        return "FPS";
        break;
    case MOBA: 
        return "MOBA";
        break;
    case RPG: 
        return "RPG"; 
        break;
    case Accion: 
        return "Acción";
        break;
    case Aventura: 
        return "Aventura";
        break;
    case SurvivalHorror: 
        return "Survival Horror";
        break;
    case Plataformas: 
        return "Plataformas";
        break;
    case Roguelike: 
        return "Roguelike";
        break;
    case Estrategia: 
        return "Estrategia";
        break;
    case Carreras: 
        return "Carreras";
        break;
    case Peleas: 
        return "Peleas";
        break;
    case Sandbox: 
        return "Sandbox";
        break;
    case Shooter: 
        return "Shooter";
        break;
    case Indie: 
        return "Indie";
        break;
    case MundoAbierto: 
        return "Mundo Abierto";
        break;
    }
}

nodo* CrearNodo(int id, int indice) {
    nodo* nuevonodo = new nodo();
    nuevonodo->usuario.ID = id;

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

    srand(time(NULL));
    float aux, aux2;
    do {
        aux = rand() % 200 + 1;
        aux2 = rand() % 200 + 1;
        if (aux > aux2)
            juego[n].precio = aux / aux2;
    } while (aux < aux2);

    juego[n].ID = n + 1;
    juego[n].peso = rand() % 50000 + 1;
    juego[n].visitado = false;
    juego[n].calidad = rand() % 5 + 1;

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
