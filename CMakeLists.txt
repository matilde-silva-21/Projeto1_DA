cmake_minimum_required(VERSION 3.20)
project(Projeto1)

set(CMAKE_CXX_STANDARD 14)

add_executable(Projeto1 codigo/main.cpp codigo/FileHandler.cpp codigo/FileHandler.h codigo/Estafeta.cpp codigo/Estafeta.h codigo/Encomenda.cpp codigo/Encomenda.h codigo/Armazem.cpp codigo/Armazem.h codigo/Otimizacao.cpp codigo/Otimizacao.h codigo/minHeap.h codigo/maxHeap.h)
