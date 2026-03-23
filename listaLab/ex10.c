/*Faça um programa que leia a quantidade de carros que uma locadora possui e o
valor que ela cobra por diária, mostrando as informações pedidas a seguir:
 Sabendo que um terço dos carros são alugados por mês, exiba o
faturamento anual da locadora;
 Quando o cliente atrasa o horário de devolução do carro, é cobrada uma
multa de 10% sobre o valor da diária. Sabendo que um décimo dos carros
alugados no mês são devolvidos com atraso, calcule o valor ganho com
multas por mês;
 Sabendo ainda que 5% dos carros sofrem desgaste ao longo do ano e são
retirados do catálogo de carros ofertados, e 1/8 do total de carros é
renovado, exiba a quantidade de carros que a locadora terá no final do ano.*/

#include<stdio.h>

int main(){
    int qCarros, alugMes;
    float valorDiaria, fatAnual, valorMultasMensal, quantFim;

    printf("\n Insira a quantidade de carros que a locadora possui:\n");
    scanf("%d",&qCarros);

    printf("\n Insira o valor da diaria dos carros:");
    scanf("%f",&valorDiaria);

    alugMes = qCarros/3;

    fatAnual = (alugMes*30*valorDiaria*12);

    valorMultasMensal = (qCarros/10)*0.1*valorDiaria;

    quantFim = qCarros - ((qCarros/20) + qCarros/8);

    printf("\n Faturamento anual:%.2f\n Valor multas mensal:%.2f\n Quantidade final de carros:%.2f", fatAnual, valorMultasMensal, quantFim);
}