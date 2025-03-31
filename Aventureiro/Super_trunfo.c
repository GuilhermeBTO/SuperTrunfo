#include <stdio.h>

int main() {
    
    // Dados para a Carta 1 
    char estado1[] = "Amazonia";
    char codigo_carta1[] = "A01";
    char nome_cidade1[] = "Manaus";
    int populacao1 = 2064000;
    float area1 = 11401;
    float pib1 = 103.281;
    int pontos_turisticos1 = 30;

    // Dados para a Carta 2 
    char estado2[] = "Para";
    char codigo_carta2[] = "B02";
    char nome_cidade2[] = "Belem";
    int populacao2 = 1398531;
    float area2 = 1059;
    float pib2 = 33.4;
    int pontos_turisticos2 = 21;

    //calcular a densidadee populacional da carta 1:
    float densidade_populacional1 = populacao1/area1;
   
    //calcular o PIB per capita da carta 1:
    float pib_per_capita1 = pib1*1000000/populacao1;

    //calcular a densidade populacional da carta 2:
    float densidade_populacional2 = populacao2/area2;

    //calcular o PIB per capita da carta 2:
    float pib_per_capita2 = pib2*1000000/populacao2;
    
    //exibir carta 1
    void exibir_carta(char estado1[], char codigo_carta1[], char nome_cidade1[], int populacao1, float area1, float pib1, int pontos_turisticos1, float densidade_populacional1, float pib_per_capita1); {
        printf("Carta 1: \n");
        printf("Estado: %s\n", estado1);
        printf("Codigo da Carta: %s\n", codigo_carta1);
        printf("Nome da Cidade: %s\n", nome_cidade1);
        printf("Populacao: %d\n", populacao1);
        printf("Area: %.2f km2\n", area1);
        printf("PIB: %.2f bilhoes de reais \n", pib1);
        printf("Pontos Turisticos: %d \n", pontos_turisticos1);
        printf("Densidade populacional: %.2f habitantes por km2\n", densidade_populacional1);
        printf("PIB per capita: %.2f reais\n", pib_per_capita1);
    }
    
    //exibir carta 2
     void exibir_carta(char estado2[], char codigo_carta2[], char nome_cidade2[], int populacao2, float area2, float pib2, int pontos_turisticos2, float densidade_populacional2, float pib_per_capita2); {
        printf("Carta 2: \n");
        printf("Estado: %s\n", estado2);
        printf("Codigo da Carta: %s\n", codigo_carta2);
        printf("Nome da Cidade: %s\n", nome_cidade2);
        printf("Populacao: %d\n", populacao2);
        printf("Area: %.2f km2\n", area2);
        printf("PIB: %.2f bilhoes de reais \n", pib2);
        printf("Pontos Turisticos: %d \n", pontos_turisticos2);
        printf("Densidade populacional: %.2f habitantes por km2\n", densidade_populacional2);
        printf("PIB per capita: %.2f reais\n", pib_per_capita2);
    }
    return 0;
}