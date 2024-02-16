/*Escreva um programa que peça ao utilizador o número, nome e nota de dois testes dos alunos de uma
turma, guarde essa informação numa estrutura, e mostre a pauta com os seguintes campos: número,
nome, nota1, nota2, média.*/

#include<stdio.h>
#include<string.h>

typedef struct alunos{
    char nome[50];
    float n1;
    float n2;
    int numero;
    };

main (){
    struct alunos nota[3];
    int i;
    float media[3]={0,0,0};

    for (i=0;i<3;i++){

        printf ("\n Insira seu nome:");
        scanf ("%s",nota[i].nome);

        printf ("\n Insira seu numero:");
        scanf ("%d",&nota[i].numero);

        printf ("\n Insira sua nota do teste 1:");
        scanf ("%f",&nota[i].n1);

        printf ("\n Insira sua nota do teste 2:");
        scanf ("%f",&nota[i].n2);
}

   for (i=0;i<3;i++){
        media[i]=(nota[i].n1+nota[i].n2)/2;

        printf ("\n Seu nome:%s\n Seu numero:%d\n Sua nota do teste 1:%f\n Sua nota do teste 2:%f\n Sua media:%f",nota[i].nome,nota[i].numero,nota[i].n1,nota[i].n2,media[i]);
        }
}
