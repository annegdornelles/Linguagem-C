/*Faça um programa que leia um valor inteiro em segundos, e imprima-o em horas, minutos e
segundos.*/

#include<stdio.h>

int main(){
    int seg, hr, min;

    printf("\n Insira um valor em segundos:");
    scanf("%d",&seg);

    min = seg/60;

    hr = min/60;

    printf("\n Em minutos:%d\n Em horas:%d", min, hr);
}