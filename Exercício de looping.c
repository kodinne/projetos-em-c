#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 1;
    int limite = 10;
    while(contador <= limite) {
        printf("Estamos no primeiro loop\n");
        if (contador == 3) {

            printf("O contador é igual a 3\n");
        }
        contador++;
    }

    int contador_2 = 5;
    while(contador_2 > 0){
        printf("Estamos no segundo loop\n");
        contador_2--;
        contador_2--;
    }

    return 0;
}
