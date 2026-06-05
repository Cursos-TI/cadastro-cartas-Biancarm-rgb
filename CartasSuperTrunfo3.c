#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
    unsigned long int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    char estado1, cidade1[50], codigo1[4], estado2, cidade2[50], codigo2[4];
    float area1, area2, pib_per_capita1, pib_per_capita2, densidade1, densidade2;
    double pib1, pib2;
    float super_poder1, super_poder2;


    // vamos pegar os dados da primeira carta:
    printf("Digite a letra do primeiro estado: ");
    scanf("%c", &estado1);
    printf("Digite o código da carta (com a letra do estado mais um número de 01 à 04): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    getchar();
    fgets( cidade1, 50, stdin);
    printf("Digite o valor da população: ");
    scanf("%lu", &populacao1);
    printf("Digite o valor da área: ");
    scanf("%f", &area1);
    printf("Digite o valor do PIB: ");
    scanf("%lf", &pib1);
    pib1 = pib1*1000000000;
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // vamos pegar os dados da segunda carta:
    printf("\nDigite a letra do segundo estado: ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (com a letra do estado mais um número de 01 à 04): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    getchar();
    fgets( cidade2, 50, stdin);
    printf("Digite o valor da população: ");
    scanf("%lu", &populacao2);
    printf("Digite o valor da área: ");
    scanf("%f", &area2);
    printf("Digite o valor do PIB: ");
    scanf("%lf", &pib2);
    pib2 = pib2*1000000000;
    printf("Digite o núemro de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos:
    densidade1 = populacao1/area1;
    densidade2 = populacao2/area2;
    pib_per_capita1 = pib1/populacao1;
    pib_per_capita2 = pib2/populacao2;

    super_poder1 = (float)populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade1);
    super_poder2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade2);

    // Comparações:
    printf("\nComparação de Cartas:\n\n");

    printf("População: Carta %d venceu (%d)\n",
        (populacao1 > populacao2 ? 1 : 2),
        (populacao1 > populacao2));

    printf("Área: Carta %d venceu (%d)\n",
        (area1 > area2 ? 1 : 2),
        (area1 > area2));

    printf("PIB: Carta %d venceu (%d)\n",
        (pib1 > pib2 ? 1 : 2),
        (pib1 > pib2));

    printf("Pontos Turísticos: Carta %d venceu (%d)\n",
        (pontos_turisticos1 > pontos_turisticos2 ? 1 : 2),
        (pontos_turisticos1 > pontos_turisticos2));

    // regra invertida
    printf("Densidade Populacional: Carta %d venceu (%d)\n",
        (densidade1 < densidade2 ? 1 : 2),
        (densidade1 < densidade2));

    printf("PIB per Capita: Carta %d venceu (%d)\n",
        (pib_per_capita1 > pib_per_capita2 ? 1 : 2),
        (pib_per_capita1 > pib_per_capita2));

    printf("Super Poder: Carta %d venceu (%d)\n",
        (super_poder1 > super_poder2 ? 1 : 2),
        (super_poder1 > super_poder2));

return 0;
}