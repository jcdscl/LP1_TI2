#ifndef AUDITORIAS_H_
#define AUDITORIAS_H_

#include "header.h"

#define TAM_AUDITORIA 100

typedef struct 
{
    int id;
    char data[11];
    int duracao;
    int qtVulnerabilidades;
}Auditoria;



#endif