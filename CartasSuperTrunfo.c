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
    char CodCidade[20];

    // Nesta parte irei definir as váriaveis, no caso os atributos presentes em cada carta.

    char nome[50];
    int população;
    float Área;
    float PIB;
    int  PT;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
   printf("Bem Vindo, ao cadastro de cartas do SuperTrunfo - Estados, para que tenhamos um jogo justo e decente, peço que prestem atenção no preenchimento dos dados das cartas.\n Dito isso, espero que tenha um bom jogo.");
   
   printf("Registro de Cartas do SuperTrunfo - Estados: Primeira Carta...");

    //Depois de uma pequena introdução vou fazer a sequência de comandos que vão tratar do registro da carta.

   printf("Insira a letra Identificadora do Estado dentre as disponiveis (de A a H):");
   scanf("%c \n", Estado);

   printf("Insira o Código da Cidade (valores de 01 a 04):");
   scanf("%s \n", CodCidade);

   






    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
