#ifndef EQUIPAMENTOS_H_
#define EQUIPAMENTOS_H_

#include "header.h"

#define TAM_STOCK 5

typedef struct 
{
    int id;
    Tipo tipo;
    char marca[10];
    char modelo[10];
    Data dataAquisicao;
    Bool operacional;
   

}Equipamento;
#endif