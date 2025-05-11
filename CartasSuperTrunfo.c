#include <stdio.h>

#include <stdio.h>

int main() {

    // Carta 1 
    char estado1[] = "Bahia";  // Corrigido para string (array de char)
    char codigo1[] = "A01";
    char nomeCidade1[] = "Salvador";
    int populacao1 = 2418000;
    float area1 = 693.452;
    float pib1 = 73100000000.000;
    int pontosTuristicos1 = 40;

    // Carta 2 - Rio de Janeiro
    char estado2[] = "Rio de Janeiro";  // Corrigido para string (array de char)
    char codigo2[] = "B02";
    char nomeCidade2[] = "Copacabana";
    int populacao2 = 147000;
    float area2 = 7.070;
    float pib2 = 10000000000.000;
    int pontosTuristicos2 = 30;

    // Exibição das cartas
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);  // Corrigido para %s para imprimir strings
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", pontosTuristicos1);

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);  // Corrigido para %s para imprimir strings
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}

