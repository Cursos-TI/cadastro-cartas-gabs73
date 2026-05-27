#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades 
  char nome_1[30], nome_2[30],cod_1[4], cod_2[4];
  int  populacao_1, populacao_2, turismo_1, turismo_2;
  float area_1, area_2, pib_1, pib_2;
  // Área para entrada de dados
  printf("Dados da primeira carta:\n");
    printf("Informe o codigo da carta (A a H) + (1 a 4):\n");
      scanf("%s",cod_1);
    printf("Informe o nome da cidade da carta:\n");
      scanf("%s",nome_1);
    printf("Informe a populacao da carta:\n");
      scanf("%i",&populacao_1);
    printf("Informe a area em km2 da carta:\n");
      scanf("%f",&area_1);
    printf("Informe o PIB da carta:\n");
      scanf("%f",&pib_1);
    printf("Informe o numero de pontos turisticos da carta:\n");
      scanf("%i",&turismo_1);

  printf("Dados da segunda carta:\n");  
    printf("Informe o codigo da carta (A a H) + (1 a 4):\n");
      scanf("%s",cod_2);
    printf("Informe o nome da cidade da carta:\n");
      scanf("%s",nome_2);
    printf("Informe a populacao da carta:\n");
      scanf("%i",&populacao_2);
    printf("Informe a area em km2 da carta:\n");
      scanf("%f",&area_2);
    printf("Informe o PIB da carta:\n");
      scanf("%f",&pib_2);
    printf("Informe o numero de pontos turisticos da carta:\n");
      scanf("%i",&turismo_2);
  
  // Área para exibição dos dados da cidade
  printf("Dados cadastrados da primeira carta:\n");
  printf("Codigo: %s\n",cod_1);
  printf("Nome: %s\n",nome_1);
  printf("Populacao: %i habitantes\n",populacao_1);
  printf("Area: %.2f km2\n",area_1);
  printf("PIB: %.2f Reais\n",pib_1);
  printf("Pontos turisticos: %i\n",turismo_1);

  printf("Dados cadastrados da segunda carta:\n");
  printf("Codigo: %s\n",cod_2);
  printf("Nome: %s\n",nome_2);
  printf("Populacao: %i habitantes\n",populacao_2);
  printf("Area: %.2f km2\n",area_2);
  printf("PIB: %.2f Reais\n",pib_2);
  printf("Pontos turisticos: %i\n",turismo_2);

return 0;
} 
