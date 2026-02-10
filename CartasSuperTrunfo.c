#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    int populacao1, pontos_turisticos1;
    char estado1, cidade1[50], codigo1[4];
    float area1, pib1;
    int populacao2, pontos_turisticos2;
    char estado2, cidade2[50], codigo2[4];
    float area2, pib2;

  // Área para entrada de dados

  // vamos pegar os dados da primeira carta:
    printf("----- DIGITANDO PRIMEIRA CARTA -----\n");
    printf("Digite a letra do primeiro estado: ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (com a letra do estado mais um número de 01 à 04): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", cidade1);
    printf("Digite o valor da população: ");
    scanf(" %d", &populacao1);
    printf("Digite o valor da área: ");
    scanf("%f", &area1);
    printf("Digite o valor do PIB: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // vamos pegar os dados da segunda carta:
    printf("\n----- DIGITANDO SEGUNDA CARTA -----\n");
    printf("Digite a letra do segundo estado: ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (com a letra do estado mais um número de 01 à 04): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", cidade2);
    printf("Digite o valor da população: ");
    scanf(" %d", &populacao2);
    printf("Digite o valor da área: ");
    scanf("%f", &area2);
    printf("Digite o valor do PIB: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

  // Área para exibição dos dados da cidade

  // exibindo os resultados da primeira carta:
    printf("\n----- PRIMEIRA CARTA -----\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populção: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontos_turisticos1);

    // exibindo os resultados da segunda carta:
    printf("\n----- SEGUNDA CARTA -----\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populção: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontos_turisticos2);

return 0;
} 
