/*Faça um programa que leia o valor que um trabalhador ganha por hora e o número de horas
trabalhadas no mês. Calcule o seu salário no referido mês, sabendo-se que são descontados 14%
para o imposto de renda, 11% para o INSS e 1% para o sindicato. O programa deve exibir:
• o salário bruto
• o valor pago ao INSS
• o valor pago ao sindicato
• o salário líquido*/

#include<stdio.h>

int main(){
    float valorH, numH, salarioB, INSS, IR, SIND, salarioL;

    printf("\n Insira o que voce ganha por horas:");
    scanf("%f", &valorH);

    printf("\n Insira o numero de horas trabalhadas por mes:");
    scanf("%f",&numH);

    salarioB = valorH*numH;

    INSS = salarioB*0.11;
    IR = salarioB*0.14;
    SIND = salarioB*0.01;

    salarioL = salarioB - (INSS+IR+SIND);

    printf("\n Desconto INSS:%.2f\n IR:%.2f\n SIND:%.2f\n Salario liquido:%.2f\n Salario bruto:%.2f", INSS, IR, SIND, salarioL, salarioB);



}