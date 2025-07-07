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
string generos[14];
string username;
nodo3* lista_aux = nullptr;
nodo3* heap_aux = nullptr;
int cola[CANT_JUEGOS];
int frente = 0;
int final = -1;

bool NodoRegistrado(int dato) {
    nodo3* actual = heap_aux;
    while (actual != nullptr) {
        if (actual->dato == dato)
            return true;
        actual = actual->siguiente;
    }
    return false;
}

void CrearNodoAux(int dato) {
    nodo3* nuevo = new nodo3;
    nuevo->dato = dato;
    nuevo->siguiente = heap_aux;
    heap_aux = nuevo;
}

bool Busqueda(nodo* temp, std::string nombre) {
    if (temp == nullptr)
        return false;
    else {
        nodo2* aux = temp->usuario.lista;
        while (aux != nullptr) {
            for (int j = 0; j < 4; j++) {
                if (aux->dato.generos[j] == -1)
                    break;

                if (nombre == GeneroAString(aux->dato.generos[j]))
                    return true;
            }
            aux = aux->siguiente;
        }
        Busqueda(temp->izq,nombre);
        Busqueda(temp->der,nombre);
    }
}

bool GenerosFavoritos(int cant, std::string nombre) {
    for (int i = 0; i < cant; i++) {
        if (generos[i] == nombre)
            return true;
    }
    return false;
}

