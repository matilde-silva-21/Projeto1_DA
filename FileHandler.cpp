//
// Created by Matilde on 28/03/2022.
//

#include "FileHandler.h"
#include "fstream"
#include "sstream"
#include "string"
#include "iostream"

void FileHandler::readCarrinhas() {
    std::string words[4];
    std::string line;
    std::ifstream file("data/carrinhas.txt");
    if(file.is_open()){
        getline (file, line); //primeira linha é para descartar;
        while(getline (file, line)){
            split_str(line, ' ', words);
            //falta meter a parte em que se inicializa uma variavel do tipo Carrinha ou Estafeta

        }
        file.close();
    }

    else{std::cout << "Can't open file!\n";}

}

void FileHandler::readEncomendas() {
    std::string words[4];
    std::string line;
    std::ifstream file("data/encomendas.txt");
    if(file.is_open()){
        getline (file, line); //primeira linha é para descartar;
        while(getline (file, line)){
            split_str(line, ' ', words);

            //falta meter a parte em que se inicializa uma variavel do tipo Encomenda
        }
        file.close();
    }

    else{std::cout << "Can't open file!\n";}

}

void FileHandler::split_str( std::string const &str, const char delim, std::string (&words)[4])
{
    // create a stream from the string
    std::stringstream s(str);
    int count = 0;
    std::string s2;
    while (std:: getline (s, s2, delim))
    {
        words[count] = s2; // store the string in s2
        count++;
    }
}
