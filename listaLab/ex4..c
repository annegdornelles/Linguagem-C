/*Faça um programa que leia o valor da hora de trabalho de um funcionário e a
quantidade de horas trabalhadas no mês. A seguir, calcule o seu salário bruto, o
qual corresponde ao produto da quantidade de horas trabalhadas pelo valor da
hora de trabalho. Na sequência, calcule o salário líquido, o qual deve descontar
11% de IR, 8% de INSS e 5% de contribuição sindical. Todos os descontos são
aplicados ao valor do salário bruto. Ao final, imprima o salário bruto, o salário
líquido e o valor de cada desconto aplicado. Exibir todos os valores com 2 casas
decimais.
*/

#include<stdio.h>

int main(){
    float hTrabalho,sBruto, descontoIR, INSS, contSind, sLiquido;
    int qMes;

    printf("\n Insira o valor da sua hora de trabalho:");
    scanf("%f", &hTrabalho);

    printf("\n Insira a quantidade de horas no mes:");
    scanf("%d",&qMes);

    sBruto = hTrabalho*qMes;

    descontoIR = sBruto*0.11;
    INSS = sBruto*0.08;
    contSind = sBruto*0.05;

    sLiquido = sBruto - (INSS+descontoIR+contSind);

    printf("\n O salario liquido eh:%.2f\n O salario bruto:%.2f\n O valor do desconto IR:%.2f\n O valor do desconto do INSS%.2f\n O valor do desconto de contribuicao sindicial:%.2f\n", sLiquido, sBruto, descontoIR, INSS, contSind);


}