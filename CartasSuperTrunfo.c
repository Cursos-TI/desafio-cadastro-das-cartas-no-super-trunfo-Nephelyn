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
    float densidade1;
    float pibcapta1;
    float densidadeinv1;
    float superpoder1;

    

    //carta2
    char estado2[1];
    char cidade2[40];
    int populacao2;
    int pontoturistico2;
    float area2;
    float pib2;
    float densidade2;
    float pibcapta2;
    float densidadeinv2;
    float superpoder2;

    int resultado;
    
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
    densidade1 = (float)populacao1 / area1;
    pibcapta1 = pib1/populacao1;
    densidadeinv1 = area1/(float)populacao1;
    superpoder1 = populacao2 + pontoturistico2 + area2 + pib2 + pibcapta2 + (area2/populacao2);

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
    densidade2 = (float)populacao2 / area2;
    pibcapta2 = pib2/populacao2;
    densidadeinv2 = area2/(float)populacao2;
    superpoder2 = populacao1 + pontoturistico1 + area1 + pib1 + pibcapta1 + (area1/populacao1);
    
    
  
    printf("Estado: %s\n", estado1);
    printf("carta: %c01\n", estado1[0]);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Pontos turisticos: %d\n", pontoturistico1);
    printf("Area: %.2f\n", area1);
    printf("Pib: %.2f\n", pib1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("Pib per capita: %.2f\n", pibcapta1);
    printf("superpoder é: %.2f\n", superpoder1);

    printf("Estado: %s\n", estado2);
    printf("carta: %c02\n", estado2[0]);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Pontos turisticos: %d\n", pontoturistico2);
    printf("Area: %.2f\n", area2);
    printf("Pib: %.2f\n", pib2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("Pib per capita: %.2f\n", pibcapta2);
    printf("superpoder é: %.2f\n", superpoder2);

    // comparação de resultados
    resultado = populacao1 > populacao2;
    printf(" O estado %s tem mais populacao que o estado %s: %d\n", estado1, estado2, populacao1 > populacao2);
    resultado = area1 > area2;
    printf(" O estado %s tem mais area que O Estado %s: %d\n", estado1, estado2, area1 > area2);
    resultado = pib1 > pib2;
    printf(" O estado %s tem mais pib que O Estado %s: %d\n", estado1, estado2, pib1 > pib2);
    resultado = pontoturistico1 > pontoturistico2;
    printf(" O estado %s tem mais pontos turisticos que O Estado %s: %d\n", estado1, estado2, pontoturistico1 > pontoturistico2);
    resultado = densidade1 > densidade2;
    printf(" O estado %s tem mais densidade populacional que o estado %s: %d\n", estado1, estado2, densidade1 > densidade2);
    resultado = pibcapta1 > pibcapta2;
    printf(" O estado %s tem mais pib per capita que o estado %s: %d\n", estado1, estado2, pibcapta1 > pibcapta2);
    resultado = superpoder1 > superpoder2;
    printf(" O estado %s tem mais super poder que o estado %s: %d\n", estado1, estado2, superpoder1 > superpoder2);


   

    return 0;
}
