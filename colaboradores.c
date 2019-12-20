#include "colaboradores.h"

Colaborador novoColaborador(int id)
{
    Colaborador colaborador;

    colaborador.id=id+1;
    printf("NOME: ");
    scanf("%s", &colaborador.nome);
    
    return colaborador;
}