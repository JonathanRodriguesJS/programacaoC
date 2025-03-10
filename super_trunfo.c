#include <stdio.h>

int main() {

    // Variaveis gerai
    int result_populacao, result_area, result_pib, result_pontosTuristicos;
    int result_densidadePopulacional, result_pibpercapita, result_super_poder;

    // Variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadepopulacional1;
    float pibpercapita1;
    double super_poder1;

    // Variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadepopulacional2;
    float pibpercapita2;
    double super_poder2;

    // Captura os dados da primeira carta
    printf("\nCarta 1\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código (01 - 04): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("População: ");
    scanf("%u", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidadepopulacional1 = populacao1/area1;
    pibpercapita1 = pib1*1000000000/populacao1;

    super_poder1 = (double)(populacao1) + area1 + pib1 + pontosTuristicos1 + pibpercapita1 + (1.0/densidadepopulacional1);

    printf("\n================================\n");

    // Captura os dados da segunda carta
    printf("\nCarta 2\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código (01 - 04): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%u", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadepopulacional2 = populacao2/area2;
    pibpercapita2 = pib2*1000000000/populacao2;

    super_poder2 = (double)(populacao2) + area2 + pib2 + pontosTuristicos2 + pibpercapita2 + (1.0/densidadepopulacional2);

    // Exibe os dados das cartas

    printf("\n========== CARTAS REGISTRADAS ==========\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n",estado1, codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);


    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n",estado2, codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    // comparando cartas

    result_populacao = populacao1 > populacao2;
    result_area = area1 > area2;
    result_pib = pib1 > pib2;
    result_pontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    result_densidadePopulacional = densidadepopulacional1 < densidadepopulacional2;
    result_pibpercapita = pibpercapita1 > pibpercapita2;
    result_super_poder = super_poder1 > super_poder2;

    // estrutura de decisao (populaçao)


    printf("============resultado do ataque!===============\n");

    printf("\nComparação de cartas (Atributo: População):\n");

 
    if (result_populacao == 1){
        printf("Carta 1 - %s - %u\n\n", nomeCidade1, populacao1);
    }else {
        printf("Carta 2 - %s - %u\n\n", nomeCidade2, populacao2);
    }

    return 0;
}