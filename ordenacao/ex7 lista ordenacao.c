/*Armazenar nomes e notas das PR1 e PR2 de 15 alunos. Calcular e
armazenar a média arredondada.Armazenar também a situação do aluno: AP
ou RP. Imprimir uma listagem contendo nome, média e situação de cada
aluno, tabulando.*/

#include<stdio.h>
#include<stdio.h>
main (){

char str[5][100];
float n1[5],n2[5],soma=0;
int media[5],i;

for (i=0;i<5;i++){
    printf ("Insira seu nome: ");
    scanf ("%s",str[i]);
    printf ("\n Insira a nota da primeira prova: ");
    scanf ("%f",&n1[i]);
    printf ("\n Insira a nota da segunda prova: ");
    scanf ("%f",&n2[i]);
}

for (i=0;i<5;i++){
    soma=n1[i]+n2[i];
    media[i] = soma/2;
}

for (i=0;i<5;i++){
    printf ("\n Nome:%s  Media:%d  Situacao:",str[i],media[i]);
    if (media[i]>7){
        printf (" aprovado");
    }
    else
    printf (" reprovado");
}

}//sistema de notas aluno
