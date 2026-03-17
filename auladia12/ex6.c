/*Leia um número inteiro (utilizar uma única variável inteira) de 3
algarismos e imprima apenas o algarismo das dezenas. */

#include<stdio.h>
#include<math.h>

int main(){
    int num, centena=0, dezena=0, resultado=0;

    printf("\n Insira um numero de 3 algarismos:");
    scanf("%d",&num);

    centena = num/100;

    dezena = fabs(num);

    resultado = (centena - dezena)*10;

    printf("\n a quantidade de dezena é: %d", resultado);
}