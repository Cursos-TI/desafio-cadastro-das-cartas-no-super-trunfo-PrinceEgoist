#include <stdio.h>
#include <string.h>

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char nomeCidade1[100], nomeCidade2[100];
    char buffer[100]; // <- Adiciona esta linha
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // === CARTA 1 ===
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    limparBuffer();

    printf("Código da Carta (ex: A01): ");
    fgets(codigo1, sizeof(codigo1), stdin);
    codigo1[strcspn(codigo1, "\n")] = 0;

    printf("Nome da Cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);
    limparBuffer(); // limpa o buffer antes de fgets

    printf("PIB (em bilhões de reais): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &pontosTuristicos1);

    // === CARTA 2 ===
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    limparBuffer();

    printf("Código da Carta (ex: B02): ");
    fgets(codigo2, sizeof(codigo2), stdin);
    codigo2[strcspn(codigo2, "\n")] = 0;

    printf("Nome da Cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);
    limparBuffer();

    printf("PIB (em bilhões de reais): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &pontosTuristicos2);

    // === IMPRESSÃO DAS CARTAS ===
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}