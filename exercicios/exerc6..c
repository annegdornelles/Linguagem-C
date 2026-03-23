/*Faça um programa que leia um valor de área em acres e apresente-o convertido em metros
quadrados. A fórmula de conversão é: M = A 4048,58, sendo M a área em metros quadrados e A a ∗
área em acres.
*/

#include<stdio.h>

int main(){
    float acres, m2;

    printf("\n Insira o valor em acres:");
    scanf("%f", &acres);

    m2 = acres*4048.58;

    printf("\n Em m2:", m2);
}