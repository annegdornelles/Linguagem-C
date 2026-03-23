/*Faça um programa que leia um valor de área em hectares e apresente-o convertido em metros
quadrados. A fórmula de conversão é: M = H 10000, sendo M a área em metros quadrados e H a ∗
área em hectares.*/

#include<stdio.h>

int main(){
    float hec, m2;

    printf("\n Insira a area em hectares:");
    scanf("%f",&hec);

    m2 = hec*10000;

    printf("\n Em metros quadrados:%f", m2);
}