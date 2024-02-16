/*Considere que uma empresa precisa armazenar os seguintes dados de um cliente:
o Nome completo com no máximo 50 caracteres;
o renda mensal do cliente;
o ano de nascimento;
o possui ou não carro. */

#include<stdio.h>

typedef struct cliente{
    char nome[50],carro;
    float renda;
    int ano;
};

main (){
   struct cliente empresa;

   printf ("\n Insira seu nome:");
   scanf ("%s",empresa.nome);

   printf ("\n Insira sua renda:");
   scanf ("%f",&empresa.renda);

   printf ("\n Insira seu nascimento:");
   scanf ("%d",&empresa.ano);

   printf ("\n Possui ou nao carro (S/N)");
   scanf(" %c",&empresa.carro);

   printf ("\n Seus dados:\n Nome:%s\n Renda:%f\n Nascimento:%d\n",empresa.nome,empresa.renda,empresa.ano);

   if (empresa.carro=='S'){
   printf ("Possui carro");
   }

   else
   printf ("Nao possui carro");
   }
