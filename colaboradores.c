#include "colaboradores.h"


/*Função criar novo colaboarador*/
Colaborador novoColaborador(int id)
{
    Colaborador colaborador;

    colaborador.id=id+1;
    printf("NOME: ");
    scanf("%s", &colaborador.nome);
    
    return colaborador;
}

/*Função que insere o colaborador criado anteriormente na estrutura*/
int InsereColaborador(Colaborador * colaboradores, int n)
{   
    /*Verifica se a estrutura está cheia*/
    if (n>= TAM_COLABORADOR)
    {
       return -1;
    }

    colaboradores[n] = novoColaborador(n);
    n++;

    return n;
}