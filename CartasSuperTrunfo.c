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
    int populacao;
    float Area;
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
   scanf("%i", &populacao);

   printf("Insira a Área da cidade em KM²:");
   scanf("%f", &Area);

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
    int populacao1;
    float Area1;
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
   scanf("%i", &populacao1);

   printf("Insira a Área da cidade em KM²:");
   scanf("%f", &Area1);

   printf("Insira o PIB da cidade:");
   scanf("%f", &PIB1);

   printf("Insira a quantidade de Pontos Turisticos presentes na cidade:");
   scanf("%i", &PT1);
   
    // Variáveis calculadas Carta 1

    float DensiPop = populacao / Area;
    float PIBperC = PIB / populacao;
    float SP = populacao + PIB + PIBperC + Area + DensiPop + PT; 

    //variáveis calculadas carta 2
    
    float DensiPop1 = populacao1/Area1;
    float PIBperC1 = PIB1/populacao1;
    float SP1 = populacao1 + PIB1 + PIBperC1 + Area1 + DensiPop1 + PT1;

   // Exibição das Cartas

   // Primeira Carta

   printf("Aqui está sua primeira carta de código %s: \n", CodCidade);
   printf("Estado: %c \n", Estado);
   printf("Cidade: %s \n", nome);
   printf("População: %i \n", populacao);
   printf("Área KM²: %.3f km² \n", Area);
   printf("PIB:R$ %.2f \n", PIB);
   printf("Pontos Turísticos: %i \n", PT);
   printf("Densidade Populacional: %.2f \n", DensiPop);
   printf("PIB per Capita: %.2f \n", PIBperC);
   printf("Super Poder = %0.3f", SP); 

   //Segunda Carta  	

   printf("Aqui está sua segunda carta de código %s: \n", CodCidade1);
   printf("Estado: %c \n", Estado1);
   printf("Cidade: %s \n", nome1);
   printf("População: %i \n", populacao1);
   printf("Área KM²: %.3f km²\n", Area1);
   printf("PIB:R$ %.2f \n", PIB1);
   printf("Pontos Turísticos: %i \n", PT1);
   printf("Densidade Populacional: %.2f \n", DensiPop1);
   printf("PIB per Capita: %.2f \n", PIBperC1);
   printf("Super Poder = %0.3f", SP1); 

    // Nessa parte irei tratar da parte do nível mestre do desafio.
    /*
    1 - Calcular o Super Poder: Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder"). Armazene o Super Poder como float. Atenção: Preste muita atenção na conversão de tipos ao somar valores de tipos diferentes!
    2 - Comparar as Cartas: Compare as duas cartas atributo por atributo (exceto estado, código e nome), incluindo o Super Poder. Lembre-se: para a densidade populacional, a carta com o menor valor vence; para os demais atributos (incluindo Super Poder), a carta com o maior valor vence.
    3 - Exibir os Resultados das Comparações: Para cada atributo, imprima na tela qual carta venceu (Carta 1 ou Carta 2), exibindo o resultado da comparação (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).*/

    // Comparação das Cartas
    printf("(Leve em consideração que o qeu representa a vitória ou derrota naquele quesito é o valor 0 ou 1, respectivamente Derrota ou Vitória!)");
    printf("Comparação de Cartas:\n");
    printf("População: Carta %s venceu %d\n", CodCidade, populacao > populacao1);
    printf("Área: Carta %s venceu %d\n", CodCidade, Area > Area1);
    printf("PIB: Carta %s venceu %d\n", CodCidade, PIB > PIB1);
    printf("Pontos Turísticos: Carta %s venceu %d\n", CodCidade, PT > PT1);
    printf("Densidade Populacional: Carta %s venceu %d\n", CodCidade1, DensiPop1 < DensiPop);
    printf("PIB per Capita: Carta %s venceu %d\n", CodCidade, PIBperC > PIBperC1);
    printf("Super Poder: Carta %s venceu %d\n", CodCidade, SP > SP1);




    return 0;
}

