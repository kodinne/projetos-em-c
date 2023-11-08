#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char player[256];
    char player2[256];

    printf("\nPlayer 1, sua vez (pedra, papel ou tesoura)...");
    scanf("%s", player);

    printf("\nPlayer 2, sua vez (pedra, papel ou tesoura)...");
    scanf("%s", player2);

    if(strcmp(player, player2) == 0) {
        printf("\nEmpate!");
    }
    else if(strcmp(player, "pedra") == 0 && strcmp(player2, "tesoura") == 0) {
        printf("\nPlayer 1 ganhou! Pedra quebra tesoura.");
    }
    else if(strcmp(player, "pedra") == 0 && strcmp(player2, "papel") == 0) {
        printf("\nPlayer 2 ganhou! Papel embrulha pedra.");
    }
    else if(strcmp(player, "papel") == 0 && strcmp(player2, "pedra") == 0) {
        printf("\nPlayer 1 ganhou! Papel embrulha pedra.");
    }
    else if(strcmp(player, "papel") == 0 && strcmp(player2, "tesoura") == 0) {
        printf("\nPlayer 2 ganhou! Tesoura corta papel.");
    }
    else if(strcmp(player, "tesoura") == 0 && strcmp(player2, "papel") == 0) {
        printf("\nPlayer 1 ganhou! Tesoura corta papel.");
    }
    else if(strcmp(player, "tesoura") == 0 && strcmp(player2, "pedra") == 0) {
        printf("\nPlayer 2 ganhou! Pedra quebra tesoura.");
    }
    else {
        printf("\nEscolha inválida!");
    }

    return 0;
}
