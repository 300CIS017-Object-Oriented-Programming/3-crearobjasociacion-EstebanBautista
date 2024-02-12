#include "Perro.h"
#include <iostream>


// Constructor por defecto
Perro::Perro() {
    this->edad = 0;
    this->raza = "";
    this->tamanio = "";
    this->color = "";
    this->pPropietario = nullptr;
    this->pVeterinario = nullptr;
    this->pRaza = nullptr;
}

// Constructor con parámetros utilizando lista inicializadora
Perro::Perro(std::string nombre, int edad, std::string raza, std::string color, std::string tamanio)
    : nombre(nombre), edad(edad), raza(raza), color(color), tamanio(tamanio), pPropietario(nullptr) {
}

void Perro::ladrar() {
    std::cout << "Guau Guau" << std::endl;
}

void Perro::agregarPropietario(std::string nombre, std::string docIdentidad) {
    this->pPropietario = new Propietario(nombre, docIdentidad);
}

void Perro::setPropietario(Propietario *pPropietario) {
    this->pPropietario = pPropietario;
}
Propietario *Perro::getPropietario() {
    return this->pPropietario;
}

int Perro::getEdad() {
    return edad;
}

void Perro::setEdad(int edad) {
    this->edad = edad;
}

std::string Perro::getRaza() {
    return raza;
}

void Perro::setRaza(std::string raza) {
    this->raza = raza;
}

std::string Perro::getTamanio() {
    return tamanio;
}

void Perro::setTamanio(std::string tamanio) {
    this->tamanio = tamanio;
}

std::string Perro::getNombre() {
    return nombre;
}

void Perro::setNombre(std::string nombre) {
    this->nombre = nombre;
}

std::string Perro::getColor() {
    return color;
}

void Perro::setColor(std::string color) {
    this->color = color;
}

Perro::~Perro() {
    delete pPropietario;
    delete pVeterinario;
    delete pRaza;
}

int Perro::getEdadPropietario() {
    if (pPropietario != nullptr) {
        return pPropietario->getEdad(); // Retornar la edad del propietario si existe
    } else {
        return -1; // Retornar un valor negativo si no hay propietario asociado
    }
}

void Perro::asociarVeterinario(std::string nombreVeterinario, int añosExperiencia) {
    pVeterinario = new Veterinario(nombreVeterinario, añosExperiencia);
}

void Perro::setVeterinario(Veterinario *pVeterinario) {
    this->pVeterinario = pVeterinario;
}

void Perro::asociarRaza(std::string nombreRaza, std::string paisOrigen) {
    pRaza = new Raza(nombreRaza, paisOrigen);
}

Raza* Perro::getRaza2() {
    return pRaza;
}

void Perro::setRaza2(Raza* pRaza) {
    this->pRaza = pRaza;
}






