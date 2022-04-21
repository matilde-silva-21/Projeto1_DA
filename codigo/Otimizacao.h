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
/** @brief
     * Retorna o tamanho do dataset mediante o cenário em análise
     */
    int getn(int n);

/*cenario 2*/
    /** @brief
     * Cria MaxHeap com a key igual ao ID da Encomenda e value igual à divisão da recompensa pelo espaço ocupado pela encomenda, sendo que o espaço será a soma do voluma e do peso da encomenda
     */
    MaxHeap<int, int> makemaxheap_recompensa();
    /** @brief
     * Cria MinHeap com a key igual ao ID da Encomenda e value igual à divisão do custo da carrinha pelo espaço total da carrinha
     */
    MinHeap<int, int> makeminheap_custo();
    /** @brief
     * Retorna o valor do lucro máximo
     */
    int cenario2();

/*cenario 3*/
    /** @brief
     * Cria MinHeap com a key igual ao ID da Encomenda e value igual ao tempo de entrega.
     */
    MinHeap<int, int> makeminheap();
    /** @brief
     * Retorna o numero médio de tempo por entrega
     */
    float cenario3();

};


#endif //PROJETO1_OTIMIZACAO_H
