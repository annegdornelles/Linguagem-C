/*Escreva em C a função VERIFICA_QUADRANTE. A função recebe um valor para x e um
valor para y e retorna o número do quadrante (1,2,3 ou 4).*/

#include<stdio.h>

float qua(float num1, float num2);

void main(){

float x, y, quad;

printf("\n Entre com um numero:");
scanf("%f",&x);

printf("\n Entre com o segundo numero:");
scanf("%f",&y);

quad = qua (x,y);
}

float qua(float x, float y){

if ((x>0)&&(y>0)){
printf("\n Estao no primeiro quadrante.");}

if ((x<0)&&(y>0)){
printf("\n Estao no segundo quadrante.");}

if((x<0)&&(y<0)){
printf("\n Estao no terceiro quadrante.");}

if((x>0)&&(y<0)){
printf("\n Estao no quarto quadrante.");
}
}//
