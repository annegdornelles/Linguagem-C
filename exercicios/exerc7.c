/*Faça um programa que leia um valor de área em metros quadrados e apresente-o convertido em
hectares. A fórmula de conversão é: H = M 0, 0001, sendo M a área em metros quadrados e H a ∗
área em hectares.*/

#include<stdio.h>

int main(){
    float m2, hec;

    printf("\n Insira o valor em m2:");
    scanf("%f",&m2);

    hec=m2*0.0001;

    printf("\n Em hectares:%f", hec);
}