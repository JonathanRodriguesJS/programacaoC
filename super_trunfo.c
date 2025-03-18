#include <stdio.h>

int main() {

    int escolhaJogador;

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
    scanf("%lu", &populacao1);

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
    scanf("%lu", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadepopulacional2 = populacao2/area2;
    pibpercapita2 = pib2*1000000000/populacao2;

    super_poder2 = (double)(populacao2) + area2 + pib2 + pontosTuristicos2 + pibpercapita2 + (1.0/densidadepopulacional2);

    // Exibe os dados das cartas ********************************

    printf("\n========== CARTAS REGISTRADAS ==========\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n",estado1, codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);


    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n",estado2, codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
       
    
    // Menu interativo - para escolha de atributo a ser comparado. *******************

    printf("\n\n** Qual será o atributo a ser comparado? **\n");
    printf("1. nome da cidade\n");
    printf("2. população\n");
    printf("3. área\n");
    printf("4. pib\n");
    printf("5. número de pontos turisticos\n");
    printf("6. densidade demográfica\n");

    scanf("%d", &escolhaJogador);

    switch(escolhaJogador){
        case 1:
            
            printf("\n\n============  Resultado do ataque!  ===============\n");
            printf("\nCarta 1: %s - Carta 2: %s\n", nomeCidade1, nomeCidade2);
            break;
        case 2:
            printf("\n\n============  Resultado do ataque!  ===============\n\n");

            printf("carta 1: %s - carta 2: %s\n", nomeCidade1, nomeCidade2);
            printf("(atributo) População\n");
            printf("%d - %d\n", populacao1, populacao2);
            if(populacao1 > populacao2){
                printf("Carta 1 venceu! \n");
            }else if(populacao1 < populacao2){
                printf("Carta 2 venceu! \n");
            }else {
                printf("As Cartas EMPATARAM no atributo escolhido! \n");
            }
            break;
        case 3:
            printf("\n\n============  Resultado do ataque!  ===============\n\n");

            printf("carta 1: %s - carta 2: %s\n", nomeCidade1, nomeCidade2);
            printf("(atributo) Área\n");
            printf("%.2f - %.2f\n", area1, area2);
            if(area1 > area2){
                printf("Carta 1 venceu! \n");
            }else if(area1 < area2){
                printf("Carta 2 venceu! \n");
            }else {
                printf("As Cartas EMPATARAM no atributo escolhido! \n");
            }
            break;
        case 4:
            printf("\n\n============  Resultado do ataque!  ===============\n\n");

            printf("carta 1: %s - carta 2: %s\n", nomeCidade1, nomeCidade2);
            printf("(atributo) PIB\n");
            printf("%.2f - %.2f\n", pib1, pib2);
            if(pib1 > pib2){
                printf("Carta 1 venceu! \n");
            }else if(pib1 < pib2){
                printf("Carta 2 venceu! \n");
            }else {
                printf("As Cartas EMPATARAM no atributo escolhido! \n");
            }
            break;
        case 5:
            printf("\n\n============  Resultado do ataque!  ===============\n\n");

            printf("carta 1: %s - carta 2: %s\n", nomeCidade1, nomeCidade2);
            printf("(atributo) Numero de pontos turisticos\n");
            printf("%d - %d\n", pontosTuristicos1, pontosTuristicos2);
            if(pontosTuristicos1 > pontosTuristicos2){
                printf("Carta 1 venceu! \n");
            }else if(pontosTuristicos1 < pontosTuristicos2){
                printf("Carta 2 venceu! \n");
            }else {
                printf("As Cartas EMPATARAM no atributo escolhido! \n");
            }
            break;
        case 6:
            printf("\n\n============  Resultado do ataque!  ===============\n\n");

            printf("carta 1: %s - carta 2: %s\n", nomeCidade1, nomeCidade2);
            printf("(atributo) População\n");
            printf("%.2f - %.2f\n", densidadepopulacional1, densidadepopulacional2);
            if(densidadepopulacional1 < densidadepopulacional2){
                printf("Carta 1 venceu! \n");
            }else if(densidadepopulacional1 > densidadepopulacional2){
                printf("Carta 2 venceu! \n");
            }else {
                printf("As Cartas EMPATARAM no atributo escolhido! \n");
            }
            break;
        
    }

    return 0;
}