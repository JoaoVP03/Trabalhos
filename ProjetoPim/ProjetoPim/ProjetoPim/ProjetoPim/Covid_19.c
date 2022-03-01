#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#define EXIT_SUCCESS 0 
int input;
void MenuPrincipal();

    void Covid19(){
            int main(void);
            FILE* file;
            char str[60];
            int ret = 0;

    printf("\n");
    printf("\t\t\t==================================\n");
    printf("\t\t\t|                                |\n");
    printf("\t\t\t|                                |\n");
    printf("\t\t\t|  ****PROTOCOLO COVID 19*****   |\n");
    printf("\t\t\t|                                |\n");
    printf("\t\t\t|                                |\n");
    printf("\t\t\t==================================\n\n");


    file = fopen("COVID_19.csv", "r");
    if (file == NULL) {
        perror("erro no arquivo");
    }

    while (fgets(str, 60, file) != NULL) {
        puts(str);
    }

    fclose(file);

    printf("\tDESEJA TENTAR NOVAMENTE DIGITE 1 PARA VOLTAR AO MENU OU 0 PARA SAIR !");
    printf("\n\nPor favor, selecione uma opcao: ");
    scanf("%d", &file);
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