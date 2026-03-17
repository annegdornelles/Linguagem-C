/*Leia a idade de uma pessoa e exiba quantos dias de vida ela
possui. Considere sempre anos completos e que um ano sempre
possui 365 dias.*/

#include<stdio.h>

int main(){
    int idade, dias;

    printf("\n Insira sua idade:");
    scanf("%d",&idade);

    dias = idade*365;

    printf("Seu total de dias:%d", dias);
}