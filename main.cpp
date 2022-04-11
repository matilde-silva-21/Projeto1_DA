#include <iostream>
#include "FileHandler.h"
#include "Armazem.h"
#include "Otimizacao.h"

int main() {
    Armazem a1;
    FileHandler f1;
    a1.setencomendas(f1.readEncomendas());
    a1.setestafetas(f1.readCarrinhas());
    a1.setexpresso(f1.readExpresso());
    Otimizacao o1(a1);
    std::cout << o1.cenario3();
    return 0;
}
