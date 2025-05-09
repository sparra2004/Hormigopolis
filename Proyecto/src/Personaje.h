//
// Created by santiago on 8/05/2025.
//

#ifndef PROYECTO_PERSONAJE_H
#define PROYECTO_PERSONAJE_H

#include <iostream>
#include <string>

using namespace std;

class Personaje{
protected:
    string nombre;
    int salud;
    int vitalidad;

public:
    Personaje(string nombre, int salud, int vitalidad);
    ~Personaje() = default;
    void recibirDanio(int cantidadDanio);
    bool estarVivo();
};


#endif //PROYECTO_PERSONAJE_H
