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
    int soma, opcao1, opcao2, vencedor;
    
    printf("Digite as informações da primeira carta:\n");

    printf("Digite o nome do estado: ");
    scanf("%s", &estado);

    printf("Digite o codigo da carta: ");
    scanf("%s", &codigo);
   
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade);

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

    printf("Digite as informações da segunda carta carta:\n");

    printf("Digite o nome do estado: ");
    scanf("%s", &estado);

    printf("Digite o codigo da carta: ");
    scanf("%s", &codigo);
   
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade);

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

    printf("Escolha a opção deseja:\n");
    printf("1. Comparar cartas.\n");
    printf("2. Regras do jogo.\n");
    printf("3. Sair.\n");

    switch (opcao1)
    {
    case 1:
        printf("Menu para comparar cartas:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos turísticos\n");
        printf("5. Densidade populacional\n");
        printf("6. PIB per capita\n");
        printf("7. Super poder\n");
        printf("Digite a opção que deseja comparar: ");
        scanf("%d", &opcao2);
    
        switch (opcao2){
            case 1:
                printf("Comparando os valores de população: ");
                (cartaA > cartaB) ? printf("A primeira carta é a vencedora\n") : printf("A segunda carta é a vencedora\n");
                                
                break;
                case 2:
                    printf("Comparando os valores de área: ");
                if (cartaA > cartaB){
                    printf("A primeira carta é a vencedora\n");
                } else {
                    printf("A segunda carta é a vencedora\n");
                }
                break;
                case 3:
                    printf("Comparando os valores de PIB: ");
                if (cartaA > cartaB){
                    printf("A primeira carta é a vencedora\n");
                } else {
                    printf("A segunda carta é a vencedora\n");
                }
                break;
                case 4:
                    printf("Comparando os valores de pontos turísticos: ");
                if (cartaA > cartaB){
                    printf("A primeira carta é a vencedora\n");
                } else {
                    printf("A segunda carta é a vencedora\n");
                }
                break;
                case 5:
                    printf("Comparando os valores de densidade populacional: ");
                if (cartaA < cartaB){
                    printf("A primeira carta é a vencedora\n");
                } else {
                    printf("A segunda carta é a vencedora\n");
                }
                break;
                case 6:
                    printf("Comparando os valores de PIB per capita: ");
                if (cartaA > cartaB){
                    printf("A primeira carta é a vencedora\n");
                } else {
                    printf("A segunda carta é a vencedora\n");
                }
                break;
                case 7:
                    printf("Comparando os valores de super poder: ");
                if (cartaA > cartaB){
                    printf("A primeira carta é a vencedora\n");
                } else {
                    printf("A segunda carta é a vencedora\n");
                }
                break;
                default:
                    printf("Opção invalida\n");
                }
    case 2:
        printf("Regras do jogo: ....\n");
        break;
    case 3:
        printf("Saindo do jogo...\n");
        break;
 
    default:
        printf("Opção invalida.\n");
        break;
    }
    

    return 0;

}