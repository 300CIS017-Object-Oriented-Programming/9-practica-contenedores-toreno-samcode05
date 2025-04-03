#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H

#include <iostream>
using namespace std;

class Videojuego {
private:
    string codigo;
    string nombre;
    string genero;
    int nivelDificultad;

public:
    Videojuego(string cod, string nom, string gen, int dificultad);
    void mostrar() const;
    string getCodigo() const;
};

#endif
