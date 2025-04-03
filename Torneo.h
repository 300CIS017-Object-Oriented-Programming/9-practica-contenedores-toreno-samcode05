#ifndef TORNEO_H
#define TORNEO_H

#include <iostream>
#include <map>
#include "Jugador.h"

class Torneo {
private:
    map<string, Videojuego*> videojuegosDisponibles;
    map<string, Jugador*> jugadoresRegistrados;

public:
    ~Torneo();
    void registrarVideojuego(string codigo, string nombre, string genero, int dificultad);
    void registrarJugador(string nickname, int nivel);
    void inscribirJugadorEnVideojuego(string nickname, string codigoJuego);
    void mostrarVideojuegosDeJugador(string nickname) const;
};

#endif
