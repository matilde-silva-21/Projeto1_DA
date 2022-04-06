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
    std::map<int, Encomenda> pedidos; //pedidos por entregar ou todos alguma vez feitos?
    int totalestafetas=estafetas.size(), totalpedidos=pedidos.size();

public:
    std::map<int, Estafeta> getestafetas();
    std::map<int, Encomenda> getpedidos();
    int gettotalestafetas();
    int gettotalpedidos();
    void setestafetas(std::map<int, Estafeta>& estafetas);
    void setpedidos(std::map<int, Encomenda>& pedidos);

};


#endif //PROJETO1_ARMAZEM_H
