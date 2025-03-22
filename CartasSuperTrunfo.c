#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1, estado2;
    char carta1[5], carta2[5];
    char cidade1[20], cidade2[20]; 
    int pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densi1, densi2;
    float pibpercap1, pibpercap2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Insira as informações das 2 cartas que irão competir.\nComeçando pela carta 1:\n");
    printf("Qual a letra do estado?\n"); // Pede ao usuário a letra do estado
    scanf(" %c", &estado1); // Coleta a letra do estado

    printf("Qual o código da carta?\n"); // Pede ao usuário o código da carta
    scanf(" %s", carta1); // Coleta o código da carta

    printf("Qual o nome da cidade?\n"); // Pede ao usuário o nome da cidade
    scanf(" %s", cidade1); // Coleta o nome da cidade

    printf("Qual a população da cidade?\n"); // Pede ao usuário a população da cidade
    scanf(" %d", &pop1); // Coleta a população da cidade

    printf("Qual a área da cidade?\n"); // Pede ao usuário a área da cidade
    scanf(" %f", &area1); // Coleta a área da cidade

    printf("Qual o PIB da cidade?\n"); // Pede ao usuário o PIB da cidade
    scanf(" R$%fbi ", &pib1); // Coleta o PIB da cidade

    printf("Qual o número de pontos turísticos da cidade?\n"); // Pede ao usuário o número de pontos turísticos da cidade
    scanf(" %d", &pontos1); // Coleta o número de pontos turísticos da cidade

    printf("\nAgora, vamos inserir a carta 2:\n");
    printf("Qual a letra do estado?\n");
    scanf(" %c", &estado2);

    printf("Qual o código da carta?\n");
    scanf(" %s", carta2);

    printf("Qual o nome da cidade?\n");
    scanf(" %s", cidade2);

    printf("Qual a população da cidade?\n");
    scanf(" %d", &pop2);

    printf("Qual a área da cidade?\n");
    scanf(" %f", &area2);

    printf("Qual o PIB da cidade?\n");
    scanf(" R$%fbi", &pib2);

    printf("Qual o número de pontos turísticos da cidade?\n");
    scanf(" %d", &pontos2);

    //Manipulação de variáveis:
    densi1 = pop1 / area1;
    densi2 = pop2 / area2;
    pibpercap1 = pib1 / pop1;
    pibpercap2 = pib2 / pop2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nAs cartas participantes nessa rodada são:\n\n");
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", pop1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f\n", densi1);
    printf("PIB per capita: %.2f\n\n\n", pibpercap1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", pop2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f\n", densi2);
    printf("PIB per capita: %.2f\n\n\n", pibpercap2);


    return(0);
}
