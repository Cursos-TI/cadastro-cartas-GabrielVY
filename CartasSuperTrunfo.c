#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Carta 1
  char estado1;
  char codigo_carta1[4];
  char cidade1[25];
  int populacao1;
  float densidade_pop1;
  float area1;
  float pib1;
  float pib_capita1;
  int pontos_turisticos1;
  
  // Carta 2
  char estado2;
  char codigo_carta2[4];
  char cidade2[25];
  int populacao2;
  float densidade_pop2;
  float area2;
  float pib2;
  float pib_capita2;
  int pontos_turisticos2;

  // Área para entrada de dados
  // Entrada Carta 1
  printf("Carta 1: \n");
  printf("Nome do estado (A-H): ");
  scanf("%c", &estado1);
  printf("Codigo da carta (ex: A01): ");
  scanf("%s", codigo_carta1);
  printf("Nome da cidade: ");
  scanf(" %s", cidade1);
  printf("População: ");
  scanf("%d", &populacao1);
  printf("Area (em km²): ");
  scanf("%f", &area1);
  printf("PIB: ");
  scanf("%f", &pib1);
  printf("Número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos1);

  // Entrada Carta 2
  printf("\nCarta 2: \n");
  printf("Nome do estado (A-H): ");
  scanf(" %c", &estado2);
  printf("Codigo da carta (ex: A01): ");
  scanf("%s", codigo_carta2);
  printf("Nome da cidade: ");
  scanf(" %s", cidade2);
  printf("População: ");
  scanf("%d", &populacao2);
  printf("Area (em km²): ");
  scanf("%f", &area2);
  printf("PIB: ");
  scanf("%f", &pib2);
  printf("Número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos2);

  // Calcula alguns dados com base na informações providas
  pib_capita1 = pib1 / populacao1;
  pib_capita2 = pib2 / populacao2;
  densidade_pop1 = populacao1 / area1;
  densidade_pop2 = populacao2 / area2;

  // Área para exibição dos dados da cidade
  printf(" \nExibindo dados... \n");

  // Exibição da Carta 1
  printf("Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo_carta1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop1);
  printf("Área: %.2f\n", area1);
  printf("PIB: %.2f reais\n", pib1);
  printf("PIB per Capita : %.2f reais\n", pib_capita1);
  printf("Número de Pontos Turísticos: %d", pontos_turisticos1);

  // Exibição da Carta 2
  printf("\n\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo_carta2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop2);
  printf("Área: %.2f\n", area2);
  printf("PIB: %.2f reais\n", pib2);
  printf("PIB per Capita : %.2f reais\n", pib_capita2);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

  return 0;
} 
