/*Faça um programa que leia um valor em real e a cotação do dólar. Em seguida, imprima o valor
correspondente em dólares.*/

#include<stdio.h>

int main(){
    float real, dolar;

    printf("\n Insira o valor em real:");
    scanf("%f", &real);

    dolar = real*5.24;

    printf("\n Em dolar:%f", dolar);
}