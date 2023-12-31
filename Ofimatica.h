#pragma once
#include <string>
#include <iostream>
#include "Software.h"
using namespace std;
class Ofimatica:public Software{
    //Atributos del software de ofimatica
    private:
    int cantArchivos;
    
    //metodos del software de ofimatica
    public:
    Ofimatica(string,string,string,int,int);
    ~Ofimatica();
    int getCant();
    void eliminarArchivo();
    void agregarArchivo();

};
//constructor
Ofimatica::Ofimatica(string nombre,string developer,string clasificacionEdad,int precio,int cantArchivos):Software(nombre,developer,clasificacionEdad,precio){
    this->cantArchivos=cantArchivos;
}
//destructor
Ofimatica::~Ofimatica(){
    
}
//ver cantidad de archivos
int Ofimatica::getCant(){
    return this->cantArchivos;
}
//Eliminar archivo
void Ofimatica::eliminarArchivo(){
    if(cantArchivos<=0){
        this->cantArchivos=0;
        return;
    }
    this->cantArchivos-=1;
    return;
}
void Ofimatica::agregarArchivo(){
    this->cantArchivos++;
}