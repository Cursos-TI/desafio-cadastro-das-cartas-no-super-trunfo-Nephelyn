#include <stdio.h>
#include <string.h>


int main() {
    // Carta 1
    char estado1[1];
    char cidade1[40];
    int populacao1;
    int pontoturistico1;
    float area1;
    float pib1;
    

    //carta2
    char estado2[1];
    char cidade2[40];
    int populacao2;
    int pontoturistico2;
    float area2;
    float pib2;

    //captura de dados
    printf("Carta 1:\n");
    printf("Estado(Letra de A a H):\n");
    scanf("%s", estado1);
    printf("Qual o nome da cidade? \n");
    scanf("%s", cidade1);
    printf("População:\n");
    scanf("%d", &populacao1);
    printf("Pontos turisticos:\n");
    scanf("%d", &pontoturistico1);
    printf("Qual a área em km²?\n");
    scanf("%f", &area1);
    printf("Qual o pib?\n");
    scanf("%f", &pib1);

    printf("Carta 2:\n");
    printf("Estado(Letra de A a H):\n");
    scanf("%s", estado2);
    printf("Qual o nome da cidade? \n");
    scanf("%s", cidade2);
    printf("População:\n");
    scanf("%d", &populacao2);
    printf("Pontos turisticos:\n");
    scanf("%d", &pontoturistico2);
    printf("Qual a área em km²?\n");
    scanf("%f", &area2);
    printf("Qual o pib?\n");
    scanf("%f", &pib2);

    
    
  
    printf("Estado: %s\n", estado1);
    printf("carta: %c01\n", estado1[0]);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Pontos turisticos: %d\n", pontoturistico1);
    printf("Area: %.2f\n", area1);
    printf("Pib: %.2f\n", pib1);

    printf("Estado: %s\n", estado2);
    printf("carta: %c02\n", estado2[0]);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Pontos turisticos: %d\n", pontoturistico2);
    printf("Area: %.2f\n", area2);
    printf("Pib: %.2f\n", pib2);

   

    return 0;
}
