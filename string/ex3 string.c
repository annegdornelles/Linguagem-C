/* Um teste composto por dez quest�es foi proposto a um aluno. Cada quest�o admite as
alternativas identificadas pelas letras A, B, C, D e E. Voc� dever� solicitar antes de tudo o
gabarito do teste, que dever� ser armazenado em uma matriz string. Solicite as respostas
para cada quest�o e guarde-as em uma matriz string. Voc� dever� desenvolver um
algoritmo que seja capaz de escrever a quantidade de acertos que o aluno obteve.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main (){
char gabarito[10]={'a','b','d','e','d'},teste[10];
int i,acertos=0;

  printf ("Insira as respostas:");
  gets (teste);

  for (i=0;i<5;i++){
    if (gabarito[i]==teste[i]){
        acertos++;
    }
  }
  printf ("Numero de acertos:%d",acertos);
  }
