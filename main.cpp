#include <iostream>
#include "Perro.h"
#include "Propietario.h"

int main() {

    // Instanciar
    Perro firulais;
    firulais.setNombre("Firulais");
    firulais.setColor("Negro");
    firulais.setEdad(5);
    firulais.setTamanio("Grande");
    firulais.setRaza("Mastin napolitano");

    //Agregar un nuevo pPropietario a Firulais
    firulais.agregarPropietario("Carlos Zapata", "102842313");

    // Consultar el nombre del pPropietario del perro Firulais
    std::cout<< "El nombre del pPropietario del perro "<<firulais.getNombre() << " es " << firulais.getPropietario()->getNombre()<<std::endl;
    
    Raza mastinNapolitano("Mastin Napolitano", "Italia");

    // Vincular a Firulais con la raza "Mastin Napolitano"
    firulais.setRaza(&mastinNapolitano);

    // Imprimir la información de Firulais y su raza asociada
    std::cout << "Información de Firulais:" << std::endl;
    std::cout << "Nombre: " << firulais.getNombre() << std::endl;
    std::cout << "Color: " << firulais.getColor() << std::endl;
    std::cout << "Edad: " << firulais.getEdad() << std::endl;
    std::cout << "Tamaño: " << firulais.getTamanio() << std::endl;

    // Imprimir la información de la raza asociada a Firulais
    if (firulais.getRaza() != nullptr) {
        std::cout << "Raza de Firulais:" << std::endl;
        std::cout << "Nombre: " << firulais.getRaza()->getNombre() << std::endl;
        std::cout << "País de origen: " << firulais.getRaza()->getPaisOrigen() << std::endl;
    } else {
        std::cout << "Firulais no tiene una raza asociada." << std::endl;
    }
    
    // Crear un objeto Perro usando new
    Perro* miPerro = new Perro();

    // Llamar al método ladrar del objeto creado
    miPerro->ladrar();

    // Liberar la memoria asignada dinámicamente
    delete miPerro;

    
    // Crear un objeto Propietario usando new y el constructor de un solo parámetro
    Propietario* miPropietario = new Propietario("Roberto");

    // Usar los métodos set para definir los atributos restantes
    miPropietario->setDocIdentidad("1000000");
    miPropietario->setEdad(30);

    // Imprimir la información del propietario
    miPropietario->mostrarInfo();

    // Liberar la memoria asignada dinámicamente
    delete miPropietario;

    // Crear un objeto Perro usando new
    Perro* miPerro = new Perro();

    // Agregar un nuevo propietario al perro
    miPerro->agregarPropietario("Rene", "123456789");
    miPerro->asociarVeterinario("Dr. Juan", 10);

    // Consultar el documento de identidad del propietario del perro
    if (miPerro->getPropietario() != nullptr) { // Verificar si el perro tiene un propietario asignado
        std::cout << "Documento de Identidad del Propietario del Perro: " << miPerro->getPropietario()->getDocIdentidad() << std::endl;
    } else {
        std::cout << "El Perro no tiene un Propietario asignado." << std::endl;
    }

    std::cout << "Información del veterinario del perro:" << std::endl;
    std::cout << "Nombre: " << miPerro.getVeterinario()->getNombre() << std::endl;
    std::cout << "Años de experiencia: " << miPerro.getVeterinario()->getAñosExperiencia() << std::endl;
    miPerro.asociarRaza("Mastin Napolitano", "Italia");
    // Liberar la memoria asignada dinámicamente
    delete miPerro;

    Raza mastinNapolitano("Mastin Napolitano", "Italia");
    Raza maltes("Maltes", "Italia");

    

    
    return 0;
}
