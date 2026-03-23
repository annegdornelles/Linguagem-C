/*Pedrinho tem um cofrinho com muitas moedas e deseja saber quantos reais
conseguiu poupar. Faça um programa que leia a quantidade de moedas de cada
tipo e imprima o valor total economizado, em reais. Considere que existem moedas
de 1, 5, 10, 25 e 50 centavos, e ainda moedas de 1 real. Não havendo moeda de
um tipo, a quantidade lida deve ser zero.*/

#include<stdio.h>

int main(){
    float total;
    int cent1,cent5,cent10,cent25,cent50, real1;

    printf("\n Insira o valor que possui de moedas de 1 centavo:");
    scanf("%d",&cent1);

     printf("\n Insira o valor que possui de moedas de 5 centavos:");
    scanf("%d",&cent5);

     printf("\n Insira o valor que possui de moedas de 10 centavo:");
    scanf("%d",&cent10);

     printf("\n Insira o valor que possui de moedas de 25 centavo:");
    scanf("%d",&cent25);

     printf("\n Insira o valor que possui de moedas de 50 centavo:");
    scanf("%d",&cent50);

    printf("\n Insira o valor que possui de moedas de 1 real:");
    scanf("%d",&real1);

    total = (cent1*0.01)+(cent5*0.05)+(0.25*cent25)+(0.5*cent50)+(0.1*cent10) + real1*1;

    printf("\n Total de reais:%.2f", total);

    
    
}