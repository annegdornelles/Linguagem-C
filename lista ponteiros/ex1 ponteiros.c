/*Construa um programa inicializando uma vari�vel qualquer mostrando ao final seu
resultado atrav�s de um ponteiro que aponta para outro ponteiro.*/

#include<stdio.h>
main (){

int x,*p,**q;

printf ("Insira uma variavel");
scanf ("%d",&x);

p=&x;
q=&p;
printf ("%d",**q);

}