bool GeneroComun(std::string nombre, int i) {
    for (int j = 0; j < 4; j++) {
        if (juego[i].generos[j] == -1)
            break;
        string genero = GeneroAString(juego[i].generos[j]);

        if (nombre == genero) {
            return true;
        }
    }
    return false;
}

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

    nodo3* actual2 = heap_aux;
    while (actual2 != nullptr) {
        nodo3* siguiente = actual2->siguiente;
        delete actual2;
        actual2 = siguiente;
    }
    delete arbol;
    arbol = nullptr; 
    heap_aux = nullptr;
    lista_aux = nullptr;
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
    nodo* nuevonodo = new nodo();
    nuevonodo->usuario.ID = id;
    int aux = 0, aux2 = 0;
    aux = rand() % 4 + 1; // josue: cada usuario precargado tendra entre 4 y 1 juegos favoritos tildados
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
        juego[n].descripcion = "Un MOBA competitivo donde equipos de campeones se enfrentan en intensas batallas estratégicas.";
        break;
    case 1:
        juego[n].nombre = "Valorant";
        juego[n].publisher = "Riot Games";
        juego[n].generos[0] = FPS;
        juego[n].generos[1] = Shooter;
        juego[n].descripcion = "FPS táctico con personajes con habilidades únicas y modos de juego por rondas.";
        break;
    case 2:
        juego[n].nombre = "Balatro";
        juego[n].publisher = "PlayStack";
        juego[n].generos[0] = Roguelike;
        juego[n].generos[1] = Indie;
        juego[n].descripcion = "Un adictivo juego de cartas con mecánicas roguelike y estrategia improvisada.";
        break;
    case 3:
        juego[n].nombre = "Dress to Impress";
        juego[n].publisher = "Roblox";
        juego[n].generos[0] = Sandbox;
        juego[n].descripcion = "Juego de moda y estilo en Roblox donde los jugadores compiten por el mejor outfit.";
        break;
    case 4:
        juego[n].nombre = "Mario Kart";
        juego[n].publisher = "Nintendo";
        juego[n].generos[0] = Carreras;
        juego[n].descripcion = "Las clásicas carreras de karts con personajes de Mario y objetos caóticos.";
        break;
    case 5:
        juego[n].nombre = "Ultrakill";
        juego[n].publisher = "New Blood Interactive";
        juego[n].generos[0] = FPS;
        juego[n].generos[1] = Shooter;
        juego[n].generos[2] = Indie;
        juego[n].descripcion = "FPS frenético inspirado en los shooters clásicos, con movimiento rápido y violencia extrema.";
        break;
    case 6:
        juego[n].nombre = "Left 4 Dead 2";
        juego[n].publisher = "Valve";
        juego[n].generos[0] = FPS;
        juego[n].generos[1] = Shooter;
        juego[n].descripcion = "Cooperativo donde un equipo sobrevive a hordas de zombis en escenarios apocalípticos.";
        break;
    case 7:
        juego[n].nombre = "Terraria";
        juego[n].publisher = "Re-Logic";
        juego[n].generos[0] = Sandbox;
        juego[n].generos[1] = Aventura;
        juego[n].descripcion = "Aventura 2D de exploración, construcción y supervivencia en mundos generados proceduralmente.";
        break;
    case 8:
        juego[n].nombre = "Dark Souls";
        juego[n].publisher = "FromSoftware";
        juego[n].generos[0] = RPG;
        juego[n].generos[1] = Accion;
        juego[n].descripcion = "RPG de acción desafiante con combate estratégico y un mundo interconectado oscuro.";
        break;
    case 9:
        juego[n].nombre = "The Binding of Isaac";
        juego[n].publisher = "Nicalis";
        juego[n].generos[0] = Roguelike;
        juego[n].generos[1] = Indie;
        juego[n].descripcion = "Roguelike de mazmorras con temática oscura y combates basados en lágrimas.";
        break;
    case 10:
        juego[n].nombre = "Hollow Knight";
        juego[n].publisher = "Team Cherry";
        juego[n].generos[0] = Plataformas;
        juego[n].generos[1] = Aventura;
        juego[n].generos[2] = Indie;
        juego[n].descripcion = "Metroidvania con un mundo hermoso, combate desafiante y una historia misteriosa.";
        break;
    case 11:
        juego[n].nombre = "Cuphead";
        juego[n].publisher = "Studio MDHR";
        juego[n].generos[0] = Plataformas;
        juego[n].generos[1] = Indie;
        juego[n].descripcion = "Juego de run 'n' gun con estilo visual de dibujos animados de los años 30 y jefes difíciles.";
        break;
    case 12:
        juego[n].nombre = "Celeste";
        juego[n].publisher = "Maddy Makes Games";
        juego[n].generos[0] = Plataformas;
        juego[n].generos[1] = Indie;
        juego[n].descripcion = "Plataformas preciso con una narrativa emotiva sobre superar obstáculos personales.";
        break;
    case 13:
        juego[n].nombre = "Devil May Cry 5";
        juego[n].publisher = "Capcom";
        juego[n].generos[0] = Accion;
        juego[n].descripcion = "Acción espectacular con combos estilo hack 'n' slash y personajes carismáticos.";
        break;
    case 14:
        juego[n].nombre = "Dark Souls 2";
        juego[n].publisher = "FromSoftware";
        juego[n].generos[0] = RPG;
        juego[n].generos[1] = Accion;
        juego[n].descripcion = "Secuela del RPG de acción difícil, con nuevas mecánicas y un mundo expansivo.";
        break;
    case 15:
        juego[n].nombre = "Devil May Cry 3";
        juego[n].publisher = "Capcom";
        juego[n].generos[0] = Accion;
        juego[n].descripcion = "Clásico de acción con Dante, combos espectaculares y un sistema de estilos de combate.";
        break;
    case 16:
        juego[n].nombre = "Street Fighter VI";
        juego[n].publisher = "Capcom";
        juego[n].generos[0] = Peleas;
        juego[n].descripcion = "Lo último en la saga de lucha competitiva con gráficos modernos y nuevos personajes.";
        break;
    case 17:
        juego[n].nombre = "Resident Evil 8";
        juego[n].publisher = "Capcom";
        juego[n].generos[0] = SurvivalHorror;
        juego[n].descripcion = "Terror en primera persona con Ethan Winters en un pueblo plagado de horrores sobrenaturales.";
        break;
    case 18:
        juego[n].nombre = "DOOM";
        juego[n].publisher = "Bethesda";
        juego[n].generos[0] = FPS;
        juego[n].generos[1] = Shooter;
        juego[n].descripcion = "Reinicio de la saga DOOM con combate rápido, demonios y heavy metal.";
        break;
    case 19:
        juego[n].nombre = "DOOM Eternal";
        juego[n].publisher = "Bethesda";
        juego[n].generos[0] = FPS;
        juego[n].generos[1] = Shooter;
        juego[n].descripcion = "Secuela intensa con más movilidad, armas y masacres demoníacas.";
        break;
    case 20:
        juego[n].nombre = "Grand Theft Auto V";
        juego[n].publisher = "Rockstar Games";
        juego[n].generos[0] = MundoAbierto;
        juego[n].generos[1] = Accion;
        juego[n].descripcion = "Crimen, caos y vida virtual en Los Santos, con historia de tres protagonistas.";
        break;
    case 21:
        juego[n].nombre = "Grand Theft Auto San Andreas";
        juego[n].publisher = "Rockstar Games";
        juego[n].generos[0] = MundoAbierto;
        juego[n].generos[1] = Accion;
        juego[n].descripcion = "Clásico de mundo abierto con CJ y la cultura gangster de los 90.";
        break;
    case 22:
        juego[n].nombre = "FarCry 3";
        juego[n].publisher = "Ubisoft";
        juego[n].generos[0] = FPS;
        juego[n].generos[1] = MundoAbierto;
        juego[n].descripcion = "Supervivencia en una isla tropical llena de piratas y locura.";
        break;
    case 23:
        juego[n].nombre = "The Elder Scrolls V: Skyrim";
        juego[n].publisher = "Bethesda";
        juego[n].generos[0] = RPG;
        juego[n].generos[1] = MundoAbierto;
        juego[n].descripcion = "RPG épico con dragones, magia y libertad absoluta en un mundo vasto.";
        break;
    case 24:
        juego[n].nombre = "Fallout New Vegas";
        juego[n].publisher = "Bethesda";
        juego[n].generos[0] = RPG;
        juego[n].generos[1] = MundoAbierto;
        juego[n].descripcion = "RPG postapocalíptico con decisiones morales, facciones y un desierto peligroso.";
        break;
    case 25:
        juego[n].nombre = "Fallout 3";
        juego[n].publisher = "Bethesda";
        juego[n].generos[0] = RPG;
        juego[n].generos[1] = MundoAbierto;
        juego[n].descripcion = "Explora las ruinas de Washington DC en un mundo nuclear lleno de peligros.";
        break;
    case 26:
        juego[n].nombre = "Hades";
        juego[n].publisher = "SuperGiant Games";
        juego[n].generos[0] = Roguelike;
        juego[n].generos[1] = Accion;
        juego[n].generos[2] = Indie;
        juego[n].descripcion = "Roguelike de acción donde Zagreus escapa del Inframundo con ayuda de los dioses.";
        break;
    case 27:
        juego[n].nombre = "Risk of Rain";
        juego[n].publisher = "Hopoo Games";
        juego[n].generos[0] = Roguelike;
        juego[n].generos[1] = Indie;
        juego[n].descripcion = "Supervivencia roguelike contra oleadas de enemigos en un planeta alienígena.";
        break;
    case 28:
        juego[n].nombre = "Half-Life 2";
        juego[n].publisher = "Valve";
        juego[n].generos[0] = FPS;
        juego[n].generos[1] = Shooter;
        juego[n].descripcion = "Revolucionario FPS con física avanzada y una historia de resistencia contra un imperio alienígena.";
        break;
    case 29:
        juego[n].nombre = "Hotline Miami";
        juego[n].publisher = "Devolver Digital";
        juego[n].generos[0] = Accion;
        juego[n].generos[1] = Indie;
        juego[n].descripcion = "Violento juego de acción top-down con estética retro y una banda sonora psicodélica.";
        break;
    case 30:
        juego[n].nombre = "Hotline Miami 2";
        juego[n].publisher = "Devolver Digital";
        juego[n].generos[0] = Accion;
        juego[n].generos[1] = Indie;
        juego[n].descripcion = "Secuela más sangrienta con múltiples protagonistas y niveles desafiantes.";
        break;
    case 31:
        juego[n].nombre = "Undertale";
        juego[n].publisher = "Toby Fox";
        juego[n].generos[0] = RPG;
        juego[n].generos[1] = Indie;
        juego[n].descripcion = "RPG único donde puedes elegir matar o perdonar, con un humor memorable.";
        break;
    case 32:
        juego[n].nombre = "Need for Speed - Most Wanted";
        juego[n].publisher = "Electronic Arts";
        juego[n].generos[0] = Carreras;
        juego[n].descripcion = "Carreras ilegales, persecuciones policiales y autos de ensueño.";
        break;
    case 33:
        juego[n].nombre = "The Witcher 3: Wild Hunt";
        juego[n].publisher = "WB Games";
        juego[n].generos[0] = RPG;
        juego[n].generos[1] = MundoAbierto;
        juego[n].descripcion = "RPG de mundo abierto con Geralt de Rivia, decisiones impactantes y monstruos.";
        break;
    case 34:
        juego[n].nombre = "Subnautica";
        juego[n].publisher = "Unknown Worlds";
        juego[n].generos[0] = Aventura;
        juego[n].generos[1] = SurvivalHorror;
        juego[n].descripcion = "Supervivencia submarina en un planeta alienígena lleno de criaturas marinas.";
        break;
    case 35:
        juego[n].nombre = "Geometry Dash";
        juego[n].publisher = "RobTop Games";
        juego[n].generos[0] = Plataformas;
        juego[n].generos[1] = Indie;
        juego[n].descripcion = "Plataformas rítmico con niveles difíciles y música electrónica.";
        break;
    case 36:
        juego[n].nombre = "Subnautica: Below Zero";
        juego[n].publisher = "Unknown Worlds";
        juego[n].generos[0] = Aventura;
        juego[n].generos[1] = SurvivalHorror;
        juego[n].descripcion = "Secuela en un entorno ártico con nueva historia y criaturas.";
        break;
    case 37:
        juego[n].nombre = "Resident Evil 4";
        juego[n].publisher = "Capcom";
        juego[n].generos[0] = SurvivalHorror;
        juego[n].generos[1] = Accion;
        juego[n].descripcion = "Reinventó el survival horror con acción intensa y una campaña memorable.";
        break;
    case 38:
        juego[n].nombre = "Nier:Automata";
        juego[n].publisher = "Square Enix";
        juego[n].generos[0] = RPG;
        juego[n].generos[1] = Accion;
        juego[n].descripcion = "Acción filosófica con androides, múltiples finales y una banda sonora épica.";
        break;
    case 39:
        juego[n].nombre = "Tekken 8";
        juego[n].publisher = "Konami";
        juego[n].generos[0] = Peleas;
        juego[n].descripcion = "Nueva entrega de la saga de lucha con gráficos next-gen y combate visceral.";
        break;
    case 40:
        juego[n].nombre = "Metal Gear Solid V";
        juego[n].publisher = "Konami";
        juego[n].generos[0] = Accion;
        juego[n].generos[1] = MundoAbierto;
        juego[n].descripcion = "Stealth en mundo abierto con Snake, libertad táctica y una historia compleja.";
        break;
    case 41:
        juego[n].nombre = "Outlast";
        juego[n].publisher = "Red Barrels";
        juego[n].generos[0] = SurvivalHorror;
        juego[n].descripcion = "Terror en primera persona donde solo puedes correr o esconderte.";
        break;
    case 42:
        juego[n].nombre = "Outlast 2";
        juego[n].publisher = "Red Barrels";
        juego[n].generos[0] = SurvivalHorror;
        juego[n].descripcion = "Secuela en un pueblo cultista con horrores psicológicos y persecuciones.";
        break;
    case 43:
        juego[n].nombre = "Hitman: Absolution";
        juego[n].publisher = "Square Enix";
        juego[n].generos[0] = Accion;
        juego[n].descripcion = "Sigilo y asesinatos creativos con el Agente 47 en misiones cinematográficas.";
        break;
    case 44:
        juego[n].nombre = "Dying Light";
        juego[n].publisher = "WB Games";
        juego[n].generos[0] = FPS;
        juego[n].generos[1] = SurvivalHorror;
        juego[n].descripcion = "Supervivencia con parkour en una ciudad infectada por zombis que se vuelven más peligrosos de noche.";
        break;
    case 45:
        juego[n].nombre = "Dying Light 2";
        juego[n].publisher = "WB Games";
        juego[n].generos[0] = FPS;
        juego[n].generos[1] = SurvivalHorror;
        juego[n].descripcion = "Secuela con elecciones que afectan el mundo, más parkour y combate brutal.";
        break;
    case 46:
        juego[n].nombre = "BioShock";
        juego[n].publisher = "2K Games";
        juego[n].generos[0] = FPS;
        juego[n].generos[1] = Shooter;
        juego[n].descripcion = "FPS narrativo en Rapture, una ciudad submarina distópica con poderes genéticos.";
        break;
    case 47:
        juego[n].nombre = "Bayonetta";
        juego[n].publisher = "Sega";
        juego[n].generos[0] = Accion;
        juego[n].descripcion = "Acción exagerada con combos espectaculares y una protagonista poderosa.";
        break;
    case 48:
        juego[n].nombre = "Dead Space";
        juego[n].publisher = "Electronic Arts";
        juego[n].generos[0] = SurvivalHorror;
        juego[n].descripcion = "Terror espacial con Isaac Clarke luchando contra necromorfos en una nave abandonada.";
        break;
    case 49:
        juego[n].nombre = "Wolfenstein: The New Order";
        juego[n].publisher = "Bethesda";
        juego[n].generos[0] = FPS;
        juego[n].generos[1] = Shooter;
        juego[n].descripcion = "Shooter alternativo donde los nazis ganaron la WWII y tú debes iniciar la resistencia.";
        break;
    }
}


 