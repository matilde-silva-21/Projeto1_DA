//
// Created by Matilde on 05/04/2022.
//

#ifndef PROJETO1_ENCOMENDA_H
#define PROJETO1_ENCOMENDA_H

#include "string"
#include "map"
#include "Estafeta.h"



class Encomenda {
    static int id_cntr_enc;
    int id;
    int recompensa;
    int volume;
    int peso;
public:
    Encomenda(int volume, int peso, int recompensa);
    int getvolume();
    int getpeso();
    void setvolume(int& volume);
    void setpeso(int& peso);
    void setrecompensa(int& recompensa);
    int getrecompensa();
    int getid();
};

class Expresso: public Encomenda{
    int tempoentrega;
public:
    Expresso(int volume, int peso, int recompensa, int tempoentrega);
    int gettempoentrega();
    void settempoentrega(int& tempoentrega);
    bool operator < (Expresso& e1) const;
    bool operator == (Expresso& e1) const;

};

class Normal: public Encomenda{
    //volume e peso total da entrega, soma peso e volume de todos os pedidos
    Estafeta estafeta;
public:
    Normal(int volume, int peso, int recompensa, Estafeta& e1);
};



#endif //PROJETO1_ENCOMENDA_H
