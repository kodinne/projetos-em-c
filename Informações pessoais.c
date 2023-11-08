#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome [256];
    char sobrenome[256];
    int ano_nascimento;
    int idade;


    printf("Qual seu nome?\n");

    scanf("%s", nome);

    printf("Qual seu sobrenome?\n");

    scanf("%s", sobrenome);

    printf("\n Certo, %s... Qual sua idade?\n",nome);
    scanf("%d", &idade);

    printf("Muito bom! O %s %s tem %d anos",nome,sobrenome,idade);

    return 0;
}
