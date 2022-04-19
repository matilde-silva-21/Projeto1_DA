//
// Created by Matilde on 06/04/2022.
//

#include "Otimizacao.h"

void Otimizacao::setarmazem(Armazem &a1) {
    this->armazem=a1;
}

Otimizacao::Otimizacao(Armazem &a1): armazem(a1) {

}

float Otimizacao::cenario3() {
    MinHeap<int, int> mark = makeminheap();
    int time = (17-9)*60*60;
    float sum=0, cnt=0;//o numero de segundos entre as 9 e as 17, por isso o numero de segundos disponiveis num dia para entregar as encomendas
    while (time>0){
        int cur = mark.removeMin().second;
        if(time>cur) {time-=cur; sum+=cur; cnt++;}
        else{break;}
    }
    return (sum/cnt);
}

MinHeap<int, int> Otimizacao::makeminheap() {
    MinHeap<int, int> treat(expresso.size(), -1);
    for (auto& it: expresso){
        treat.insert(it.first, it.second.gettempoentrega());
    }
    return treat;
}

int Otimizacao::getn(int n) {
    switch (n) {
        case 1:
            return estafetas.size();
        case 2:
            return encomendas.size();
        case 3:
            return expresso.size();
        default:
            return -1;
    }
}
