//
// Created by Matilde on 05/04/2022.
//

#include "Armazem.h"

std::map<int, Estafeta> Armazem::getestafetas() {
    return this->estafetas;
}

std::map<int, Encomenda> Armazem::getpedidos() {
    return this->encomendas;
}

void Armazem::setestafetas(std::map<int, Estafeta> estafetas) {
    this->estafetas=estafetas;
}

void Armazem::setencomendas(std::map<int, Encomenda> encomendas) {
    this->encomendas = encomendas;
}

void Armazem::setexpresso(std::map<int, Expresso> expresso) {
    this->expresso = expresso;
}

std::map<int, Expresso> Armazem::getexpresso() {
    return expresso;
}
