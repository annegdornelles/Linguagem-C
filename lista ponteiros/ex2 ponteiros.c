/*Fa�a um programa que seja capaz de comparar o endere�o de dois ponteiros. Caso
o primeiro endere�o seja maior que o segundo imprima o resultado da subtra��o do
primeiro endere�o menos o segundo. Caso contr�rio imprima a subtra��o realizada
entre o segundo endere�o menos o primeiro. ASTERISCO-CONTEUDO   ECOMERCIAL-ENDERE�O*/

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
