//
// Created by Matilde on 05/04/2022.
//

#ifndef PROJETO1_ARMAZEM_H
#define PROJETO1_ARMAZEM_H

#include <map>
#include "Estafeta.h"
#include "Encomenda.h"

class Armazem {
    std::map<int, Estafeta> estafetas;
    std::map<int, Encomenda> encomendas;
    std::map<int, Expresso> expresso;
    int totalestafetas=estafetas.size(), totalencomendas=encomendas.size();

public:
    std::map<int, Estafeta> getestafetas();
    std::map<int, Encomenda> getpedidos();
    std::map<int, Expresso> getexpresso();
    int gettotalestafetas();
    int gettotalencomendas();
    void setestafetas(std::map<int, Estafeta> estafetas);
    void setencomendas(std::map<int, Encomenda> encomendas);
    void setexpresso(std::map<int, Expresso> expresso);

};


#endif //PROJETO1_ARMAZEM_H
