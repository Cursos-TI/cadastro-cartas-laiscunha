#include <stdio.h>

int main() {


    printf("Desafio Super Trunfo\n");

   
    char estado1;
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

   
    char estado2;
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

   
    char estado3;
    char codigo3[10];
    char cidade3[50];
    int populacao3;
    float area3;
    float pib3;
    int pontos3;


    char estado4;
    char codigo4[10];
    char cidade4[50];
    int populacao4;
    float area4;
    float pib4;
    int pontos4;



    
    printf("\nDigite os dados da carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1); 
    printf("Codigo: ");
    scanf(" %s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %s", cidade1);
    printf("Populacao: ");
    scanf(" %d", &populacao1);
    printf("Area (km2): ");
    scanf(" %f", &area1);
    printf("PIB: ");
    scanf(" %f", &pib1);
    printf("Pontos Turisticos: ");
    scanf(" %d", &pontos1);

   
    printf("\nDigite os dados da carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo: ");
    scanf(" %s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %s", cidade2);
    printf("Populacao: ");
    scanf(" %d", &populacao2);
    printf("Area (km2): ");
    scanf(" %f", &area2);
    printf("PIB: ");
    scanf(" %f", &pib2);
    printf("Pontos Turisticos: ");
    scanf(" %d", &pontos2);


    printf("\nDigite os dados da carta 3:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado3);
    printf("Codigo: ");
    scanf(" %s", codigo3);
    printf("Nome da Cidade: ");
    scanf(" %s", cidade3);
    printf("Populacao: ");
    scanf(" %d", &populacao3);
    printf("Area (km2): ");
    scanf(" %f", &area3);
    printf("PIB: ");
    scanf(" %f", &pib3);
    printf("Pontos Turisticos: ");
    scanf(" %d", &pontos3);


    printf("\nDigite os dados da carta 4:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado4);
    printf("Codigo: ");
    scanf(" %s", codigo4);
    printf("Nome da Cidade: ");
    scanf(" %s", cidade4);
    printf("Populacao: ");
    scanf(" %d", &populacao4);
    printf("Area (km2): ");
    scanf(" %f", &area4);
    printf("PIB: ");
    scanf(" %f", &pib4);
    printf("Pontos Turisticos: ");
    scanf(" %d", &pontos4);



    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    printf("\nCarta 3:\n");
    printf("Estado: %c\n", estado3);
    printf("Código: %s\n", codigo3);
    printf("Nome da Cidade: %s\n", cidade3);
    printf("População: %d\n", populacao3);
    printf("Área: %.2f km2\n", area3);
    printf("PIB: %.2f bilhões de reais\n", pib3);
    printf("Número de Pontos Turísticos: %d\n", pontos3);

    printf("\nCarta 4:\n");
    printf("Estado: %c\n", estado4);
    printf("Código: %s\n", codigo4);
    printf("Nome da Cidade: %s\n", cidade4);
    printf("População: %d\n", populacao4);
    printf("Área: %.2f km2\n", area4);
    printf("PIB: %.2f bilhões de reais\n", pib4);
    printf("Número de Pontos Turísticos: %d\n", pontos4);

    return 0;
}
