//
// Created by Matilde on 06/04/2022.
//

#include <iostream>
#include "Otimizacao.h"

void Otimizacao::setarmazem(Armazem &a1) {
    this->armazem=a1;
}

Otimizacao::Otimizacao(Armazem &a1): armazem(a1) {

}

int Otimizacao::cenario2() {
    MaxHeap<int, int> recompensa = makemaxheap_recompensa();
    MinHeap<int, int> custo = makeminheap_custo();
    int lucrototal = 0, lucro;
    while (lucrototal >= 0) {
        lucro = 0;
        int est_id = custo.removeMin().first;
        Estafeta est = estafetas.find(est_id)->second;
        int est_vol = est.getvolmax();
        int est_peso = est.getpesomax();
        while (est_vol >= 0 && est_peso >=0) {
            int enc_id = recompensa.removeMax().first;
            Encomenda enc = encomendas.find(enc_id)->second;
            est_vol -= enc.getvolume();
            est_peso -= enc.getpeso();
            lucro += enc.getrecompensa();
        }
        lucro -= est.gettarifa();
        if (lucro <= 0) { break; }
        lucrototal += lucro;
    }
    return lucrototal;
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

MaxHeap<int, int> Otimizacao::makeminheap_estafetas() {
    MaxHeap<int, int> carrinhas(estafetas.size(), -1);
    for(auto& i: estafetas){
        carrinhas.insert(i.first, i.second.getvolmax());
    }
    return carrinhas;
}

MinHeap<int, int> Otimizacao::makeminheap_pedidos() {
    MinHeap<int, int> pedidos(encomendas.size(), -1);
    for(auto& i: encomendas){
        pedidos.insert(i.first, i.second.getvolume());
    }
    return pedidos;
}

MaxHeap<int, int> Otimizacao::makemaxheap_recompensa() {
    MaxHeap<int, int> recompensa(encomendas.size(), -1);
    for (auto& it: encomendas){
        recompensa.insert(it.first, it.second.getrecompensa() / (it.second.getvolume() + it.second.getpeso()));
    }
    return recompensa;
}

MinHeap<int, int> Otimizacao::makeminheap_custo() {
    MinHeap<int, int> custo(estafetas.size(), -1);
    for (auto& it: estafetas){
        custo.insert(it.first, it.second.gettarifa() / (it.second.getvolmax() + it.second.getpesomax()));
    }
    return custo;
}

MinHeap<int, int> Otimizacao::makeminheap() {
    MinHeap<int, int> treat(expresso.size(), -1);
    for (auto& it: expresso){
        treat.insert(it.first, it.second.gettempoentrega());
    }
    return treat;
}
