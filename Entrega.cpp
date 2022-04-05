//
// Created by Matilde on 05/04/2022.
//

#include "Entrega.h"

std::string Entrega::getdestino() {
    return this->destino;
}

void Entrega::setdestino(std::string& destino) {
    this->destino=destino;

}

Entrega::Entrega(std::string &destino):destino(destino) {
    this->id=++id_cntr;
}

int Expresso::gettempoentrega() {
    return this->tempoentrega;
}

void Expresso::settempoentrega(int& tempoentrega) {
    this->tempoentrega=tempoentrega;
}

Expresso::Expresso(std::string &destino, int &tempoentrega): Entrega(destino), tempoentrega(tempoentrega) {

}

int Normal::getvolume() {
    return this->volume;
}

int Normal::getpeso() {
    return this->peso;
}

void Normal::setvolume(int& volume) {
    this->volume=volume;
}

void Normal::setpeso(int &peso) {
    this->peso=peso;
}

Normal::Normal(std::string &destino, int &volume, int peso): Entrega(destino), volume(volume), peso(peso) {

}
