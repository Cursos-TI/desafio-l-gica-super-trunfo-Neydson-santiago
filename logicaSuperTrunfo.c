#include <stdio.h>

// Desafio Super Trunfo - Países Tema 1 - Cadastro das Cartas
int main() {
    // Definição de variáveis: estado, código da carta, nome da cidade população, área, PIB, número de pontos turísticos.
    int turisticosa1,turisticosa2,populacaoa1,populacaoa2;
    float areaa1,areaa2,piba1,piba2,densidadea1,densidadea2,pibpercapa1,pibpercapa2,supera1,supera2;
    char estadoa1[20],estadoa2[20],coda1[20],coda2[20],nomea1[20],nomea2[20];

    // Cadastro das Cartas:
    // Solicitando ao usuário que insira as informações de cada cidade: população, área, pib e numero e pontos turisticos
    printf("Digite a nome do estado 1: \n");
    scanf("%s", &estadoa1);

    printf("Digite o codigo da carta 1: \n");
    scanf("%s", &coda1);

    printf("Digite o nome da cidade 1: \n");
    scanf("%s", &nomea1);
    
    printf("Digite a populacao da cidade 1: \n");
    scanf("%d", &populacaoa1);

    printf("Digite a area da cidade 1(exemplo - 22.50): \n");
    scanf("%f", &areaa1);

    printf("Digite o pib da cidade 1(exemplo - 22.50): \n");
    scanf("%f", &piba1);

    printf("Digite a quantidade de numeros turisticos da cidade 1: \n");
    scanf("%d", &turisticosa1);

    printf("Digite a nome do estado 2: \n");
    scanf("%s", &estadoa2);

    printf("Digite o codigo da carta 2: \n");
    scanf("%s", &coda2);

    printf("Digite o nome da cidade 2: \n");
    scanf("%s", &nomea2);

    printf("Digite a populacao da cidade 2: \n");
    scanf("%d", &populacaoa2);

    printf("Digite a area da cidade 2(exemplo - 22.50): \n");
    scanf("%f", &areaa2);

    printf("Digite o pib da cidade 2(exemplo - 22.50): \n");
    scanf("%f", &piba2);

    printf("Digite a quantidade de numeros turisticos da cidade 2: \n");
    scanf("%d", &turisticosa2);

    // Calculo das novas variaveis:
    // Densidade e pib per capita.

    densidadea1 = populacaoa1/areaa1;
    densidadea2 = populacaoa2/areaa2;
    pibpercapa1 = piba1/populacaoa1;
    pibpercapa2 = piba2/populacaoa2;

    // Resultado da comparação dos Dados das Cartas:
    
    printf("Cartao da Cidade A1 - Area: %.2f \n",areaa1);
    printf("Cartao da Cidade A2 - Area: %.2f \n",areaa2);

    // Comparação dos Dados das Cartas:
    // Comparando os valores de area das cidades para decidir o vencedor
    // Comparação da Area:
        if(areaa1>areaa2){
            printf("O Cartão A1 venceu!!! \n");
        }else {
            printf("O Cartão A2 venceu!!! \n");
        }
    
    return 0;
}