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
    int lucrototal = 0, lucro, n_estafetas = 0, n_encomendas = 0;
    while (lucrototal >= 0) {
        lucro = 0;
        int est_id = custo.removeMin().first;
        Estafeta est = estafetas.find(est_id)->second;
        int est_vol = est.getvolmax();
        int est_peso = est.getpesomax();
        n_estafetas++;
        while (est_vol >= 0 && est_peso >=0) {
            int enc_id = recompensa.removeMax().first;
            Encomenda enc = encomendas.find(enc_id)->second;
            if ((est_vol - enc.getvolume()) >= 0 && (est_peso - enc.getpeso() >= 0)) {
                est_vol -= enc.getvolume();
                est_peso -= enc.getpeso();
                lucro += enc.getrecompensa();
                n_encomendas++;
            }
            else {
                recompensa.insert(enc_id, enc.getrecompensa() / (enc.getvolume() + enc.getpeso()));
                break;
            }
        }
        lucro -= est.gettarifa();
        if (lucro <= 0) { break; }
        lucrototal += lucro;
    }
    std::cout << "Estafetas Utilizados: " << n_estafetas << endl;
    std::cout << "Encomendas Entregues: " << n_encomendas << endl;
    std::cout << "Lucro da Empresa: ";
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
