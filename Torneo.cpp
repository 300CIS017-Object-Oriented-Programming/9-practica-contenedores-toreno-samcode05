#include "Torneo.h"

Torneo::~Torneo() {
    for (auto& par : videojuegosDisponibles) delete par.second;
    for (auto& par : jugadoresRegistrados) delete par.second;
}

void Torneo::registrarVideojuego(string codigo, string nombre, string genero, int dificultad) {
    if (videojuegosDisponibles.count(codigo)) {
        cout << "⚠️ El videojuego con código " << codigo << " ya está registrado." << endl;
        return;
    }
    videojuegosDisponibles[codigo] = new Videojuego(codigo, nombre, genero, dificultad);
    cout << "✅ Videojuego registrado con éxito." << endl;
}

void Torneo::registrarJugador(string nickname, int nivel) {
    if (jugadoresRegistrados.count(nickname)) {
        cout << "⚠️ El jugador " << nickname << " ya está registrado." << endl;
        return;
    }
    jugadoresRegistrados[nickname] = new Jugador(nickname, nivel);
    cout << "✅ Jugador registrado con éxito." << endl;
}

void Torneo::inscribirJugadorEnVideojuego(string nickname, string codigoJuego) {
    if (!jugadoresRegistrados.count(nickname)) {
        cout << "❌ Error: El jugador no existe." << endl;
        return;
    }
    if (!videojuegosDisponibles.count(codigoJuego)) {
        cout << "❌ Error: El videojuego no está registrado." << endl;
        return;
    }
    Jugador* jugador = jugadoresRegistrados[nickname];
    Videojuego* juego = videojuegosDisponibles[codigoJuego];

    if (jugador->estaInscritoEn(codigoJuego)) {
        cout << "⚠️ El jugador ya está inscrito en este videojuego." << endl;
        return;
    }

    jugador->inscribirEnVideojuego(juego);
    cout << "✅ Inscripción exitosa." << endl;
}

void Torneo::mostrarVideojuegosDeJugador(string nickname) const {
    if (!jugadoresRegistrados.count(nickname)) {
        cout << "❌ Error: Jugador no encontrado." << endl;
        return;
    }
    jugadoresRegistrados.at(nickname)->mostrar();
}
