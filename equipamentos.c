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


int carregarEquipamentos(Equipamento stockEquipamentos[])
{
    Equipamento stockEquipamentos[TAM_STOCK];
    int indice;

    stockEquipamentos[0].dataAquisicao.ano=2000;
    stockEquipamentos[1].dataAquisicao.ano=2001;
    stockEquipamentos[2].dataAquisicao.ano=2004;
    stockEquipamentos[3].dataAquisicao.ano=2005;
    stockEquipamentos[4].dataAquisicao.ano=2010;

    stockEquipamentos[0].dataAquisicao.mes=1;
    stockEquipamentos[1].dataAquisicao.mes=12;
    stockEquipamentos[2].dataAquisicao.mes=9;
    stockEquipamentos[3].dataAquisicao.mes=4;
    stockEquipamentos[4].dataAquisicao.mes=8;

    stockEquipamentos[0].dataAquisicao.dia=23;
    stockEquipamentos[1].dataAquisicao.dia=3;
    stockEquipamentos[2].dataAquisicao.dia=7;
    stockEquipamentos[3].dataAquisicao.dia=30;
    stockEquipamentos[4].dataAquisicao.dia=11;


    stockEquipamentos[0].id=1;
    stockEquipamentos[1].id=2;
    stockEquipamentos[2].id=3;
    stockEquipamentos[3].id=4;
    stockEquipamentos[4].id=5;    

    strcpy(stockEquipamentos[0].marca, "Lenovo");
    strcpy(stockEquipamentos[1].marca, "Toshiba");
    strcpy(stockEquipamentos[2].marca, "IBM");
    strcpy(stockEquipamentos[3].marca, "Asus");
    strcpy(stockEquipamentos[4].marca, "Apple");

    strcpy(stockEquipamentos[0].modelo, "T450");
    strcpy(stockEquipamentos[1].modelo, "KJ2231");
    strcpy(stockEquipamentos[2].modelo, "S2ks");
    strcpy(stockEquipamentos[3].modelo, "SbK-21");
    strcpy(stockEquipamentos[4].modelo, "macPro");

    stockEquipamentos[0].tipo=0;
    stockEquipamentos[1].tipo=2;
    stockEquipamentos[2].tipo=1;
    stockEquipamentos[3].tipo=0;
    stockEquipamentos[4].tipo=1;

    stockEquipamentos[0].operacional = 1;
    stockEquipamentos[1].operacional = 1;
    stockEquipamentos[2].operacional = 1;
    stockEquipamentos[3].operacional = 1;
    stockEquipamentos[4].operacional = 1;

    return indice;
}

