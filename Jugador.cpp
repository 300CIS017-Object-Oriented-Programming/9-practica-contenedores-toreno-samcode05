#include "Jugador.h"

Jugador::Jugador(string nick, int nivel) : nickname(nick), nivelRanking(nivel) {}

void Jugador::mostrar() const {
    cout << "👾 Jugador: " << nickname << " | Nivel Ranking: " << nivelRanking << endl;
    if (videojuegosInscritos.empty()) {
        cout << "   ❌ No está inscrito en videojuegos aún." << endl;
    } else {
        cout << "   🏆 Juegos inscritos:" << endl;
        for (const auto& juego : videojuegosInscritos) {
            juego->mostrar();
        }
    }
}

void Jugador::inscribirEnVideojuego(Videojuego* juego) {
    videojuegosInscritos.push_back(juego);
}

bool Jugador::estaInscritoEn(string codigoJuego) const {
    for (const auto& juego : videojuegosInscritos) {
        if (juego->getCodigo() == codigoJuego) {
            return true;
        }
    }
    return false;
}

float Jugador::calcularPromedioDificultad() const {
    if (videojuegosInscritos.empty()) return 0;

    int suma = 0;
    for (const auto& juego : videojuegosInscritos) {
        suma += juego->getCodigo().length();  // Suponiendo que la dificultad está en otro método
    }
    return static_cast<float>(suma) / videojuegosInscritos.size();
}

string Jugador::getNickname() const {
    return nickname;
}
