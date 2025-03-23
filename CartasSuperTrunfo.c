#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Adcionado densidade populacional e PIB per capita
    // População e PIB foram armazenados com unsigned long int para evitar problemas com números muito grandes
    char estado1, estado2;
    char carta1[5], carta2[5];
    char cidade1[20], cidade2[20]; 
    unsigned long int pop1, pop2;
    float area1, area2;
    long int pib1, pib2;
    int pontos1, pontos2;
    float densi1, densi2;
    float pibpercap1, pibpercap2;
    int pop, area, pib, pontos, densi, pibpercap;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Insira as informações das 2 cartas que irão competir.\nComeçando pela carta 1:\n");
    printf("Qual a letra do estado?\n"); // Pede ao usuário a letra do estado
    scanf(" %c", &estado1); // A

    printf("Qual o código da carta?\n"); // Pede ao usuário o código da carta
    scanf(" %s", carta1); // 01

    printf("Qual o nome da cidade?\n"); // Pede ao usuário o nome da cidade
    scanf(" %s", cidade1); // SaoPaulo

    printf("Qual a população da cidade?\n"); // Pede ao usuário a população da cidade
    scanf(" %lu", &pop1); // 11451000

    printf("Qual a área da cidade?\n"); // Pede ao usuário a área da cidade
    scanf(" %f", &area1); // 1521

    printf("Qual o PIB da cidade?\n"); // Pede ao usuário o PIB da cidade
    scanf(" %ld", &pib1); // 828.980.607.731 (sem pontos)

    printf("Qual o número de pontos turísticos da cidade?\n"); // Pede ao usuário o número de pontos turísticos da cidade
    scanf(" %d", &pontos1); // 36

    // Repetindo o processo para a carta 2:
    printf("\nAgora, vamos inserir a carta 2:\n");
    printf("Qual a letra do estado?\n");
    scanf(" %c", &estado2); // B

    printf("Qual o código da carta?\n");
    scanf(" %s", carta2); // 01

    printf("Qual o nome da cidade?\n");
    scanf(" %s", cidade2); // RioDeJaneiro

    printf("Qual a população da cidade?\n");
    scanf(" %ld", &pop2); // 6747815

    printf("Qual a área da cidade?\n");
    scanf(" %f", &area2); // 1221

    printf("Qual o PIB da cidade?\n");
    scanf(" %ld", &pib2); // 449.989.000.000 (sem pontos)

    printf("Qual o número de pontos turísticos da cidade?\n");
    scanf(" %d", &pontos2); // 28 */

    //Manipulação de variáveis:
    densi1 = pop1 / area1;
    densi2 = pop2 / area2;
    pibpercap1 = pib1 / pop1;
    pibpercap2 = pib2 / pop2;

    // Calculando o Super Poder:
    // Somando todos os atributos numericos (População, Área, PIB, Pontos Turísticos,
    //PIB per capita e o inverso da Densidade Populacional - quanto menor a densidade, maior o poder)
    // Armazene o Super Poder como Float

    float superpoder1 = (pop1 + area1 + pib1 + pontos1 + pibpercap1) / densi1;
    float superpoder2 = (pop2 + area2 + pib2 + pontos2 + pibpercap2) / densi2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nAs cartas participantes nessa rodada são:\n\n");
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", pop1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %ld\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f\n", densi1);
    printf("PIB per capita: %.2f\n", pibpercap1);
    printf("Super Poder: %.2f\n\n\n", superpoder1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", pop2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %ld\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f\n", densi2);
    printf("PIB per capita: %.2f\n", pibpercap2);
    printf("Super Poder: %.2f\n\n\n", superpoder2);

    // Comparando as cartas
    float superpoder;

    pop = pop1 > pop2;
    area = area1 > area2;
    pib = pib1 > pib2;
    pontos = pontos1 > pontos2;
    densi = densi1 < densi2;
    pibpercap = pibpercap1 > pibpercap2;
    superpoder = superpoder1 > superpoder2;

    // Exibindo o resultado da comparação
    printf("Resultado da comparação:\n\n");
    printf("População: %s Ganhou.(%d)\n", cidade1, pop);
    printf("Área em km2: %s Ganhou.(%d)\n", cidade1, area);
    printf("PIB: %s Ganhou.(%d)\n", cidade1, pib);
    printf("Pontos Turísticos: %s Ganhou.(%d)\n", cidade1, pontos);
    printf("Densidade Populacional: %s Ganhou.(%d)\n", cidade2, densi);
    printf("PIB per Capita: %s Ganhou.(%d)\n", cidade1, pibpercap);
    printf("Super Poder: %s Ganhou.(%d)\n\n\n", cidade2, superpoder);


    return(0);
}
