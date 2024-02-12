#include "Veterinario.h"

// Constructor por defecto
Veterinario::Veterinario() {
    nombre = "";
    aniosExperiencia = 0;
}

// Constructor con parámetros
Veterinario::Veterinario(std::string nombre, int aniosExperiencia) {
    this->nombre = nombre;
    this->aniosExperiencia = aniosExperiencia;
}

// Destructor
Veterinario::~Veterinario() {
    // No se requiere implementación específica para el destructor en este caso
}

// Métodos de acceso para el atributo nombre
std::string Veterinario::getNombre() {
    return nombre;
}

void Veterinario::setNombre(std::string nombre) {
    this->nombre = nombre;
}

// Métodos de acceso para el atributo aniosExperiencia
int Veterinario::getAniosExperiencia() {
    return aniosExperiencia;
}

void Veterinario::setAniosExperiencia(int aniosExperiencia) {
    this->aniosExperiencia = aniosExperiencia;
}
