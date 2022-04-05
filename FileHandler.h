//
// Created by Matilde on 28/03/2022.
//

#ifndef PROJETO1_FILEHANDLER_H
#define PROJETO1_FILEHANDLER_H

#include "string"
#include "Estafeta.h"
#include "Pedido.h"
#include "map"



class FileHandler {

public:
    std::map<int, Estafeta> readCarrinhas(); //inicializar o armazem com isto
    std::map<int, Pedido> readPedidos(); //como é que eu distingo uma entrega expresso de uma normal
    void split_str( std::string const &str, char delim, std::string (&words)[4]);

};


#endif //PROJETO1_FILEHANDLER_H
