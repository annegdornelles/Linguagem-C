/*Leia o preço base de um produto. A seguir, calcule um
desconto de 10% no preço base e exiba o preço base e o
novo preço. Na sequência, calcule um aumento de 20% no
preço base e exiba o preço base e o novo preço.*/

#include<stdio.h>

int main(){
    float preco, aumento, desconto;

    printf("\n Insira o preco:");
    scanf("%f",&preco);

    desconto = preco - preco*0.1;

    aumento = preco + preco*0.2;

    printf("\n Preco original:%.2f\n Preco com desconto:%.2f\n Preco com aumento:%.2f", preco, desconto, aumento);
}