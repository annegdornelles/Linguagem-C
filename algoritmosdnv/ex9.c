#include<stdio.h>

int main(){
    char nome[10];

    printf("\n Insira uma palavra:");
    scanf("%s", nome);

    printf("\n A palavra eh: %s", nome);

    printf("\n A palavra eh: '%s'", nome);
}