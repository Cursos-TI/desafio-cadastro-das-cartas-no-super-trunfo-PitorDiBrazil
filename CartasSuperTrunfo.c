#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    

    //Variáveis Primeira Carta

    char Estado;
    char CodCidade[10];

    char nome[50];
    int populacão;
    float Área;
    float PIB;
    int  PT;



    // Introdução rápida sobre o jogo
    
   printf("Bem Vindo, ao cadastro de cartas do SuperTrunfo - Estados, para que tenhamos um jogo justo e decente, peço que prestem atenção no preenchimento dos dados das cartas. Dito isso, espero que tenha um bom jogo.\n");
   
   printf("Registro de Cartas do SuperTrunfo - Estados: Primeira Carta...\n");

    //Registros da Primeira Carta

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

    //Novas variáveis que representam a carta 2

    char Estado1;
    char CodCidade1[10];

    char nome1[50];
    int populacão1;
    float Área1;
    float PIB1;
    int  PT1;
    
    printf("Registro de Cartas do SuperTrunfo - Estados. Segunda Carta...\n");

    //Comandos de registro da segunda carta

   printf("Insira a letra Identificadora do Estado dentre as disponiveis (de A a H):");
   scanf(" %c", &Estado1);

   printf("Insira o Código da Cidade (valores de 01 a 04):");
   scanf("%s", CodCidade1);

   printf("Insira o nome da cidade:");
   scanf("%s", nome1);

   printf("Insira a população da cidade:");
   scanf("%i", &populacão1);

   printf("Insira a Área da cidade em KM²:");
   scanf("%f", &Área1);

   printf("Insira o PIB da cidade:");
   scanf("%f", &PIB1);

   printf("Insira a quantidade de Pontos Turisticos presentes na cidade:");
   scanf("%i", &PT1);
   
    // Variáveis calculadas Carta 1

    float DensiPop = populacão / Área;
    float PIBperC = PIB / populacão;

    //variáveis calculadas carta 2
    
    float DensiPop1 = populacão1/Área1;
    float PIBperC1 = PIB1/populacão1;

   // Exibição das Cartas

   // Primeira Carta

   printf("Aqui está sua primeira carta de código %s: \n", CodCidade);
   printf("Estado: %c \n", Estado);
   printf("Cidade: %s \n", nome);
   printf("População: %i \n", populacão);
   printf("Área KM²: %.3f km² \n", Área);
   printf("PIB:R$ %.2f \n", PIB);
   printf("Pontos Turísticos: %i \n", PT);
   printf("Densidade Populacional: %.2f \n", DensiPop);
   printf("PIB per Capita: %.2f \n", PIBperC);

   //Segunda Carta

   printf("Aqui está sua segunda carta de código %s: \n", CodCidade1);
   printf("Estado: %c \n", Estado1);
   printf("Cidade: %s \n", nome1);
   printf("População: %i \n", populacão1);
   printf("Área KM²: %.3f km²\n", Área1);
   printf("PIB:R$ %.2f \n", PIB1);
   printf("Pontos Turísticos: %i \n", PT1);
   printf("Densidade Populacional: %.2f \n", DensiPop1);
   printf("PIB per Capita: %.2f \n", PIBperC1);;

    return 0;
}