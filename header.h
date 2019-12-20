#ifndef HEADER_U_
#define HEADER_U_
/* bibliotecas do sistema */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*bibliotecas locais */


typedef struct Data
{
    int dia,mes,ano;
}Data;

typedef enum
{
  false = 0,
  true = 1
} Bool;

typedef enum
{
  computador, servidor, outro,
}Tipo;

typedef enum
{
    Elevado = 3, 
    Moderado = 2,
    Baixo =1
} NivelImpacto; 



#endif