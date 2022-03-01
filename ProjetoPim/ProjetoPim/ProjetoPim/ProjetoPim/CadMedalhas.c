// Variaveis 
#include<stdio.h>
#include<locale.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#define EXIT_SUCCESS 0 
int input;
void MenuPrincipal();
typedef struct
{
    int Rank[96];
    char Pais[50];
    int Prata [25];
    char Modalidade[25];
}Atletas;

Atletas BancoAtlelas[96][200];

// TABELA DE MEDALHAS

void TabelaMedalhas() {
    int main(void);
    FILE *arq;
    int ret = 0;
    char str[300];
    char* psRetorno;
    int ContaLinha = 0;
    int Coluna = 0;

#define TAMANHO_TEXTO 200


    printf("\t\t\t=================================\n");
    printf("\t\t\t|  ****TABELA DE MEDALHAS*****  |\n");
    printf("\t\t\t|                               |\n");
    printf("\t\t\t=================================\n\n");
   
    arq = fopen("Medalhas.csv", "r");
    if (arq == NULL) {
        perror("erro no arquivo");
        return(-1);
    }
    while (!feof(arq));
    /*{*/
    fgets(TAMANHO_TEXTO, 200, arq);
    printf("%d", TAMANHO_TEXTO);
    /*}*/
   //LINHA

    while (fgets(str, 200, arq) != NULL)
    {
        //puts(str);

        if (ContaLinha != 0)
        {
            arq = strtok(str, ";");
            puts(arq);

            strcpy(BancoAtlelas[ContaLinha]->Rank, arq);

            do
            {
                arq = strtok('\0', ";");
                if (arq != NULL)
                {
                    if (Coluna == 0)
                    {
                        Coluna++;
                        strcpy(BancoAtlelas[ContaLinha]->Pais, arq);
                    }

                    else if (Coluna == 1)
                    {
                        Coluna++;
                        strcpy(BancoAtlelas[ContaLinha]->Modalidade, arq);
                        Coluna = 0;
                    }
                    //puts(psRetorno);
                }
            } while (arq);
        }
        ContaLinha++;
    }

    fclose(arq);

    printf("\tDESEJA CONTINUAR DIGITE 1 PARA MENU PRINCIPAL OU 0 PARA SAIR !");
    printf("\n\nPor favor, selecione uma opcao: ");
    scanf("%d", &input);
    system("cls");
    switch (input)
    {
        // CADASTRO DE ATLETA  
    case 1:
        MenuPrincipal();
        break;
        //  FINALIZAE E SAIR DO SISTEMA 
    case 0:
       (EXIT_SUCCESS);

        // CASO OPÇÃO DIGITADA NÃO FOR COMO SEGERIDA 
    default:
        printf("\n\t\t\tOpcao invalida!\n\n");
       
    }
}

