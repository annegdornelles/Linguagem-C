/*-Criar um algoritmo que armazene cinco nomes em um vetor e depois possa ser digitado um nome e, se
for encontrado, imprimir a posição desse nome no vetor; caso contrário, imprimir uma mensagem.*/

#include<stdio.h>
#include<string.h>
main (){

char nome[5][100],busca[100];
int i;

for (i=0;i<5;i++){

    printf ("Digite um nome:");
    scanf ("%s",nome[i]);//substituir pra gets
}

printf ("Insira um nome para ser buscado:");
scanf ("%s",busca);

for (i=0;i<5;i++){

    if (strcmp(busca,nome[i])==0){
        printf ("Nome:%s Indice:%d",busca,i+1);
        break;
    }

    else
    printf ("Nome nao encontrado"); //qualquer coisa tira o else
}
}
