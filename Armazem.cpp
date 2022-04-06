//
// Created by Matilde on 05/04/2022.
//

#include "Armazem.h"

std::map<int, Estafeta> Armazem::getestafetas() {
    return this->estafetas;
}

std::map<int, Encomenda> Armazem::getpedidos() {
    return this->pedidos;
}

int Armazem::gettotalestafetas() {
    return this->totalestafetas;
}

int Armazem::gettotalpedidos() {
    return this->totalpedidos;
}

void Armazem::setestafetas(std::map<int, Estafeta> &estafetas) {
    this->estafetas=estafetas;
}

void Armazem::setpedidos(std::map<int, Encomenda> &pedidos) {
    this->pedidos=pedidos;
}
