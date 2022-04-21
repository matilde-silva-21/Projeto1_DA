//
// Created by Matilde on 05/04/2022.
//

#include "Encomenda.h"

int Encomenda::id_cntr_enc=0;

Encomenda::Encomenda(int volume, int peso, int recompensa): id(++id_cntr_enc), volume(volume), peso(peso), recompensa(recompensa) {

}

int Expresso::gettempoentrega() {
    return this->tempoentrega;
}

void Expresso::settempoentrega(int& tempoentrega) {
    this->tempoentrega=tempoentrega;
}

Expresso::Expresso(int volume, int peso, int recompensa, int tempoentrega): Encomenda(volume, peso, recompensa), tempoentrega(tempoentrega) {

}

bool Expresso::operator<(Expresso &e1) const {
    return tempoentrega < e1.tempoentrega;
}

bool Expresso::operator == (Expresso& e1) const{
    return tempoentrega == e1.tempoentrega;
}

int Encomenda::getvolume() {
    return this->volume;
}

int Encomenda::getpeso() {
    return this->peso;
}

void Encomenda::setvolume(int& volume) {
    this->volume=volume;
}

void Encomenda::setpeso(int &peso) {
    this->peso=peso;
}

void Encomenda::setrecompensa(int &recompensa) {
    this->recompensa=recompensa;
}

int Encomenda::getrecompensa() {
    return recompensa;
}

int Encomenda::getid() {
    return id;
}

Normal::Normal(int volume, int peso, int recompensa, Estafeta& e1): Encomenda(volume, peso, recompensa), estafeta(e1) {

}
