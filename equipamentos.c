#include "equipamentos.h"

Equipamento novoEquipamento(int id)
{
    Equipamento equipamento;

    equipamento.id=1;
    printf("TIPO: ");
    scanf("%s", &equipamento.tipo);
   

    printf("MARCA: ");
    scanf("%s", &equipamento.marca);
    
    printf("MODELO: ");
    scanf("%s", &equipamento.modelo);

    printf("DATA AQUISICAO[dd-mm-aaaa]: ");
    scanf("%s", &equipamento.dataAquisicao);
    return equipamento;
}