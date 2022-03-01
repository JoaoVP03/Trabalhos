#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#define EXIT_SUCCESS 0 
int input;
void MenuPrincipal();

void CalOlimpico(){
    int main(void);
    FILE* fp;
    int ret = 0;
    char str[60];

    printf("\t\t\t=================================\n");
    printf("\t\t\t|  ****CALENDARIO OLIMPICO***** |\n");
    printf("\t\t\t|                               |\n");
    printf("\t\t\t=================================\n\n");

    fp = fopen("CalOlimpico.csv", "r");
    if (fp == NULL) {
        perror("erro no arquivo");
        return(-1);
    }

    while (fgets(str, 60, fp) != NULL) {
        puts(str);
    }

    fclose(fp);

    printf("\tDESEJA CONTINUAR DIGITE 1 PARA MENU PRINCIPAL OU 0 PARA SAIR !");
    printf("\n\nPor favor, selecione uma opcao: ");
    scanf("%d", &fp);
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