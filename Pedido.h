//
// Created by Matilde on 05/04/2022.
//

#ifndef PROJETO1_PEDIDO_H
#define PROJETO1_PEDIDO_H

static int id_counter=0; //global variable para contar o id do pedido (melhor forma de fazer isto?)

class Pedido {
    int volume, peso, recompensa, id;
public:
    Pedido(int& volume, int& peso, int& recompensa);
    int getvolume();
    int getpeso();
    int getrecompensa();
    int getid();
    void setvolume(int& volume);
    void setpeso(int& peso);
    void setrecompensa(int& recompensa);

};


#endif //PROJETO1_PEDIDO_H
