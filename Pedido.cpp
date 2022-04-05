//
// Created by Matilde on 05/04/2022.
//

#include "Pedido.h"

int Pedido::getvolume() {
    return this->volume;
}

int Pedido::getpeso() {
    return this->peso;
}

int Pedido::getrecompensa() {
    return this->recompensa;
}

void Pedido::setvolume(int &volume) {
    this->volume=volume;
}

void Pedido::setpeso(int &peso) {
    this->peso = peso;
}

void Pedido::setrecompensa(int &recompensa) {
    this->recompensa=recompensa;
}

int Pedido::getid() {
    return this->id;
}

Pedido::Pedido(int &volume, int &peso, int &recompensa): volume(volume), peso(peso), recompensa(recompensa) {
    this->id = ++id_counter;
}
