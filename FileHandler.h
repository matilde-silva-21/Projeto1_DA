//
// Created by Matilde on 28/03/2022.
//

#ifndef PROJETO1_FILEHANDLER_H
#define PROJETO1_FILEHANDLER_H

#include "string"



class FileHandler {

public:
    void readCarrinhas();
    void readEncomendas();
    void split_str( std::string const &str, char delim, std::string (&words)[4]);

};


#endif //PROJETO1_FILEHANDLER_H
