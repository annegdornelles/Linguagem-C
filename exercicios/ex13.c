/*Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do
ano atual.*/

#include<stdio.h>

int main(){
    int nasc, atual, idade;

    printf("\n Insira o ano atual:");
    scanf("%d",&atual);

    printf("\n Insira sua idade:");
    scanf("%d",&idade);

    nasc = atual - idade;

    printf("\n O seu ano de nasc:%d", nasc);


    
}