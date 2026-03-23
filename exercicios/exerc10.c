/*A importância de R$ 780.000,00 será dividida entre três ganhadores da mega sena. Sendo que da
quantia total: o primeiro ganhador receberá 46%, o segundo receberá 32% e o terceiro receberá o
restante. Faça um programa que calcule e imprima a quantia ganha por cada ganhador.*/

#include<stdio.h>

int main(){
    float g1,g2,g3,total;
    total=780.000;

    g1=total*0.46;

    g2=total*0.32;

    g3=total*0.22;

    printf("\n O primeiro ganhador ficara com:%f\n O segundo:%f\n O terceiro:%f", g1,g2,g3);
}