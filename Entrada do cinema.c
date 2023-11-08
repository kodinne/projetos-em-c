#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hora_cinema = 20;
    int hora_atual = 20;

    if (hora_atual > hora_cinema + 30) {
        printf("Passou do tempo limite! Nao pode entrar");
    } else if (hora_atual < hora_cinema - 30) {
        printf("A porta ainda não está aberta!");
    } else {
        printf("O horario esta certo! pode entrar!");
    }

    return 0;
}
