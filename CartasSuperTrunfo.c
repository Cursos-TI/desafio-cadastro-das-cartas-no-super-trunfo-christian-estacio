#include <stdio.h>

int main() {

    /* Cadastramento/declaração das variáveis para coleta dos dados das cartas */
    
    char estado1,estado2; /* neste campo o competidor deverá informar uma letra entre 'A' e 'H' para cada estados */
    char codigo1[3],codigo2[3]; /* neste campo o competidor deverá definir um código para cada carta */
    char cidade1[20],cidade2[20]; /* neste campo o competidor deverá informar o nome das cidades */
    int populacao1,populacao2; /* quantidade estimada de habitantes de cada cidade */
    float area1,area2; /* tamanho da cidade em quilometros quadrados */
    float pib1,pib2; /* produto interno bruto (total de riqueza) estimado de cada cidade*/
    int pt1,pt2; /* quantidade  estimada de pontos turisticos de cada cidade */

    /* Obtenção e armazenamento das informações da carta 1*/

    printf("Vamos começar o Super Trunfo?\nInforme uma letra entre A e H para o primeiro estado:\n");
    scanf("%s", &estado1);

    printf("Informe um código para sua primeira carta entre '01' e '04':\n");
    scanf("%s", &codigo1);

    printf("Informe o nome da primeira cidade:\n");
    scanf("%s", &cidade1);

    printf("Informe a quantidade de habitantes da primeira cidade:\n");
    scanf("%d", &populacao1);

    printf("Informe o tamnho da primeira cidade em km2:\n");
    scanf("%f", &area1);

    printf("Informe o PIB estimado da primeira cidade:\n");
    scanf("%f", &pib1);

    printf("Informe o numero aproximado de pontos turisticos da primeira cidade\n");
    scanf("%d", &pt1);

     /* Obtenção e armazenamento das informações da carta 2*/

     printf("Vamos começar o Super Trunfo?\n Informe uma letra entre A e H para o segundo estado:\n");
     scanf("%s", &estado2);
 
     printf("Informe um código para sua segunda carta entre '01' e '04':\n ");
     scanf("%s", &codigo2);
 
     printf("Informe o nome da segunda cidade:\n");
     scanf("%s", &cidade2);
 
     printf("Informe a quantidade de habitantes da segunda cidade:\n");
     scanf("%d", &populacao2);
 
     printf("Informe o tamnho da segunda cidade em km2:\n");
     scanf("%f", &area2);
 
     printf("Informe o PIB estimado da segunda cidade:\n");
     scanf("%f", &pib2);
 
     printf("Informe o numero aproximado de pontos turisticos da segunda cidade\n");
     scanf("%d", &pt2);

     /* Dados cadastrados - carta 1 e carta 2 */

     printf("Código carta 1: %s\n",&codigo1);
     printf("Estado 1: %s\n",&estado1);
     printf("Cidade 1: %s\n",&cidade1);
     printf("População cidade 1: %d\n",&populacao1);
     printf("Tamanho cidade 1: %f\n",&area1);
     printf("PIB cidade 1: %f\n",&pib1);
     printf("Nº de pontos turisticos cidade 1: %d\n",&pt1);

     printf("Código carta 2: %s\n",&codigo2);
     printf("Estado 2: %s\n",&estado2);
     printf("Cidade 2: %s\n",&cidade2);
     printf("População cidade 2: %d\n",&populacao2);
     printf("Tamanho cidade 2: %f\n",&area2);
     printf("PIB cidade 2: %f\n",&pib2);
     printf("Nº de pontos turisticos cidade 2: %d\n",&pt2);

     return 0;

 








}
    
