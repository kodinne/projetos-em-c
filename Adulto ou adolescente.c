#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[256];
    int idade;

    printf("Ola! Qual o seu nome?\n");
    scanf("%s", nome);
    printf("\nQual a sua idade?\n");
    scanf("%d", &idade);

    printf("Nome: %s\nIdade: %d\n", nome, idade);

    printf("\nAguarde enquanto lemos seus dados...");

    printf("A primeira letra do seu nome eh:%c",nome[0]);

    if(idade >= 18)
       printf("\nVoce eh um adulto!");
       else if (idade >=12)
        printf("\nVoce eh um adolescente");
    else{
        printf("\nVoce eh uma criança");
    }
    return 0;
}
