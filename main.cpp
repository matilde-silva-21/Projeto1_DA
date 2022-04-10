#include <iostream>
#include "FileHandler.h"
#include "Armazem.h"

int main() {
    Armazem a1;
    FileHandler f1;
    a1.setencomendas(f1.readEncomendas());
    a1.setestafetas(f1.readCarrinhas());
    return 0;
}
