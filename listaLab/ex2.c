/*Faça um programa que declare 3 variáveis inteiras a, b e c e uma variável float d.
Atribua 5 para a e 2 para b. A seguir, calcule a divisão de a por b, atribuindo essa
expressão a c, imprimindo o valor da variável inteira c. Na sequência, o programa
deve calcular a divisão de a por b, atribuindo essa expressão a d, utilizando o
recurso de cast (exibido no exemplo acima). */

#include<stdio.h>

int main(){
    int a, b,c;
    float d;

    a = 5;
    b = 2;

    c = a/b;

    d = (int)a/b;

    printf("\n D vale:%f\n C vale:%d", d, c);
}