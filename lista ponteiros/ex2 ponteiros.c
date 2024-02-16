/*Faça um programa que seja capaz de comparar o endereço de dois ponteiros. Caso
o primeiro endereço seja maior que o segundo imprima o resultado da subtração do
primeiro endereço menos o segundo. Caso contrário imprima a subtração realizada
entre o segundo endereço menos o primeiro. ASTERISCO-CONTEUDO   ECOMERCIAL-ENDEREÇO*/

#include<stdio.h>
main (){

int x,*p,*q,sub=0,y;

p=&x;
q=&y;

if (p>q){
printf ("\n p>q:%d",p-q);
}

else
printf ("\n p<q:%d",q-p);

}
