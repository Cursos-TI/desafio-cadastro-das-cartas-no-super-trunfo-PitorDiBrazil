#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    

    // Dados de Identificação

    char Estado;
    char CodCidade[10];

    // Nesta parte irei definir as váriaveis, no caso os atributos presentes em cada carta.

    char nome[50];
    int populacão;
    float Área;
    float PIB;
    int  PT;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
   printf("Bem Vindo, ao cadastro de cartas do SuperTrunfo - Estados, para que tenhamos um jogo justo e decente, peço que prestem atenção no preenchimento dos dados das cartas. Dito isso, espero que tenha um bom jogo.\n");
   
   printf("Registro de Cartas do SuperTrunfo - Estados: Primeira Carta...\n");

    //Depois de uma pequena introdução vou fazer a sequência de comandos que vão tratar do registro da carta.

   printf("Insira a letra Identificadora do Estado dentre as disponiveis (de A a H):");
   scanf(" %c", &Estado);

   printf("Insira o Código da Cidade (valores de 01 a 04):");
   scanf("%s", CodCidade);

   printf("Insira o nome da cidade:");
   scanf("%s", nome);

   printf("Insira a população da cidade:");
   scanf("%i", &populacão);

   printf("Insira a Área da cidade em KM²:");
   scanf("%f", &Área);

   printf("Insira o PIB da cidade:");
   scanf("%f", &PIB);

   printf("Insira a quantidade de Pontos Turisticos presentes na cidade:");
   scanf("%i", &PT);

/* Agr com todas as perguntas funcionando perfeitamente e o terminal funcionando de forma correta irei criar novamente variáveis novas para a segunda carta 
    e no final de ambos os registros será exibida a as duas cartas. */

    // Antes de criar novas váriaveis vou testar para ver se é possível registrar a primeira carta exibir e depois registrar a segunda.

    printf("Aqui está sua primeira carta de código %s: \n", CodCidade);
    printf("Estado: %c \n", Estado);
    printf("Cidade: %s \n", nome);
    printf("População: %i \n", populacão);
    printf("Área KM²: %.3f km²\n", Área);
    printf("PIB:R$ %.2f \n", PIB);
    printf("Pontos Turísticos: %i", PT);
    
    printf("Registro de Cartas do SuperTrunfo - Estados. Segunda Carta...\n");

    //Depois de uma pequena introdução vou fazer a sequência de comandos que vão tratar do registro da segunda carta.

   printf("Insira a letra Identificadora do Estado dentre as disponiveis (de A a H):");
   scanf(" %c", &Estado);

   printf("Insira o Código da Cidade (valores de 01 a 04):");
   scanf("%s", CodCidade);

   printf("Insira o nome da cidade:");
   scanf("%s", nome);

   printf("Insira a população da cidade:");
   scanf("%i", &populacão);

   printf("Insira a Área da cidade em KM²:");
   scanf("%f", &Área);

   printf("Insira o PIB da cidade:");
   scanf("%f", &PIB);

   printf("Insira a quantidade de Pontos Turisticos presentes na cidade:");
   scanf("%i", &PT);

   printf("Aqui está sua primeira carta de código %s: \n", CodCidade);
   printf("Estado: %c \n", Estado);
   printf("Cidade: %s \n", nome);
   printf("População: %i \n", populacão);
   printf("Área KM²: %.3f km² \n", Área);
   printf("PIB:R$ %.2f \n", PIB);
   printf("Pontos Turísticos: %i", PT);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}