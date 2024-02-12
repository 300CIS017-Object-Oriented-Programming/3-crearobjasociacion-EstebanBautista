//
// Created by lufe y Gonzo Feb2024.
//

#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <string>

class Propietario {
private:
    std::string nombre;
    std::string docIdentidad;
    int edad;
public:
    Propietario() = default; //Agrega constructor por defecto sin cuerpo
    Propietario(std::string nombre, std::string docIdentidad);
    Propietario(std::string nombre);
    void mostrarInfo();
    std::string getNombre();
    void setNombre(std::string nombre);
    std::string getDocIdentidad();
    void setDocIdentidad(std::string docIdentidad);
    int getEdad();
    void setEdad(int edad);
    
/*
El metodo "agregarPropietario" se supone que es lo que conecta a la clase perro y la clase propietario
este método crea una relación entre un perro y su propietario asignando un objeto Propietario al perro. De esta manera, 
establece una asociación entre un perro y su propietario, lo que permite que el perro tenga un propietario específico.
*/


};


#endif //PROPIETARIO_H
