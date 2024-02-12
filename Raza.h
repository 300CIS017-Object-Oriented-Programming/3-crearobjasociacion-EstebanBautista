#ifndef RAZA_H
#define RAZA_H

#include <string>
#include <iostream>

class Raza {
private:
    std::string nombre;
    std::string paisOrigen;

public:
    // Constructor por defecto
    Raza();

    // Constructor con parámetros
    Raza(std::string nombre, std::string paisOrigen);

    // Métodos de acceso para el atributo nombre
    std::string getNombre();
    void setNombre(std::string nombre);

    // Métodos de acceso para el atributo paisOrigen
    std::string getPaisOrigen();
    void setPaisOrigen(std::string paisOrigen);
};

#endif // RAZA_H
