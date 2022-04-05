//
// Created by Matilde on 05/04/2022.
//

#ifndef PROJETO1_ENTREGA_H
#define PROJETO1_ENTREGA_H

#include "string"
#include "map"
#include "Pedido.h"

static int id_cntr=0; //devia ser um long ?

class Entrega {
    std::map<int, Pedido> pedidos; //aqui devia ser um mapa de pedidos expressos e outro normais? um mapa para todos os pedidos nao me parece bem
    int id;
    std::string destino;
public:
    Entrega(std::string& destino);
    std::string getdestino();
    void setdestino(std::string& destino);
};

class Expresso: private Entrega{
    int tempoentrega;
public:
    Expresso(std::string& destino, int& tempoentrega);
    int gettempoentrega();
    void settempoentrega(int& tempoentrega);
};

class Normal: private Entrega{
    //volume e peso total da entrega, soma peso e volume de todos os pedidos
    int volume;
    int peso;

public:
    Normal(std::string& destino, int& volume, int peso);
    int getvolume();
    int getpeso();
    void setvolume(int& volume);
    void setpeso(int& peso);
};

#endif //PROJETO1_ENTREGA_H
