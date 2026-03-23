/*Três amigos jogaram na mega sena. Caso eles ganhem, o prêmio deve ser repartido
proporcionalmente ao valor que cada contribuiu para a aposta. Faça um programa que leia quanto
cada apostador investiu, o valor do prêmio e imprima quanto cada um ganharia do prêmio com base
no valor investido.*/

#include<stdio.h>

int main(){
    float invest1,invest2,invest3, premio, valor1, valor2, valor3, percent1, percent2, percent3;

    printf("\n Insira o valor do premio:");
    scanf("%f", &premio);

    printf("\n Insira quanto o amigo 1 investiu:");
    scanf("%f",&invest1);

    printf("\n Insira quanto o amigo 2 investiu:");
    scanf("%f",&invest2);

    printf("\n Insira quanto o amigo 3 investiu:");
    scanf("%f",&invest3);

    percent1 = (invest1/premio)*100;
    percent2 = (invest2/premio)*100;
    percent3 = (invest3/premio)*100;

    valor1 = percent1*premio;
    valor2 = percent2*premio;
    valor3 = percent3*premio;
    
    printf("\n O amigo 1 ganhara:%f\n O amigo 2 ganhara:%f\n O amigo 3 ganhara:%f", valor1,valor2,valor3);
}