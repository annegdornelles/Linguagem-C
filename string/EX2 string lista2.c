/*Escreva um programa que recebe do usu�rio uma string S, um caractere C, e uma posi��o I e devolve o
�ndice da primeira posi��o da string onde foi encontrado o caractere C. A procura deve come�ar a partir da
posi��o I.*/

#include<stdio.h>
#include<string.h>
main (){
  char str[150],c;
  int i,p,t;

  printf ("Digite a string:\n");
  gets (str);

  printf ("Digite o caracter:\n");
  scanf ("%c",&c);

  printf ("Digite a posicao:\n");
  scanf ("%d",&p);

  for (i=p;i<150;i++){
    if (str[i]==c){
        t=i;
    }
  }

  printf ("%d",t);
}

