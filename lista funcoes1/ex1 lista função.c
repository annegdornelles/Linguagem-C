/*Realize a soma de dois elementos. Faça isso através de uma função, a qual será chamada
na função principal.*/

#include<stdio.h>
#include<conio.h>

float soma (float num1, float num2);

void main (){

float r=0,num1,num2;

printf ("Insira um numero");
scanf ("%f",&num1);

printf ("Insira outro numero");
scanf ("%f",&num2);

r=soma(num1,num2);

printf ("Soma:%f",r);

return 0;
}

float soma (float num1, float num2){

float soma=num1+num2;

return soma;

}

