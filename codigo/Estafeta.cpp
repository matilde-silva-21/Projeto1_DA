//
// Created by Matilde on 02/04/2022.
//

#include "Estafeta.h"

int Estafeta::id_cntr_est = 0;

int Estafeta::getid() {
    return this->id;
}

std::string Estafeta::getmatricula() {
    return this->matricula;
}

int Estafeta::getpesomax() {
    return this->pesomax;
}

int Estafeta::getvolmax() {
    return this->volmax;
}

int Estafeta::gettarifa() {
    return this->tarifa;
}

void Estafeta::setid(int id) {
    this->id = id;
}

void Estafeta::setmatricula(std::string matricula) {
    this->matricula = matricula;
}

void Estafeta::setpesomax(int pesomax) {
    this->pesomax=pesomax;
}

void Estafeta::setvolmax(int volmax) {
    this->volmax=volmax;
}

void Estafeta::settarifa(int tarifa) {
    this->tarifa = tarifa;
}

Estafeta::Estafeta(std::string matricula, int pesomax, int volmax, int tarifa): id(++id_cntr_est), matricula(std::move(matricula)), pesomax(pesomax), volmax(volmax), tarifa(tarifa) {

}
