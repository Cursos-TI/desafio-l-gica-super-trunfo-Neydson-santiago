#include <stdio.h>

// Desafio Super Trunfo - Países Tema 1 - Cadastro das Cartas
int main() {
    // Definição de variáveis: estado, código da carta, nome da cidade população, área, PIB, número de pontos turísticos.
    int turisticosa1,turisticosa2,populacaoa1,populacaoa2,opcao;
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

    // Menu para escolha do atributo a ser comparado:

    printf("Digite um numero para escolher qual atributo comparar: \n");
    printf("1 para População \n");
    printf("2 para Area \n");
    printf("3 para Pib \n");
    printf("4 para Pontos Turisticos \n");
    printf("5 para Densidade Populacional \n");
    printf("6 para Pib Per Capita \n");
    printf("7 para Sair \n");
    scanf("%d", &opcao);

    // Resultado da comparação dos Dados das Cartas dentro do switch:
    
    switch(opcao) {
        case 1:
        if(populacaoa1>populacaoa2){
            printf("A População de %s: %d\n",nomea1,populacaoa1);
            printf("A População de %s: %d\n",nomea2,populacaoa2);
            printf("A cidade de %s venceu!!! \n",nomea1);
        }else if(populacaoa1<populacaoa2){
            printf("A População de %s: %d\n",nomea1,populacaoa1);
            printf("A População de %s: %d\n",nomea2,populacaoa2);
            printf("A cidade de %s venceu!!! \n",nomea2);
        } else {
            printf("A População de %s: %d\n",nomea1,populacaoa1);
            printf("A População de %s: %d\n",nomea1,populacaoa2);
            printf("Empate!!! \n");
        } 
        break;
        case 2:
        if(areaa1>areaa2){
            printf("A Area de %s: %.2f\n",nomea1,areaa1);
            printf("A Area de %s: %.2f\n",nomea2,areaa2);
            printf("A cidade de %s venceu!!! \n",nomea1);
        }else if(areaa1<areaa2){
            printf("A Area de %s: %.2f\n",nomea1,areaa1);
            printf("A Area de %s: %.2f\n",nomea2,areaa2);
            printf("A cidade de %s venceu!!! \n",nomea2);
        } else {
            printf("A Area de %s: %.2f\n",nomea1,areaa1);
            printf("A Area de %s: %.2f\n",nomea1,areaa2);
            printf("Empate!!! \n");
        } 
        break;
        case 3:
        if(piba1>piba2){
            printf("O PIB de %s: %.2f\n",nomea1,piba1);
            printf("O PIB de %s: %.2f\n",nomea2,piba2);
            printf("A cidade de %s venceu!!! \n",nomea1);
        }else if(piba1<piba2){
            printf("O PIB de %s: %.2f\n",nomea1,piba1);
            printf("O PIB de %s: %.2f\n",nomea2,piba2);
            printf("A cidade de %s venceu!!! \n",nomea2);
        } else {
            printf("O PIB de %s: %.2f\n",nomea1,piba1);
            printf("O PIB de %s: %.2f\n",nomea1,piba2);
            printf("Empate!!! \n");
        } 
        break;
        case 4:
        if(turisticosa1>turisticosa2){
            printf("Numero de Pontos Turisticos de %s: %d\n",nomea1,turisticosa1);
            printf("Numero de Pontos Turisticos de %s: %d\n",nomea2,turisticosa2);
            printf("A cidade de %s venceu!!! \n",nomea1);
        }else if(turisticosa1<turisticosa2){
            printf("Numero de Pontos Turisticos de %s: %d\n",nomea1,turisticosa1);
            printf("Numero de Pontos Turisticos de %s: %d\n",nomea2,turisticosa2);
            printf("A cidade de %s venceu!!! \n",nomea2);
        } else {
            printf("Numero de Pontos Turisticos de %s: %d\n",nomea1,turisticosa1);
            printf("Numero de Pontos Turisticos de %s: %d\n",nomea1,turisticosa2);
            printf("Empate!!! \n");
        } 
        break;
        case 5:
        if(densidadea1<densidadea2){
            printf("A Densidade Populacional de %s: %.2f\n",nomea1,densidadea1);
            printf("A Densidade Populacional de %s: %.2f\n",nomea2,densidadea2);
            printf("A cidade de %s venceu!!! \n",nomea1);
        }else if(densidadea1>densidadea2){
            printf("A Densidade Populacional de %s: %.2f\n",nomea1,densidadea1);
            printf("A Densidade Populacional de %s: %.2f\n",nomea2,densidadea2);
            printf("A cidade de %s venceu!!! \n",nomea2);
        } else {
            printf("A Densidade Populacional de %s: %.2f\n",nomea1,densidadea1);
            printf("A Densidade Populacional de %s: %.2f\n",nomea1,densidadea2);
            printf("Empate!!! \n");
        } 
        break;
        case 6:
        if(pibpercapa1>pibpercapa2){
            printf("O PIB Per Capita de %s: %.2f\n",nomea1,pibpercapa1);
            printf("O PIB Per Capita de %s: %.2f\n",nomea2,pibpercapa2);
            printf("A cidade de %s venceu!!! \n",nomea1);
        }else if(pibpercapa1<pibpercapa2){
            printf("O PIB Per Capita de %s: %.2f\n",nomea1,pibpercapa1);
            printf("O PIB Per Capita de %s: %.2f\n",nomea2,pibpercapa2);
            printf("A cidade de %s venceu!!! \n",nomea2);
        } else {
            printf("O PIB Per Capita de %s: %.2f\n",nomea1,pibpercapa1);
            printf("O PIB Per Capita de %s: %.2f\n",nomea1,pibpercapa2);
            printf("Empate!!! \n");
        } 
        break;
        case 7:
        printf("Saindo...\n");
        break;
        default:
        printf("opção inválida. Tente Novamente.\n!!!");
    }
    return 0;
}