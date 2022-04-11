//
// Created by Matilde on 06/04/2022.
//

#include "Otimizacao.h"

void Otimizacao::setarmazem(Armazem &a1) {
    this->armazem=a1;
}

Otimizacao::Otimizacao(Armazem &a1): armazem(a1) {

}

void Otimizacao::cenario3() {

}

MinHeap<int, int> Otimizacao::makeminheap() {
    MinHeap<int, int> treat(expresso.size(), -1);
    for (auto& it: expresso){
        treat.insert(it.first, it.second.gettempoentrega());
    }
    return treat;
}
