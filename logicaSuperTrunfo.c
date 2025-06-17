#include <stdio.h>

// Desafio Super Trunfo - Países Tema 1 - Cadastro das Cartas
int main() {
    // Definição de variáveis: estado, código da carta, nome da cidade população, área, PIB, número de pontos turísticos.
    int turisticosa1,turisticosa2,populacaoa1,populacaoa2,opcao1,opcao2,resultado;
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
    scanf("%d", &opcao1);

    // Resultado da comparação dos Dados das Cartas dentro do switch:
    
    switch(opcao1) {
        case 1: //comparação da opção 1
        printf("Atributo Escolhido: Populacao\n");
        printf("%s - %d - %s - %d\n",nomea1,populacaoa1,nomea2,populacaoa2);
        populacaoa1 == populacaoa2 ? printf("Empate!!! \n"):
        populacaoa1 > populacaoa2 ? printf("A cidade de %s venceu!!! \n",nomea1):
        printf("A cidade de %s venceu!!! \n",nomea2);
        resultado += populacaoa1 < populacaoa2 ? 1 : -1;
        break;
        case 2: //comparação da opção 2
        printf("Atributo Escolhido: Area\n");
        printf("%s - %.2f - %s - %.2f\n",nomea1,areaa1,nomea2,areaa2);
        areaa1 == areaa2 ? printf("Empate!!! \n"):
        areaa1 > areaa2 ? printf("A cidade de %s venceu!!! \n",nomea1):
        printf("A cidade de %s venceu!!! \n",nomea2);
        resultado += areaa1 < areaa2 ? 1 : -1;
        break;
        case 3: //comparação da opção 3
        printf("Atributo Escolhido: Pib\n");
        printf("%s - %.2f - %s - %.2f\n",nomea1,piba1,nomea2,piba2);
        piba1 == piba2 ? printf("Empate!!! \n"):
        piba1 > piba2 ? printf("A cidade de %s venceu!!! \n",nomea1):
        printf("A cidade de %s venceu!!! \n",nomea2);
        resultado += piba1 < piba2 ? 1 : -1;
        break;
        case 4: //comparação da opção 4
        printf("Atributo Escolhido: Pontos Turisticos\n");
        printf("%s - %d - %s - %d\n",nomea1,turisticosa1,nomea2,turisticosa2);
        turisticosa1 == turisticosa2 ? printf("Empate!!! \n"):
        turisticosa1 > turisticosa2 ? printf("A cidade de %s venceu!!! \n",nomea1):
        printf("A cidade de %s venceu!!! \n",nomea2);
        resultado += turisticosa1 < turisticosa2 ? 1 : -1;
        break;
        case 5: //comparação da opção 5
        printf("Atributo Escolhido: Densidade Populacional\n");
        printf("%s - %.2f - %s - %.2f\n",nomea1,densidadea1,nomea2,densidadea2);
        densidadea1 == densidadea2 ? printf("Empate!!! \n"):
        densidadea1 < densidadea2 ? printf("A cidade de %s venceu!!! \n",nomea1):
        printf("A cidade de %s venceu!!! \n",nomea2);
        resultado += turisticosa1 > turisticosa2 ? 1 : -1;
        break;
        case 6: //comparação da opção 6
        printf("Atributo Escolhido: Pib Per Capita\n");
        printf("%s - %.2f - %s - %.2f\n",nomea1,pibpercapa1,nomea2,pibpercapa2);
        pibpercapa1 == pibpercapa2 ? printf("Empate!!! \n"):
        pibpercapa1 > pibpercapa2 ? printf("A cidade de %s venceu!!! \n",nomea1):
        printf("A cidade de %s venceu!!! \n",nomea2);
        resultado += pibpercapa1 < pibpercapa2 ? 1 : -1;
        break;
        case 7://comparação da opção 7 - exit do switch pelo usuario
        printf("Saindo...\n");
        break;
        default: //mensagem de erro quando nao escolhemos umas das opções
        printf("opção inválida. Tente Novamente.\n!!!");
    }

    printf("Digite mais um numero para escolher outro atributo para comparar: \n");
    printf("1 para População \n");
    printf("2 para Area \n");
    printf("3 para Pib \n");
    printf("4 para Pontos Turisticos \n");
    printf("5 para Densidade Populacional \n");
    printf("6 para Pib Per Capita \n");
    printf("7 para Sair \n");
    scanf("%d", &opcao2);

        switch(opcao2) {
        case 1: //comparação da opção 1
        printf("Atributo Escolhido: Populacao\n");
        printf("%s - %d - %s - %d\n",nomea1,populacaoa1,nomea2,populacaoa2);
        populacaoa1 == populacaoa2 ? printf("Empate!!! \n"):
        populacaoa1 > populacaoa2 ? printf("A cidade de %s venceu!!! \n",nomea1):
        printf("A cidade de %s venceu!!! \n",nomea2);
        resultado += populacaoa1 < populacaoa2 ? 1 : -1;
        break;
        case 2: //comparação da opção 2
        printf("Atributo Escolhido: Area\n");
        printf("%s - %.2f - %s - %.2f\n",nomea1,areaa1,nomea2,areaa2);
        areaa1 == areaa2 ? printf("Empate!!! \n"):
        areaa1 > areaa2 ? printf("A cidade de %s venceu!!! \n",nomea1):
        printf("A cidade de %s venceu!!! \n",nomea2);
        resultado += areaa1 < areaa2 ? 1 : -1;
        break;
        case 3: //comparação da opção 3
        printf("Atributo Escolhido: Pib\n");
        printf("%s - %.2f - %s - %.2f\n",nomea1,piba1,nomea2,piba2);
        piba1 == piba2 ? printf("Empate!!! \n"):
        piba1 > piba2 ? printf("A cidade de %s venceu!!! \n",nomea1):
        printf("A cidade de %s venceu!!! \n",nomea2);
        resultado += piba1 < piba2 ? 1 : -1;
        break;
        case 4: //comparação da opção 4
        printf("Atributo Escolhido: Pontos Turisticos\n");
        printf("%s - %d - %s - %d\n",nomea1,turisticosa1,nomea2,turisticosa2);
        turisticosa1 == turisticosa2 ? printf("Empate!!! \n"):
        turisticosa1 > turisticosa2 ? printf("A cidade de %s venceu!!! \n",nomea1):
        printf("A cidade de %s venceu!!! \n",nomea2);
        resultado += turisticosa1 < turisticosa2 ? 1 : -1;
        break;
        case 5: //comparação da opção 5
        printf("Atributo Escolhido: Densidade Populacional\n");
        printf("%s - %.2f - %s - %.2f\n",nomea1,densidadea1,nomea2,densidadea2);
        densidadea1 == densidadea2 ? printf("Empate!!! \n"):
        densidadea1 < densidadea2 ? printf("A cidade de %s venceu!!! \n",nomea1):
        printf("A cidade de %s venceu!!! \n",nomea2);
        resultado += turisticosa1 > turisticosa2 ? 1 : -1;
        break;
        case 6: //comparação da opção 6
        printf("Atributo Escolhido: Pib Per Capita\n");
        printf("%s - %.2f - %s - %.2f\n",nomea1,pibpercapa1,nomea2,pibpercapa2);
        pibpercapa1 == pibpercapa2 ? printf("Empate!!! \n"):
        pibpercapa1 > pibpercapa2 ? printf("A cidade de %s venceu!!! \n",nomea1):
        printf("A cidade de %s venceu!!! \n",nomea2);
        resultado += pibpercapa1 < pibpercapa2 ? 1 : -1;
        break;
        case 7://comparação da opção 7 - exit do switch pelo usuario
        printf("Saindo...\n");
        break;
        default: //mensagem de erro quando nao escolhemos umas das opções
        printf("opção inválida. Tente Novamente.\n!!!");
    }

    //Resultado Final

    printf("\nResultado Final: ");
    if(resultado < 0)
    {
        printf("Vitoria de %s\n", nomea1);
    }
    else if(resultado > 0)
    {
        printf("Vitoria de %s\n", nomea2);
    }
    else{
        printf("Empate\n");
    }

    return 0;
}