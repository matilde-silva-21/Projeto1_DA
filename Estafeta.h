//
// Created by Matilde on 02/04/2022.
//

#ifndef PROJETO1_ESTAFETA_H
#define PROJETO1_ESTAFETA_H
#include <string>

class Estafeta {
    static int id_cntr_est;
    int id;
    std::string matricula;
    int pesomax, volmax, tarifa; //peso - kg ; vol - m^3 ;  tarifa - €/hora

public:
    Estafeta(std::string matricula, int pesomax, int volmax, int tarifa);
    int getid();
    std::string getmatricula();
    int getpesomax();
    int getvolmax();
    int gettarifa();

    void setid(int id);
    void setmatricula(std::string matricula);
    void setpesomax(int pesomax);
    void setvolmax(int volmax);
    void settarifa(int tarifa);

    bool operator < (const Estafeta &e1) const {
        return id<e1.id;
    }

    bool operator > (const Estafeta& e1) const {
        return id>e1.id;

    }

    bool operator == (const Estafeta& e1) const {
        return id==e1.id;

    }


};



#endif //PROJETO1_ESTAFETA_H
