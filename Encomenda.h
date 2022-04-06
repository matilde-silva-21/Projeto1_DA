//
// Created by Matilde on 05/04/2022.
//

#ifndef PROJETO1_ENCOMENDA_H
#define PROJETO1_ENCOMENDA_H

#include "string"
#include "map"
#include "Estafeta.h"

 //devia ser um long ?

class Encomenda {
    static int id_cntr;
    int id;
    std::string destino;
    int recompensa;
    int volume;
    int peso;
public:
    Encomenda(std::string& destino);
    std::string getdestino();
    void setdestino(std::string& destino);
};

class Expresso: private Encomenda{
    int tempoentrega;
public:
    Expresso(std::string& destino, int& tempoentrega);
    int gettempoentrega();
    void settempoentrega(int& tempoentrega);
};

class Normal: private Encomenda{
    //volume e peso total da entrega, soma peso e volume de todos os pedidos
    Estafeta estafeta;
public:
    Normal(std::string& destino, int& volume, int peso);
    int getvolume();
    int getpeso();
    void setvolume(int& volume);
    void setpeso(int& peso);
};

int Encomenda::id_cntr=0;

#endif //PROJETO1_ENCOMENDA_H
