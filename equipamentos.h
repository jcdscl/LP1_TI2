#ifndef EQUIPAMENTOS_H_
#define EQUIPAMENTOS_H_

#include "headerGlobal.h"

#define TAM_EQUIPAMENTO 100

typedef struct 
{
    int id;
    char tipo[20];
    char marca[10];
    char modelo[10];
    char dataAquisicao[11];

}Equipamento;



#endif