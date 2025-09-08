#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta
typedef struct {
    char nome[50];
    int poder;
    int defesa;
} Carta;

int main() {
    Carta carta1, carta2;

    printf("=== Cadastro da primeira carta ===\n");
    printf("Nome da carta: ");
    scanf("%s", carta1.nome);
    printf("Poder: ");
    scanf("%d", &carta1.poder);
    printf("Defesa: ");
    scanf("%d", &carta1.defesa);

    printf("\n=== Cadastro da segunda carta ===\n");
    printf("Nome da carta: ");
    scanf("%s", carta2.nome);
    printf("Poder: ");
    scanf("%d", &carta2.poder);
    printf("Defesa: ");
    scanf("%d", &carta2.defesa);

    printf("\n=== Comparação ===\n");
    printf("Carta 1: %s (Poder: %d, Defesa: %d)\n", carta1.nome, carta1.poder, carta1.defesa);
    printf("Carta 2: %s (Poder: %d, Defesa: %d)\n", carta2.nome, carta2.poder, carta2.defesa);

    if ((carta1.poder + carta1.defesa) > (carta2.poder + carta2.defesa)) {
        printf(">>> %s venceu!\n", carta1.nome);
    } else if ((carta1.poder + carta1.defesa) < (carta2.poder + carta2.defesa)) {
        printf(">>> %s venceu!\n", carta2.nome);
    } else {
        printf(">>> Empate!\n");
    }

    return 0;
}
