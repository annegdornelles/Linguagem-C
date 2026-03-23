/*Faça um programa que leia três valores inteiros e imprima a soma deles.*/

#include<stdio.h>

int main(){
    int a,b,c,soma;

    printf("\n Insira o valor de A:");
    scanf("%d",&a);

    printf("\n Insira o valor de B:");
    scanf("%d",&b);

    printf("\n Insira o valor de C:");
    scanf("%d",&c);

    soma = a+b+c;

    printf("\n Soma:%d", soma);

    printf("\n O valor a eh:%d\n A soma eh:%d", a, soma);
}