#ifndef JUGADOR_H
#define JUGADOR_H

#include <iostream>
#include <vector>
#include "Videojuego.h"

using namespace std;

class Jugador {
private:
    string nickname;
    int nivelRanking;
    vector<Videojuego*> videojuegosInscritos;

public:
    Jugador(string nick, int nivel);
    void mostrar() const;
    void inscribirEnVideojuego(Videojuego* juego);
    bool estaInscritoEn(string codigoJuego) const;
    float calcularPromedioDificultad() const;
    string getNickname() const;
};

#endif
