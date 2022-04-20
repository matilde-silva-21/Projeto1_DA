#include <iostream>
#include "FileHandler.h"
#include "Armazem.h"
#include "Otimizacao.h"

int main() {
    clock_t start = clock();

    Armazem a1;
    FileHandler f1;
    a1.setencomendas(f1.readEncomendas());
    a1.setestafetas(f1.readCarrinhas());
    a1.setexpresso(f1.readExpresso());
    Otimizacao o1(a1);
    //cenario2
    //std::cout << o1.cenario2() << "(EUR)" << endl;

    clock_t stop = clock();
    double elapsed = (double) (stop - start) / CLOCKS_PER_SEC;

    cout << "Time elapsed: "<<elapsed<<"\nAverage time of each iteration (elapsed time/n): "<<elapsed/(o1.getn(3))<<endl;

    std::cout << "\nAverage time of express deliveries: "<< o1.cenario3() <<"(s)"<<endl;
    return 0;
}
