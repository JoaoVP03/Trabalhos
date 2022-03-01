// VARIAVÉIS
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#define EXIT_SUCCESS 0 
int input;
void MenuPrincipal();
//LISTAGEM DE ATLETAS
	
void ListaAtletas() {
    int main(void);
        FILE* arq;
        char str[60];
	int ret = 0;

    printf("\n");
    printf("\t\t\t==================================\n");
    printf("\t\t\t|                                |\n");
    printf("\t\t\t|                                |\n");
    printf("\t\t\t|  ****LISTAGEM DE ALTETAS*****  |\n");
    printf("\t\t\t|                                |\n");
    printf("\t\t\t|                                |\n");
    printf("\t\t\t==================================\n\n");


        arq = fopen("Atleta.csv", "r");
        if (arq == NULL) {
            perror("erro no arquivo");
            return(-1);
        }

        while (fgets(str, 60, arq) != NULL) {
            puts(str);
        }

        fclose(arq);
    
    printf("\tDESEJA TENTAR NOVAMENTE DIGITE 1 PARA BUSCAR ATLETA OU 0 PARA SAIR !");
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







