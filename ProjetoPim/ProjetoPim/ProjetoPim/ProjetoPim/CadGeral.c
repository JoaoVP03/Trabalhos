// Variaveis 
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHO_TABELA_ATLETAS 20
// CADASTRO DE ATLETAS
void MenuPrincipal();


int input;

void CadastroAtleta() {


    void main();
    char cod[200];
    char nome[15];
    char CadastroModalidade[15];
    char Pais[15];
    char Medalha[15];
    char EquipeOlimpica[15];
    char AlojamentoAtleta[15];
    char LocalJogos[15];
    char Equipamentos[15];
    char Treinamento[15];
    char Equipe[15];
    int n;

    FILE* arq = fopen("Atleta.txt", "a");
    if (arq == NULL) {
        printf("Erro ao encontrar usuarios cadastrados!\n\n");
        exit(0);
    }


    printf("\n");
    printf("\t\t\t==================================\n");
    printf("\t\t\t|                                |\n");
    printf("\t\t\t|                                |\n");
    printf("\t\t\t|  ****CADASTRO DE ATLETA*****   |\n");
    printf("\t\t\t|                                |\n");
    printf("\t\t\t|                                |\n");
    printf("\t\t\t==================================\n\n");

    for (n = -1; n < 15; n++)
    {

        if (n == 0) {
            puts("------------------------------------CADASTRO----------------------------------------");
            gets(cod);
            fprintf(arq, "%s\n", cod);
            n++;
        }
        if (n == 1) {
            puts("DIGITE O CODIGO:");
            gets(cod);
            fprintf(arq, "%s\n", cod);
            n++;
        }
        if (n == 2) {
            puts("DIGITE O NOME DO ATLETA: ");
            gets(nome);
            fprintf(arq, "%s\n", nome);
            n++;
        }
        if (n == 3) {
            puts("DIGITE A MODALIDADE : ");
            gets(CadastroModalidade);
            fprintf(arq, "%s \n", CadastroModalidade);
            n++;
        }
        if (n == 4) {
            puts("DIGITE O PAIS DE ORIGEM DO ATLETA: ");
            gets(Pais);
            fprintf(arq, "%s\n", Pais);
            n++;
        }
        if (n == 5) {
            puts("DIGITE A MEDALHA RECEBIDA: ");
            gets(Medalha);
            fprintf(arq, "%s\n", Medalha);
            n++;
        }
        if (n == 6) {
            puts("DIGITE A EQUIPE OLIMPICA: ");
            gets(EquipeOlimpica);
            fprintf(arq, "%s\n", EquipeOlimpica);
            n++;
        }
        if (n == 7) {
            puts("DIGITE O ALOJAMENTO DOS ATLETAS: ");
            gets(AlojamentoAtleta);
            fprintf(arq, "%s\n", AlojamentoAtleta);
            n++;
        }
        if (n == 8) {
            puts("DIGITE O LOCAL ONDE IRAO ACONTECER OS JOGOS OLIMPICOS: ");
            gets(LocalJogos);
            fprintf(arq, "%s\n", LocalJogos);
            n++;
        }
        if (n == 9) {
            puts("DIGITE O EQUIPAMENTO NECESSARIO: ");
            gets(Equipamentos);
            fprintf(arq, "%s\n", Equipamentos);
            n++;
        }
        if (n == 10) {
            puts("DIGITE O LOCAL DE TREINAMENTO: ");
            gets(Treinamento);
            fprintf(arq, "%s\n", Treinamento);
            n++;
        }
        if (n == 11) {
            puts("DIGITE A EQUIPE OLIMPICA: ");
            gets(Equipe);
            fprintf(arq, "%s\n", Equipe);
            n++;
        }
        if (n == 12) {
            puts("Cadastrado com sucesso!");
            n++;
        }

    }

    printf("\t\t\t=====================================\n");
    printf("\t\t\t|                                   |\n");
    printf("\t\t\t|**CADASTRO REALIDADO COM SUCESSO** |\n");
    printf("\t\t\t|                                   |\n");
    printf("\t\t\t=====================================\n\n");

    fflush(arq);
    fclose(arq);

    printf("\tDESEJA TENTAR NOVAMENTE DIGITE 1 PARA VOLTAR AO MENU PRINCIPAL OU 0 PARA SAIR !");
    printf("\n\nPor favor, selecione uma opcao: ");
    scanf("%d", &arq);
    system("cls");
    switch (input)
    {
        // MENU PRINCIPAL 
    case 1:
        MenuPrincipal();
        break;
        //  FINALIZA E SAI DO SISTEMA 
    case 0:
        exit(EXIT_SUCCESS);

        // CASO OPÇÃO DIGITADA NÃO FOR COMO SUGERIDA 
    default:
        printf("\n\t\t\tOpcao invalida!\n\n");

    }
}

