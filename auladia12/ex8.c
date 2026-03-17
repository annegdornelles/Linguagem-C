/*Leia a razão de uma PA e o valor do primeiro termo. Calcule e
imprima o décimo termo da série.*/

#include<stdio.h>

int main(){
    int razao, a1, aN;

    printf("\n Insira a razao da PA:");
    scanf("%d",&razao);

    printf("\n Insira o valor do 1 termo:");
    scanf("%d",&a1);

    aN = a1+(10-1)*razao;

    printf("\n O valor do decimo termo eh:%d", aN);
}