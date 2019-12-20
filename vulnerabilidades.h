#ifndef VULNERABILIDADES_H_
#define VULNERABILIDADES_H_

#include "headerGlobal.h"

#define TAM_VULNERABILIDADE 100

enum NivelImpacto
{
    Elevado = 3, 
    Moderado = 2,
    Baixo =1
}; 


typedef struct 
{
    int id;
    char descricao[50];
    int nivelImpacto;

}Vulnerabilidades;



#endif