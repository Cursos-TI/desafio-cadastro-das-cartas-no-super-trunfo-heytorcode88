#include <stdio.h>

int main(){

    char estado1 = 'A';
    char codigo1[5] = "A01";
    char cidade1[50] = "Rio de Janeiro";
    int populacao1 = 200.000000;
    float area1 = 50.000;
    float pib1 = 95.000000;
    int turisticos1 = 40;
    float densidade1, pibpercapita1; 


    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos túristicos: %d\n", turisticos1);

    densidade1 = (float) populacao1 / area1;
    printf("Densidade Populacional: %f\n", densidade1);

    pibpercapita1 = (float) pib1 / populacao1;
    printf("PIB per Capita: %f\n", pibpercapita1);



    char estado2 = 'B';
    char codigo2[5] = "B02";
    char cidade2[50] = "São Paulo";
    int populacao2 = 300.000000;
    float area2 = 60.000;
    float pib2 = 950.000000;
    int turisticos2 = 50;
    float densidade2, pibpercapita2;


    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos túristicos: %d\n", turisticos2);


    densidade2 = (float) populacao2 / area2;
    printf("Densidade Populacional: %f\n", densidade2);

    pibpercapita2 = (float) pib2 / populacao2;
    printf("PIB per Capita: %f\n", pibpercapita2);





    return 0;


}