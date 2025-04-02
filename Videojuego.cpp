#include "Videojuego.h"

Videojuego::Videojuego(string cod, string nom, string gen, int dificultad)
    : codigo(cod), nombre(nom), genero(gen), nivelDificultad(dificultad) {}

void Videojuego::mostrar() const {
    cout << "🎮 Videojuego: " << nombre << " | Género: " << genero
         << " | Dificultad: " << nivelDificultad << endl;
}

string Videojuego::getCodigo() const {
    return codigo;
}
