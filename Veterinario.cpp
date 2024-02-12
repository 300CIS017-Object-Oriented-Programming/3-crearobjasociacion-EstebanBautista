#include "Veterinario.h"

// Constructor por defecto
Veterinario::Veterinario() {
    nombre = "";
    añosExperiencia = 0;
}

// Constructor con parámetros
Veterinario::Veterinario(std::string nombre, int añosExperiencia) {
    this->nombre = nombre;
    this->añosExperiencia = añosExperiencia;
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

// Métodos de acceso para el atributo añosExperiencia
int Veterinario::getAñosExperiencia() {
    return añosExperiencia;
}

void Veterinario::setAñosExperiencia(int añosExperiencia) {
    this->añosExperiencia = añosExperiencia;
}
