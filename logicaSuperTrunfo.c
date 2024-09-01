#include <stdio.h>

int main() {
    char codigo[4];           // Código da carta (Ex: A01, B02)
    char cidade[20];
    char estado[20];
    int Populacao = 1;        // População da cidade
    float Area = 1.5;           // Área da cidade em km²
    float PIB = 1.5;            // PIB da cidade em bilhões
    int PontosTuristicos = 1; // Número de pontos turísticos
    float divisao, cartaA, cartaB;
    float densidadePopulacional = 1;
    int soma;
    
    printf("Digite as informações da primeira carta: ");

    printf("Digite o nome do estado: ");
    scanf("%s", estado);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo);
   
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &Populacao);

    printf("Digite a area da cidade (em km²): ");
    scanf("%f", &Area);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &PontosTuristicos);
    
    divisao = (float) Populacao / Area;
    printf("A Densidade populacional é: %.2f\n", divisao);

    divisao = (float) PIB / Populacao;
    printf("O PIB per capita é: %.2f\n", divisao);

    soma = Populacao + Area + PIB + PontosTuristicos;
    printf("O Super Poder da carta é: %d\n", soma);

    printf("Digite as informações da segunda carta carta: ");

    printf("Digite o nome do estado: ");
    scanf("%s", estado);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo);
   
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &Populacao);

    printf("Digite a area da cidade (em km²): ");
    scanf("%f", &Area);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &PontosTuristicos);
    
    divisao = (float) Populacao / Area;
    printf("A Densidade populacional é: %.2f\n", divisao);

    divisao = (float) PIB / Populacao;
    printf("O PIB per capita é: %.2f\n", divisao);

    soma = Populacao + Area + PIB + PontosTuristicos;
    printf("O Super Poder da carta é: %d\n", soma);

    printf("A seguir digite os valores das cartas:\n");
   
    printf("Digite o valor da primeira carta: ");
    scanf("%f", &cartaA);

    printf("Digite o valor da segunda carta: ");
    scanf("%f", &cartaB);

    
    if (cartaA > cartaB) {
        printf("A primeira carta é a vencedora\n");
    } else {
        printf("A segunda carta é a vencedora\n");
    }
    printf("A seguir digite os valores de densidade populacional\n");

    printf("Digite o valor da primeira carta: ");
    scanf("%f", &cartaA);

    printf("Digite o valor da segunda carta: ");
    scanf("%f", &cartaB);

    if (cartaA < cartaB) {
        printf("A primeira carta é a vencedora\n");
    } else {
        printf("A segunda carta é a vencedora\n");
    }



    return 0;

}