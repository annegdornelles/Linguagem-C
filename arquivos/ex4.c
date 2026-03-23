/*) Faça uma função que gere um arquivo texto com N linhas e M colunas, onde cada valor
numérico é um valor inteiro randômico. A separação entre uma coluna e outra deve ser feita
por um ou mais espaços em branco. Faça outra função para ler e imprimir o arquivo gerado. */

#include<stdio.h>

int main(){
    FILE *arquivo;
    int i,j, linhas, colunas;
    
    printf("\n Insira o numero de linhas:");
    scanf("%d",&i);

    printf("\n Insira o numero de colunas:");
    scanf("%d",&j);

    arquivo = fopen("arquivo.txt","w");

    for (i=0;i<linhas;i++){
       for(j=0;j<colunas;j++){
           fprintf(file, "%d\t",i*j);
       }

    }



}