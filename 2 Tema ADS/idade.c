#include <stdio.h>
 
int main() {
    int option;
   
    do {
        printf("Menu:\n");
        printf("1. Opcao 1\n");
        printf("2. Opcao 2\n");
        printf("3. Sair\n");
        printf("Escolha uma opcaoo: \n");
        scanf("%d", &option);
       
        switch(option) {
            case 1:
                printf("Vocce escolheu a opção 1\n");
                break;
            case 2:
                printf("Voce escolheu a opção 2\n");
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
                printf("\n");
        }
    } while (option != 3);
   
    return 0;
}