#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Definição das variáveis para as duas cartas.

    char estado1 = 'A';
    int cdg1 = 1;
    char city1 [20] = "SP";
    int população1 = 9;
    float area1 = 8;
    float pib1 = 7;
    int locais1 = 6;

    char estado2 = 'B';
    int cdg2 = 2;
    char city2 [20]; "BH";
    int população2 = 5;
    float area2 = 4;
    float pib2 = 3;
    int locais2 = 2;

    // Cadastro das Cartas:
    // Utilização da função scanf para capturar as entradas do usuário para cada atributo.
    // Solicitação ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf ("Digite uma letra de A até H para representar o primeiro estado : \n");
    scanf ("%c",&estado1);

    printf ("Digite um número de 1 até 4 para representar o código desse estado : \n");
    scanf ("%i",&cdg1);

    printf ("Digite o nome da cidade : \n");
    scanf ("%s",&city1);

    printf ("Digite a populção dessa cidade : \n");
    scanf ("%f",&população1);

    printf ("Digite a área dessa cidade : \n");
    scanf ("%f",&area1);

    printf ("Digite o PIB dessa cidade : \n");
    scanf ("%i",&pib1);

    printf ("Digite a quantidade de locais turísticos dessa cidade : \n");
    scanf ("%i",&locais1);
    
    

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
