#include <stdio.h>

int main() {
    // Variáveis para as duas cartas
    char estado1='A', codigo1[3]= "AO1", nomeCidade1[100];
    int populacao1= 12300000, pontosTuristicos1= 50;
    float area1=1500.11, pib1=699;

    char estado2='B', codigo2[3]= "BO2", nomeCidade2[100];
    int populacao2= 6700000, pontosTuristicos2= 30;
    float area2=1200, pib2=300;

    // Carta 1
    printf("Digite os dados da Carta 1: \n");

    printf("Estado (A-H): \n");
    scanf(" %c", &estado1);

    printf("Código da Carta: \n ");
    scanf("%s\n", codigo1);

    printf("Nome da Cidade: \n");
    scanf(" %s\n", nomeCidade1); 

    printf("População: \n");
    scanf("%d\n", &populacao1);

    printf("Área: \n ");
    scanf("%f km²\n", &area1);

    printf("PIB: \n ");
    scanf("%f bilhoes\n", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d\n", &pontosTuristicos1);

    // Carta 2
    printf("Digite os dados da Carta 2: \n");

    printf("Estado (A-H): \n");
    scanf(" %c\n", &estado2);

    printf("Código da Carta:\n ");
    scanf("%s\n", codigo2);

    printf("Nome da Cidade: \n");
    scanf(" %s\n", nomeCidade2);

    printf("População: \n");
    scanf("%d\n", &populacao2);

    printf("Área: \n");
    scanf("%f km²\n", &area2);

    printf("PIB:\n ");
    scanf("%f\n", &pib2);

    printf("Número de Pontos Turísticos: \n ");
    scanf("%d\n", &pontosTuristicos2);

    // Exibição dos dados
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;



}











