//
// Created by lufe y Gonzo Feb2024.
//

#include "Propietario.h"

//TODO Agrege el constructor por defecto y agrege un constructor con dos parametros
Propietario::Propietario(std::string nombre) {
  this->nombre = nombre;
  this->docIdentidad = "";
}

Propietario::Propietario(std::string nombre, std::string docIdentidad) {
 this->nombre = nombre;
 this->docIdentidad = docIdentidad;
}

std::string Propietario::getNombre()  {
    return nombre;
}

void Propietario::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Propietario::mostrarInfo() {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Documento de Identidad: " << docIdentidad << std::endl;
    std::cout << "Edad: " << edad << std::endl;
}
