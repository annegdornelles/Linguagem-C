#include<stdio.h>

int main(){
    int idade;
    char nome[10];

    printf("\n Insira sua idade:");
    scanf("%d",&idade);

    printf("\n Insira seu nome");
    scanf("%s", nome);

    printf("\n Seu nome:%s\n Sua idade:%d\n", nome, idade);
}