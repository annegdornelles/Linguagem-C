/*Leia uma temperatura em graus Celsius e apresente-a
convertida em graus Fahrenheit. */

#include<stdio.h>

int main(){
    float celsius, fa;

    printf("\n Insira a temperatura em Celsius:");
    scanf("%f",&celsius);

    fa = 1.8*celsius + 32;

    printf("\nA temperatura em Fahrenheit:%.2f", fa);
}