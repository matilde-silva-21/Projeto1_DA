//
// Created by Matilde on 06/04/2022.
//

#ifndef PROJETO1_OTIMIZACAO_H
#define PROJETO1_OTIMIZACAO_H
#include "Estafeta.h"
#include "Encomenda.h"
#include "Armazem.h"
#include "FileHandler.h"
#include "minHeap.h"


class Otimizacao {
    Armazem armazem;
    map<int, Encomenda> encomendas = armazem.getpedidos();
    map<int, Estafeta> estafetas = armazem.getestafetas();
    map<int, Expresso> expresso = armazem.getexpresso();
public:
    explicit Otimizacao(Armazem& a1);
    void setarmazem(Armazem& a1);


/*cenario 3*/
    /** @brief
     * Cria MinHeap com a key igual ao ID da Encomenda e value igual ao tempo de entrega.
     */
    MinHeap<int, int> makeminheap();
    float cenario3(); //retorna o numero medio de tempo por entrega
    int getn(int n); //funcao para retornar o tamanho do dataset do cenario n
};


#endif //PROJETO1_OTIMIZACAO_H
