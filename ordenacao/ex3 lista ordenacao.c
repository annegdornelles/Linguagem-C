/*-Implemente um programa que simule o jogo do Bingo. Deve gerar sucessivamente n�meros aleat�rios
compreendidos entre 1 e 90 at� que o utilizador digite a palavra BINGO. Para facilitar a verifica��o do
cart�o premiado, ap�s o sorteio de um novo n�mero deve apresentar a lista ordenada de todos os n�meros
j� sorteados.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

main (){

int i=0,cont=0,j,num=0,aux;
int sort[90];
char str[50];

srand(time(NULL));

do{

    printf ("Gerando numeros aleatorios entre 1 e 90:");
    printf("%d ", num =(rand() % 90)+1);
    
    sort [i] = num; 
    
    printf ("\n Digite BINGO quando quiser parar a sequencia:");
    scanf ("%s",str);
    
    i++;
    cont=i;

    }

while ((strcmp(str,"BINGO")!=0));

for (i=0;i<cont;i++){
    for (j=i+1;j<cont;j++){
        
        if (sort[i]>sort[j]){
            aux=sort[i];
            sort[i]=sort[j];
            sort[j]=aux;
        }
    }
}

for (i=0;i<cont;i++){
    
    printf ("\n Ordem crescente dos numeros sorteados:%d",sort[i]);
}
        
}

//uso de for, do e while
