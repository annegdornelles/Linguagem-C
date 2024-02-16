/* Armazenar nome e salário de 20 pessoas. Calcular e armazenar o novo
salário sabendo-se que o reajuste foi de 8%. Imprimir uma listagem
numerada com nome e novo salário.*/

#include<stdio.h>
#include<string.h>
main (){

char str[5][100];
float salario[5],nsalario[5];
int i;

for (i=0;i<5;i++){
    printf ("Insira seu nome: ");
    scanf ("%s",str[i]);
    printf ("\n Insira seu salario:");
    scanf ("%f",&salario[i]);

    nsalario[i]=salario[i]+salario[i]*0.08;
}

for (i=0;i<5;i++){
    printf ("\n Nome:%s  Novo salario:%f",str[i],nsalario[i]);
}
}
