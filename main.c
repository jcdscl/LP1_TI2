#include "colaboradores.h"

#define FICHEIRO_BINARIO "./colaboradores.dat"



int carregarFicheiroBinario(Colaborador equipaTecnica[]);
void UIColaboradores(Colaborador * colaboradores, int indice);

void main()
{
    /*inicializar aqui as estruturas e variaveis */
   Colaborador equipaTecnica[TAM_COLABORADOR];
   int quantidadeColaboradores;
   
   //Colaborador = (Colaborador*)malloc(sizeof(Colaborador)* TAM_COLABORADOR);

    
   quantidadeColaboradores = carregarFicheiroBinario(equipaTecnica);
   if (quantidadeColaboradores>0)
   {
       quantidadeColaboradores=0;
   }
   
   int opcao, quantidade=0;

    do
    {
        system("clear");

        printf("::::::::::::::::::::::::::::::::::::::\n");
        printf("\n\t.: Menu Gestão Auditorias :.\n\n");
        printf("[1] Visão Geral\n");  
        printf("[2] Gestão Equipamentos\n");
        printf("[3] Gestão Colaboradores\n");
        printf("[4] Gestão Vulnerabilidades\n");
        printf("[5] Gestão Auditorias\n");
        printf("[6] Mais resumos\n\n");
        printf("::::::::::::::::::::::::::::::::::::::\n");
        scanf("%d", &opcao);

    
        switch (opcao)
        {
            case 1:        /* visao geral  */
                    /**
                        *‣Quantidade de auditorias efetuadas.
                        *‣Auditoria onde foram detetadas mais e menos vulnerabilidades,
                        indicando o seu código, data e quantidade de vulnerabilidades detetadas. 
                        *‣Média de vulnerabilidades identificadas no conjunto de todas as auditorias.
                        */
    
                break;
            case 2:    system("clear"); UIEquipamentos();
                break;
            case 3:    system("clear"); UIColaboradores(equipaTecnica,quantidade);printf("%s\n", equipaTecnica[quantidade].nome);
                break;
            case 4:    system("clear"); UIVulnerabilidades(); 
                break;
            case 5:    system("clear"); UIAuditoria(); 
                break; 
            case 6:    system("clear"); UIVisaoGeral();
                break;                          
            default:   system("clear"); printf("Opção errada! Tente novamente..\n"); system("pause");main();

        } 
        
    } while (opcao < 7);

    return 1;
}

/* Menu para gestão Colaboradores : Inserir Colaborador e Editar Colaborador(editar/remover) */
void UIColaboradores(Colaborador * colaboradores, int indice)
{   
    int opcao;
    do
    {
        printf("\n\t.: Menu Gestão Colaboradores :.\n\n");
        printf("[1] Inserir Colaborador\n");
        printf("[2] Alterar Nome Colaborador\n");
        printf("[3] Remover Colaborador\n");

        scanf("%d", &opcao);
        switch (opcao)
        {
            case 1:system("clear"); InsereColaborador(colaboradores,indice);
                break;
            case 2:system("clear"); 
                break;
            case 3:system("clear");
                break;            
            default: system("clear"); printf("Opção errada! Tente novamente..\n");
                break;
        }
    } while (opcao < 4);
}

/* Menu para gestão Vulnerabilidades : Inserir Vuln. e Editar Vuln. (editar/remover) */
void UIVulnerabilidades()
{   
    int opcao;
    do
    {
        printf("\n\t.: Menu Gestão Vulnerabilidades :.\n\n");
        printf("[1] Inserir Vulnerabilidade\n");
        printf("[2] Editar Vulnerabilidade\n");
        printf("[3] Remover Vulnerabilidade da Base de Dados\n");

        scanf("%d", &opcao);  

        switch (opcao)
        {
            case 1:system("clear");
                break;
            case 2:system("clear"); 
                break;
            case 3:system("clear");
                break;            
            default: system("clear"); printf("Opção errada! Tente novamente..\n");
                break;
        } 
    } while (opcao < 3);
}


/*Menu para gestão das auditorias : Inserir e Editar auditoria (editar/remover)
 * editar: adicionar/remover vuln. de uma auditoria
 * 
 */
void UIAuditoria()
{
    int opcao;
    do
    {
        printf("\n\t.: Menu Gestão Auditoria :.\n\n");
        printf("[1] Criar Auditoria\n");
        printf("[2] Editar Auditoria\n");
        printf("[3] Remover Vulnerabilidade da Base de Dados\n");

        scanf("%d", &opcao);
        switch (opcao)
        {
            case 1:system("clear");
                break;
            case 2:system("clear"); 
                break;
            case 3:system("clear");
                break;            
            default: system("clear"); printf("Opção errada! Tente novamente..\n");
                break;
        }
    } while (opcao < 4);        
}

/* Menu para gestão Equipamentos : Inserir equip. e Editar/Remover. */
void UIEquipamentos()
{
    int opcao;
    do
    {
        printf("\n\t.: Menu Gestão Equipamentos :.\n\n");
        printf("[1] Inserir Equipamento\n");
        printf("[2] Editar Equipamento\n");
        printf("[3] Remover Equipamento da Base de Dados\n");

        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:system("clear");
                break;
            case 2:system("clear"); 
                break;
            case 3:system("clear");
                break;            
            default: system("clear"); printf("Opção errada! Tente novamente..\n");
                break;
        }
    } while (opcao<4);
}

void UIVisaoGeral()
{
    printf("Em contrução..\n");
}

int carregarFicheiroBinario(Colaborador equipaTecnica[])
{
    FILE *ficheiro;
    int quantidade;
    ficheiro = fopen(FICHEIRO_BINARIO, "rb");

    if (ficheiro==NULL)
    {
        return -1;
    }

    quantidade = fread(equipaTecnica, sizeof(equipaTecnica), TAM_COLABORADOR, ficheiro);

    fclose(ficheiro);

    return quantidade;
}   

void guardarColaboradoresFicheiroBinario(Colaborador equipaTecnica[], int quantidadeColaboradores)
{
    FILE *ficheiro;

    ficheiro = fopen(FICHEIRO_BINARIO, "wb");
        
    if (ficheiro==NULL)
    {
        return -1;
    }

    rewind(ficheiro);

    fwrite(equipaTecnica, sizeof(equipaTecnica), quantidadeColaboradores, ficheiro);

    fclose(ficheiro);

}