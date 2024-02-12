#include "Raza.h"

// Constructor por defecto
Raza::Raza() {
    nombre = "";
    paisOrigen = "";
}

// Constructor con parámetros
Raza::Raza(std::string nombre, std::string paisOrigen) {
    this->nombre = nombre;
    this->paisOrigen = paisOrigen;
}

// Métodos de acceso para el atributo nombre
std::string Raza::getNombre() {
    return nombre;
}

void Raza::setNombre(std::string nombre) {
    this->nombre = nombre;
}

// Métodos de acceso para el atributo paisOrigen
std::string Raza::getPaisOrigen() {
    return paisOrigen;
}

void Raza::setPaisOrigen(std::string paisOrigen) {
    this->paisOrigen = paisOrigen;
}
