#ifndef COLABORADORES_H_
#define COLABORADORES_H_

#include "header.h"
#include "auditorias.h"


#define TAM_COLABORADOR 10

typedef struct
{
    int id;
    char nome[20];
    Bool disponibilidade;
 
}Colaborador;




Colaborador novoColaborador(int id);
int InsereColaborador(Colaborador * colaboradores, int n );



#endif