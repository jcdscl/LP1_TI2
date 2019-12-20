#ifndef VULNERABILIDADES_H_
#define VULNERABILIDADES_H_

#include "header.h"

#define TAM_LISTA_VULNERABILIDADES 5



typedef struct 
{
    int id;
    char descricao[50];
    NivelImpacto nivelImpacto;

}Vulnerabilidades;



#endif