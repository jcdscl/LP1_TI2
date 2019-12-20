#include "vulnerabilidades.h"




int carregarVulnerabilidades(Vulnerabilidades listaVulnerabilidades[])
{

    Vulnerabilidades listaVulnerabilidades[TAM_LISTA_VULNERABILIDADES];
    int indice;

    listaVulnerabilidades[0].id=1;
    listaVulnerabilidades[1].id=2;
    listaVulnerabilidades[2].id=3;
    listaVulnerabilidades[3].id=4;
    listaVulnerabilidades[4].id=5;

    listaVulnerabilidades[0].nivelImpacto=3;
    listaVulnerabilidades[1].nivelImpacto=3;
    listaVulnerabilidades[2].nivelImpacto=2;
    listaVulnerabilidades[3].nivelImpacto=3;
    listaVulnerabilidades[4].nivelImpacto=1;        

    strcpy(listaVulnerabilidades[0].descricao,"inexistencia de antivirus");
    strcpy(listaVulnerabilidades[1].descricao,"inexistencia de senha de utilizador");
    strcpy(listaVulnerabilidades[2].descricao,"senha de acesso nao muito segura");
    strcpy(listaVulnerabilidades[3].descricao,"encontrado keylogger");
    strcpy(listaVulnerabilidades[4].descricao,"licença do navegador quase a expirar");

    return indice;
}