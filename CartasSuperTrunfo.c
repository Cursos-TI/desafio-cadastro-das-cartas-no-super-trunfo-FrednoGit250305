#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    // Definição de variáveis separadas para cada atributo da cidade.
    // Definição das variáveis para as duas cartas.

    char estado1 = 'A';
    int cdgo1 = 1;
    char city1 [20] = "SP";
    int povo1 = 10;
    float area1 = 8;
    float pib1 = 7;
    int locais1 = 6;

    char estado2 = 'B';
    int cdgo2 = 1;
    char city2 [20] = "BH";
    int povo2 = 5;
    float area2 = 4;
    float pib2 = 3;
    int locais2 = 2;

    // Cadastro das Cartas:
    // Utilização da função scanf para capturar as entradas do usuário para cada atributo.
    // Solicitação ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf ("Digite uma letra de A até H para representar o primeiro estado : \n");
    scanf ("%c",&estado1);

    printf ("Digite um número de 1 até 4 para representar o código desse estado : \n");
    scanf ("%i",&cdgo1);

    printf ("Digite o nome da cidade : \n");
    scanf ("%s",&city1);

    printf ("Digite a populção dessa cidade : \n");
    scanf ("%i",&povo1);

    printf ("Digite a área dessa cidade : \n");
    scanf ("%f",&area1);

    printf ("Digite o PIB dessa cidade : \n");
    scanf ("%f",&pib1);

    printf ("Digite a quantidade de locais turísticos dessa cidade : \n");
    scanf ("%i",&locais1);
    
    printf ("Digite uma letra de A até H para representar o segundo estado : \n");
    scanf ("%s",&estado2);

    printf ("Digite um número de 1 até 4 para representar o código desse estado : \n");
    scanf ("%i",&cdgo2);

    printf ("Digite o nome da cidade : \n");
    scanf ("%s",&city2);

    printf ("Digite a população dessa cidade : \n");
    scanf ("%i",&povo2);

    printf ("Digite a área dessa cidade : \n");
    scanf ("%f",&area2);

    printf ("Digite o PIB dessa cidade : \n");
    scanf ("%f",&pib2);

    printf ("Digite a quantidade de locais turísticos dessa cidade : \n");
    scanf ("%i",&locais2);

    // Exibição dos Dados das Cartas:
    // Exibição das informações das cartas cadastradas de forma clara e organizada.
    // Exibição dos valores inseridos para cada atributo da cidade, um por linha.

    printf ("====================================== \n");

    printf ("Primeiro estado : %c \n",estado1);
    printf ("Código desse estado : %c0%i \n",estado1,cdgo1);
    printf ("Cidade : %s \n",city1);
    printf ("População : %i \n",povo1);
    printf ("Área : %.2f km2 \n",area1);
    printf ("PIB : %.2f \n",pib1);
    printf ("Quantidade de locais turísticos : %i \n",locais1);

    printf ("====================================== \n");
    
    printf ("Segundo estado : %c \n",estado2);
    printf ("Código desse estado : %c0%i \n",estado2,cdgo2);
    printf ("Cidade : %s \n",city2);
    printf ("População : %i\n",povo2);
    printf ("Área : %.2f km2 \n",area2);
    printf ("PIB : %.2f \n",pib2);
    printf ("Quantidade de locais turísticos : %i \n",locais2);

    printf ("====================================== \n");


    return 0;
}
