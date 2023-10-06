#pragma once
#include <string>
#include <iostream>
#include "Software.h"
using namespace std;
class Social:public Software{
    //Atributos del software social
    private:
    vector<Usuario*> amigos;
    
    //Metodos del software social
    public:
    Social(string,string,string,int);
    ~Social();
    vector<Usuario*> getAmigos();
    void verAmigos();
    void añadirAmigo(vector<Usuario*>,string,Usuario*);
    void eliminarAmigo(string);
};
//constructor
Social::Social(string nombre,string developer,string clasificacionEdad,int precio):Software(nombre,developer,clasificacionEdad,precio){
   
}
//destructor
Social::~Social(){
    
}
//retornar la lista de amigos
vector<Usuario*> Social::getAmigos(){
    return this->amigos;
}
//Ver todos los amigos
void Social::verAmigos(){
    for(int i=0;i<amigos.size();i++){
        Administrador* admin= dynamic_cast<Administrador*>(amigos[i]);
        Normal* norma= dynamic_cast<Normal*>(amigos[i]);
        Nino* nino= dynamic_cast<Nino*>(amigos[i]);
        if(admin){
            cout<<"Administrador->"+amigos[i]->getNombre() + "->"+(to_string(amigos[i]->getEdad())+"\n");
        }else if(norma){
            cout<<"Normal->"+amigos[i]->getNombre() + "->"+(to_string(amigos[i]->getEdad())+"\n");
        }else if(nino){
            cout<<"Nino->"+amigos[i]->getNombre() + "->"+(to_string(amigos[i]->getEdad())+"\n");
        }

    }
}
//Añadir amigo
void Social::añadirAmigo(vector<Usuario*> listaU,string nombre,Usuario* u){
    for(int i=0;i<amigos.size();i++){
        if(amigos[i]->getNombre()==nombre){
            cout<<"Ese amigo ya existe en la lista\n";
            return;
        }
    }
    for(int i=0;i<listaU.size();i++){
        if(listaU[i]->getNombre()==nombre){
            Nino* ninoU=dynamic_cast<Nino*>(u);
            Nino* ninoI=dynamic_cast<Nino*>(listaU[i]);
            if(ninoU){
                if(!ninoI){
                    cout<<"No puedes agregar a otros usuarios que no sean niños\n";
                    return;
                }
            }
            amigos.push_back(listaU[i]);
            cout<<"Amigo agregado exitosamente\n";
            return;
        }
    }
    cout<<"No se encontro el amigo\n";
}
//Eliminar Amigo
void Social::eliminarAmigo(string amigo){
    for(int i=0;i<amigos.size();i++){
        if(amigos[i]->getNombre()==amigo){
            amigos.erase(amigos.begin()+i);
            cout<<"Amigo eliminado exitosamente\n";
            return;
        }
    }
    cout<<"No se encontró el amigo\n";
    return;
}