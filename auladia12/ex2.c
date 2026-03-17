/*Leia dois números inteiros x e y e imprima o sucessor de x e
o antecessor de y, utilizando os operadores de incremento e
decremento.*/

#include<stdio.h>

int main(){
    int x,y, ant,suc;

    printf("\n Insira o primeiro num inteiro:");
    scanf("%d",&x);

    printf("\n Insira o segundo num inteiro:");
    scanf("%d", &y);

    suc=++x;
    ant=--y;

    printf("\n Sucessor do primeiro:%d\n Antecessor do segundo:%d\n", suc, ant);
}

/*se y=5;
x=y++;
x vale 5 e y vale 6

se b=2;
a=++b;
a vale 3 e b vale 3 tbm*/