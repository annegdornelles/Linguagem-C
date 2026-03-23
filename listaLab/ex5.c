/*Faça um programa que leia 2 valores inteiros e os armazene nas variáveis a e b,
imprimindo-as. A seguir, realize a troca dos valores de modo que o valor contido
em a passe para b e o valor de b passe para a. Ao final, imprima os valores de a e
b.*/

#include<stdio.h>

int main(){
    int a, b, c;

    printf("\n Insira o valor a:");
    scanf("%d",&a);
    
    printf("\n Insira o valor de b:");
    scanf("%d",&b);

    c = a;
    a = b;
    b = c;

    printf("\n O valor de a agora:%d\n O valor de b agora:%d", a, b);
}