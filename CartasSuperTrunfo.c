#include <stdio.h>

int main(){

    char estado1[3],estado2[3];
    char codigo1[5], codigo2[5];
    char cidade1[60], cidade2[60];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turisticos1, turisticos2;
    float densidade1, pibpercapita1, superpoder1;
    float densidade2, pibpercapita2, superpoder2;

    printf("Insira o estado:\n");
    scanf(" %2s", &estado1);
    
    printf("Insira o código da carta:\n");
    scanf(" %4s", &codigo1);

    printf("Insira a cidade:\n");
    scanf(" %59s", &cidade1);


    printf("Insira a população:\n");
    scanf("%lu", &populacao1);

    printf("Insira a área em km²:\n");
    scanf ("%f", &area1);

    printf("Insira o PIB:\n");
    scanf("%f", &pib1);

    printf("Insira os pontos turísticos:\n");
    scanf("%d", &turisticos1);

    densidade1 = (float) populacao1 / area1;
    printf("Densidade Populacional: %f\n", densidade1);

    pibpercapita1 = (float) pib1 / populacao1;
    printf("PIB per Capita: %f\n", pibpercapita1);

    superpoder1 = populacao1 + area1 + pib1 + turisticos1 + pibpercapita1;
    printf("Super Poder: %.2f\n", superpoder1);
      

    printf("Insira o estado\n");
    scanf("%2s", &estado2);
    
    printf("Insira o código:\n");
    scanf("%4s", &codigo2);

    printf("Insira a cidade:\n");
    scanf("%59s", &cidade2);

    printf("Insira a população:\n");
    scanf("%lu", &populacao2);

    printf("Insira a área em km²:\n");
    scanf ("%f", &area2);

    printf("Insira o PIB:\n");
    scanf("%f", &pib2);

    printf("Insira os pontos túristicos:\n");
    scanf("%d", &turisticos2);


    densidade2 = (float) populacao2 / area2;
    printf("Densidade Populacional: %f\n", densidade2);

    pibpercapita2 = (float) pib2 / populacao2;
    printf("PIB per Capita: %f\n", pibpercapita2);
    
    superpoder2 =  populacao2 + area2 + pib2 + turisticos2 + pibpercapita2;
    printf("Super Poder: %.2f\n", superpoder2);


    printf("***Comparação de Cartas ***\n");        
   
     printf("Comparando população\n");

     printf("Carta %s - %s - %s : %lu\n", codigo1, cidade1, estado1, populacao1);
     printf("Carta %s - %s - %s : %lu\n", codigo2, cidade2, estado2, populacao2);

    if(populacao1 > populacao2){
       printf("Carta %s venceu!\n", codigo1);
    } else{
       printf("Carta %s venceu!\n", codigo2);
    }
 
    printf("Comparando área por km²\n");

     printf("Carta %s - %s - %s : %f\n", codigo1, cidade1, estado1, area1);
     printf("Carta %s - %s - %s : %f\n", codigo2, cidade2, estado2, area2);

    if(area1 > area2){
       printf("Carta %s venceu!\n", codigo1);
    } else{
       printf("Carta %s venceu!\n", codigo2);
    }

    printf("Comparando PIB\n");

    printf("Carta %s - %s - %s : %f\n", codigo1, cidade1, estado1, pib1);
    printf("Carta %s - %s - %s : %f\n", codigo2, cidade2, estado2, pib2);
    if(pib1 > pib2){
       printf("Carta %s venceu!\n", codigo1);
    } else{
       printf("Carta %s venceu!\n", codigo2);
    }
    
    printf("Comparando densidade populacional\n");

    printf("Carta %s - %s - %s : %f\n", codigo1, cidade1, estado1, densidade1);
    printf("Carta %s - %s - %s : %f\n", codigo2, cidade2, estado2, densidade2);

    if(densidade1 < densidade2){
       printf("Carta %s venceu!\n", codigo1);
    } else{
       printf("Carta %s venceu!\n", codigo2);
    }
    
     printf("Comparando superpoder\n");

    printf("Carta %s - %s - %s : %f\n", codigo1, cidade1, estado1, superpoder1);
    printf("Carta %s - %s - %s : %f\n", codigo2, cidade2, estado2, superpoder2);

    if(superpoder1 > superpoder2){
       printf("Carta %s venceu!\n", codigo1);
    } else{
       printf("Carta %s venceu!\n", codigo2);
    }


    return 0;
}