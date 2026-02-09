#include <stdio.h>

int main() {

    char estado1[3], codigo1[10];
    int populacao1, pontos1;
    float area1, pib1;
    

    char estado2[3], codigo2[10];
    int populacao2, pontos2;
    float area2, pib2;


    printf("Digite os dados da Carta 1:\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Digite os dados da Carta 2:\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("PIB: ");
    scanf("%f", &pib2);


    printf("Comparação de cartas (PIB):\n");


    printf("Carta 1 - %s: %.2f\n", estado1, pib1);
    printf("Carta 2 - %s: %.2f\n", estado2, pib2);

    
    if (pib1 > pib2) {
        
        printf("Resultado: Carta 1 (%s) venceu!\n", estado1);
    } else if (pib2 > pib1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", estado2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}