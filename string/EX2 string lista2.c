/*Escreva um programa que recebe do usuário uma string S, um caractere C, e uma posição I e devolve o
índice da primeira posição da string onde foi encontrado o caractere C. A procura deve começar a partir da
posição I.*/

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
//
