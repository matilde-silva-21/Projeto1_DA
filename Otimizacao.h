//
// Created by Matilde on 06/04/2022.
//

#ifndef PROJETO1_OTIMIZACAO_H
#define PROJETO1_OTIMIZACAO_H
#include "Estafeta.h"
#include "Encomenda.h"
#include "Armazem.h"
#include "FileHandler.h"
#include "maxHeap.h"
#include "minHeap.h"


class Otimizacao {
    Armazem armazem;
    map<int, Encomenda> encomendas = armazem.getpedidos();
    map<int, Estafeta> estafetas = armazem.getestafetas();
    map<int, Expresso> expresso = armazem.getexpresso();
public:
    explicit Otimizacao(Armazem& a1);
    void setarmazem(Armazem& a1);


/*cenario 2*/
    MaxHeap<int, int> makemaxheap_recompensa(); //max heap com prioridade é a recompensa / espaço ocupado pela encomenda - espaço será a soma do voluma e do peso da encomenda
    MinHeap<int, int> makeminheap_custo(); //min heap com prioridade é o custo / espaço da carrinha - espaço será a soma do voluma e do peso
    int cenario2(); //retorna o valor do lucro máximo

/*cenario 3*/
    MinHeap<int, int> makeminheap();
    float cenario3(); //retorna o numero medio de tempo por entrega
};


#endif //PROJETO1_OTIMIZACAO_H
