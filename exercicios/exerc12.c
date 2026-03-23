/*Faça um programa para ajudar os vendedores de uma loja. A partir de um valor total lido,
calcule e exiba:
• o total a pagar com desconto de 10%
• o valor de cada parcela, no parcelamento de 3× sem juros
• a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto)
• a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total)*/

#include<stdio.h>

int main(){
    float valor, total, parcela, comissaoVista, comissaoParc;

    printf("\n Insira um valor:");
    scanf("%f",&valor);

    total = valor - valor*0.1;
    parcela = total/3;
    comissaoVista = total/20;
    comissaoParc = valor/20;

    printf("\n O total com desconto:%f\n Valor de cada parcela:%f\n Comissao do vendedor a vista:%f\n Comissao do vendedor parcelada:%f", total, parcela, comissaoVista, comissaoParc);
}