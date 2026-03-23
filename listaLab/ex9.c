/*Faça um programa que receba como entrada a quantidade de maçãs para o
transporte e o preço de cada maçã. Como resultado, o programa deve informar o
valor total da carga e a quantidade de caixas de maçã necessárias para o
transporte. Considere que uma caixa de maçãs possui espaço para 48 unidades.*/


#include<stdio.h>
#include<math.h>

int main(){
    int qMacas;
    float valorMaca, valorCarga, qCaixa;

    printf("\n Insira a quantidade de macas:");
    scanf("%d",&qMacas);

    printf("\n Insira o valor de cada maca:");
    scanf("%f",&valorMaca);

    qCaixa = ceil(qMacas/48.0);

    valorCarga = qMacas*valorMaca;

    printf("\n O valor da carga eh:%.2f\n A quantidade de caixas:%f", valorCarga, qCaixa);

    //ver dps


}