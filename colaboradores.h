#ifndef COLABORADORES_H_
#define COLABORADORES_H_

#include "headerGlobal.h"


#define TAM_COLABORADOR 100

typedef struct 
{
    int id;
    char nome[20];
}Colaborador;




Colaborador novoColaborador(int id);
int InsereColaborador(Colaborador * colaboradores, int n );



#endif