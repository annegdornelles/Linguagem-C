/*Construa uma estrutura chamada endere�o. Ela deve solicitar a 5 usu�rios o seu nome, a sua rua, o
seu n�mero e o andar em que mora. Ap�s imprima os dados digitados pelo usu�rio.*/

#include<stdio.h>

typedef struct endereco{
     char nome[100];
     char rua[100];
     int numero;
     int andar;
     };

main (){

struct endereco casa[5];
int i;

for (i=0;i<3;i++){

  printf ("Insira seu nome:");
  scanf ("%s",casa[i].nome);

  printf ("\n Insira sua rua");
  scanf ("%s",casa[i].rua);

  printf ("\n Insira o numero da sua casa:");
  scanf ("%d",&casa[i].numero);

  printf ("\n Insira seu andar:");
  scanf ("%d",&casa[i].andar);
  }

  for (i=0;i<3;i++){
  printf ("\n Seu nome:%s\n Sua rua:%s\n O numero de sua casa:%d\n O seu andar:%d",casa[i].nome,casa[i].rua,casa[i].numero,casa[i].andar);
  }
}

