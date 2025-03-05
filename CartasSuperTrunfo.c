#include <stdio.h>

int main() {
    printf("DESAFIO SUPERTRUNFO!!!\n");
    char nome[50];
    char Codigo[50];
    int populacao;
    float area;
    float pib;
    int pontos;

    printf("Digite o nome do estado: \n");
    scanf("%s", nome);

    printf("Digite o código do estado: \n");
    scanf("%s", &Codigo);

    printf("Digite a população do estado: \n");
    scanf("%e", &populacao);

    printf("Digite a área do estado: \n");
    scanf("%f", &area);

    printf("Digite o PIB do estado: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos do estado: \n");
    scanf("%d", &pontos);

    printf("Estado: %s\n", nome);
    printf("Código: %s\n", Codigo);
    printf("População: %d\n", populacao);
    printf("Área em km²: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontos);

    return 0;
}
