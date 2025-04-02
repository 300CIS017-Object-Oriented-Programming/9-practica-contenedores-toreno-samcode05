cmake_minimum_required(VERSION 3.30)
project(SISTEMA_EASPORTS)

set(CMAKE_CXX_STANDARD 20)

add_executable(SISTEMA_EASPORTS main.cpp Jugador.cpp Jugador.h Videojuego.cpp Videojuego.h Torneo.cpp Torneo.h)
