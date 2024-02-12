#ifndef VETERINARIO_H
#define VETERINARIO_H

#include <string>
#include <iostream>

class Veterinario {
private:
    std::string nombre;
    int aniosExperiencia;
public:
    Veterinario(); // Constructor por defecto
    Veterinario(std::string nombre, int aniosExperiencia); // Constructor con parámetros
    ~Veterinario(); // Destructor

    // Métodos de acceso para el atributo nombre
    std::string getNombre();
    void setNombre(std::string nombre);

    // Métodos de acceso para el atributo aniosExperiencia
    int getAniosExperiencia();
    void setAniosExperiencia(int aniosExperiencia);
};
#endif // VETERINARIO_H
