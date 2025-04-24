#include <stdio.h>

int main() {

    /* Cadastramento/declaração das variáveis para coleta dos dados das cartas */
    
        /*Cadastramento das variáveis para coleta dos dados das cartas*/

        char codigo1[2],codigo2[2];
        char estado1[2],estado2[2];
        char cidade1[15],cidade2[15];
        int populacao1,populacao2;
        int pt1,pt2;
        float area1,area2;
        float pib1,pib2;
            
        /*Obtenção e armazenamento das informações da carta1*/
    
        printf("Seja bem vindo ao Super Trunfo!\nVamos começar?\n\n");
    
        printf("Informe uma número de 01 a 04 para o código primeira carta:\n");
        scanf("%s", &codigo1);
    
        printf("Informe uma letra de A a D para o primeiro estado:\n");
        scanf("%s", &estado1);
    
        printf("Informe uma cidade para primeira carta:\n");
        scanf("%s", &cidade1);
    
        printf("Informe a população da cidade1:\n");
        scanf("%d", &populacao1);
    
        printf("Informe o número de pontos turisticos da cidade1:\n");
        scanf("%d", &pt1);
    
        printf("Informe o tamanho em km2 dada cidade1:\n");
        scanf("%f", &area1);
    
        printf("Informe o PIB dada cidade1:\n");
        scanf("%f", &pib1);
        
    
        /*Obtenção e armazenamento das informações da carta2*/
    
        printf("Informe uma número de 05 a 08 para o código da segunda carta:\n");
        scanf("%s", &codigo2);
    
        printf("Informe uma letra de E a F para o segundo estado:\n");
        scanf("%s", &estado2);
    
        printf("Informe uma cidade para segunda carta:\n");
        scanf("%s", &cidade2);
    
        printf("Informe a população da cidade2:\n");
        scanf("%d", &populacao2);
    
        printf("Informe o número de pontos turisticos da cidade2:\n");
        scanf("%d", &pt2);
    
        printf("Informe o tamanho em km2 da cidade2:\n");
        scanf("%f", &area2);
    
        printf("Informe o PIB dada cidade2:\n");
        scanf("%f", &pib2);
    
        /*Impressão dos dados coletados para carta1*/
    
        printf("\nCarta1\n");
    
        printf("Codigo1: %s\n", codigo1);
        printf("Estado1: %s\n", estado1);
        printf("Cidade1: %s\n", cidade1);
        printf("População1: %d\n", populacao1);
        printf("Pontos turisticos cidade1: %d\n", pt1);
        printf("Area cidade1: %.2f km2\n", area1);
        printf("PIB cidade1: %.2f\n", pib1);
        
        /*Impressão dos dados coletados para carta2*/
    
        printf("\nCarta2\n");
    
        printf("Codigo2: %s\n", codigo2);
        printf("Estado2: %s\n", estado2);
        printf("Cidade2: %s\n", cidade2);
        printf("População2: %d\n", populacao2);
        printf("Pontos turisticos cidade2: %d\n", pt2);
        printf("Area cidade2: %.2f km2\n", area2);
        printf("PIB cidade2: %.2f\n", pib2);
    
        return 0;
    


}
    
