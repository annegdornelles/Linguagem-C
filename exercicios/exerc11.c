/*Uma empresa contrata um encanador a R$ 30,00 por dia. Faça um programa que solicite o
número de dias trabalhados pelo encanador e imprima o valor líquido que deverá ser pago, sabendose que são descontados 8% para imposto de renda.
*/

#include<stdio.h>

int main(){
    int dias;
    float liquido;

    printf("\n Dias trabalhados:");
    scanf("%d", &dias);

    liquido = (dias*30) - dias*0.08;

    printf("\n O salario liquido:%f", liquido);
}