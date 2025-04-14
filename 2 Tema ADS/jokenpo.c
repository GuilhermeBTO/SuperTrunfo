#include <stdio.h>
#include <stdlib.h> //para usar rand()
#include <time.h>   // para usar time()

int main() { 
   
   int escolha_jogador, escolha_computador;
   srand(time(0));
   
    printf("#### JOGO JOKENPO #### \n");
    printf("\n");
    printf("escolha sua jogada");
    printf("\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("\n");
    scanf("%d", &escolha_jogador);
    printf("\n")

    switch (escolha_jogador)
    { case 1: 
        printf("Jogador - Pedra\n");
        break;
      case 2:
        printf("Jogador - Papel\n");
        break;
      case 3:
        printf("Jogador - Tesoura\n");
        break;
      default:
        printf("opcao invalida");
    return 1;

    }

    escolha_computador = rand() % 3 + 1;

    switch (escolha_computador)
    { case 1: 
        printf("Computador - Pedra\n");
        break;
      case 2:
        printf("Computador - Papel\n");
        break;
      case 3:
        printf("Computador - Tesoura\n");
        break;
    }
    if (escolha_jogador == escolha_computador)
    {
        printf("#### JOGO EMPATOU ####\n");

    } else if ((escolha_jogador == 1 && escolha_computador == 3) ||
                (escolha_jogador == 2 && escolha_computador == 1) ||
                 (escolha_jogador == 3 && escolha_computador == 2))
    {
        printf("### Parabens, Voce ganhou!!! ^-^ ###\n");
    } else {
        printf("### Voce Perdeu ###\n");
    }
   

    return 0;
}