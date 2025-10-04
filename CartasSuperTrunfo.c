#include <stdio.h>

int main(){

    char estado1 = 'A';
    char codigo1[5] = "A01";
    char cidade1[50] = "Rio de Janeiro";
    unsigned long int populacao1 = 200.000000;
    float area1 = 50.000;
    float pib1 = 95.000000;
    int turisticos1 = 40;
    float densidade1, pibpercapita1, superpoder1;

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %ld\n", populacao1);
    printf("Área em km²: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos túristicos: %d\n", turisticos1);

    densidade1 = (float) populacao1 / area1;
    printf("Densidade Populacional: %f\n", densidade1);

    pibpercapita1 = (float) pib1 / populacao1;
    printf("PIB per Capita: %f\n", pibpercapita1);

    superpoder1 = populacao1 + area1 + pib1 + turisticos1 + pibpercapita1;
    printf("Super Poder: %.2f\n", superpoder1);
    
    printf("------------------------\n");

    char estado2 = 'B';
    char codigo2[5] = "B02";
    char cidade2[50] = "São Paulo";
    unsigned long int populacao2 = 300.000000;
    float area2 = 60.000;
    float pib2 = 950.000000;
    int turisticos2 = 50;
    float densidade2, pibpercapita2, superpoder2;


    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %ld\n", populacao2);
    printf("Área em km²: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos túristicos: %d\n", turisticos2);


    densidade2 = (float) populacao2 / area2;
    printf("Densidade Populacional: %f\n", densidade2);

    pibpercapita2 = (float) pib2 / populacao2;
    printf("PIB per Capita: %f\n", pibpercapita2);
    
    superpoder2 =  populacao2 + area2 + pib2 + turisticos2 + pibpercapita2;
    printf("Super Poder: %.2f\n", superpoder2);


    printf("** Comparação de Cartas ***\n");
    
    int resultado1 = populacao1 > populacao2;
    int resultado2 = area1 > area2;
    int resultado3 = pib1 > pib2;
    int resultado4 = turisticos1 > turisticos2;
    int resultado5 = densidade1 < densidade2;
    int resultado6 = pibpercapita1 > pibpercapita2;
    int resultado7 = superpoder1 > superpoder2;

    printf("População da carta A é maior que carta B?: %d\n", resultado1);
    printf("Área da carta A é maior que carta B?: %d\n", resultado2);
    printf("PIB da carta A é maior que carta B?: %d\n", resultado3);
    printf("Pontos Turísticos da carta A é maior que carta B?: %d\n", resultado4);
    printf("Desidade Populacional da carta A é menor que carta B?: %d\n", resultado5);
    printf("PIB per cápita da carta A é maior que carta B?: %d\n", resultado6);
    printf("Super Poder da carta A é maior que carta B?: %d\n", resultado7);

    return 0;
}