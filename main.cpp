#include <iostream>
#include "Torneo.h"

using namespace std;

void mostrarMenu() {
    cout << "\n🏆 MENU DEL TORNEO BATTLE ARENA 🏆\n";
    cout << "1. Registrar un videojuego\n";
    cout << "2. Registrar un jugador\n";
    cout << "3. Inscribir jugador a un videojuego\n";
    cout << "4. Mostrar los videojuegos de un jugador\n";
    cout << "5. Salir\n";
    cout << "Elige una opción: ";
}

int main() {
    Torneo torneo;
    int opcion;

    do {
        mostrarMenu();
        cin >> opcion;
        cin.ignore(); // Evita problemas con getline

        if (opcion == 1) {
            string codigo, nombre, genero;
            int dificultad;

            cout << "Código del videojuego: ";
            getline(cin, codigo);
            cout << "Nombre del videojuego: ";
            getline(cin, nombre);
            cout << "Género del videojuego: ";
            getline(cin, genero);
            cout << "Nivel de dificultad (1-5): ";
            cin >> dificultad;

            torneo.registrarVideojuego(codigo, nombre, genero, dificultad);
        }
        else if (opcion == 2) {
            string nickname;
            int nivelRanking;

            cout << "Nickname del jugador: ";
            getline(cin, nickname);
            cout << "Nivel de ranking (1-100): ";
            cin >> nivelRanking;

            torneo.registrarJugador(nickname, nivelRanking);
        }
        else if (opcion == 3) {
            string nickname, codigoVideojuego;

            cout << "Nickname del jugador: ";
            getline(cin, nickname);
            cout << "Código del videojuego: ";
            getline(cin, codigoVideojuego);

            torneo.inscribirJugadorEnVideojuego(nickname, codigoVideojuego);
        }
        else if (opcion == 4) {
            string nickname;

            cout << "Nickname del jugador: ";
            getline(cin, nickname);

            torneo.mostrarVideojuegosDeJugador(nickname);
        }
        else if (opcion == 5) {
            cout << "Saliendo del programa... ¡Hasta luego! 🎮\n";
        }
        else {
            cout << "❌ Opción no válida. Intenta de nuevo.\n";
        }

    } while (opcion != 5);

    return 0;
}
