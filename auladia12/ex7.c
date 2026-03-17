/*Leia uma data no formato ddmmaa (utilizar uma única variável
inteira) e imprima dia, mês e ano separados.*/

#include<stdio.h>
#include<math.h>

int main(){
    int data;
    float mes, ano, dia;

    printf("\n Insira a data:");
    scanf("%d",&data);
    fabs(dia);

     dia = data/10000;

    ano = data%100;

    mes = (data/100)%100;

    printf("\nO dia eh:%.2f\n O ano eh:%f\n O mes eh:%f", dia, ano, mes);
}