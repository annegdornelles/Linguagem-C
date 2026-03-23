/*Realize a troca dos valores das variáveis do exercício anterior usando apenas duas
variáveis.*/

#include<stdio.h>

int main(){
    int a,b;

    printf("\n Insira o valor a:");
    scanf("%d",&a);//2
    
    printf("\n Insira o valor de b:");
    scanf("%d",&b);//3

    a = a+b;//a=5
    b = a-b;//b=2
    a = a-b;//3

     printf("\n O valor de a agora:%d\n O valor de b agora:%d", a, b);

}