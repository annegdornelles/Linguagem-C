/*A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes, coletando dados sobre o
salário e o número de filhos. Faça rotinas que:
a. Leia esses dados;
b. Calcule a média do salário da população;
c. Calcule a média de números de filhos;
d. Percentual de pessoas com salário até R$ 350,00.*/

#include<stdio.h>
#define populacao 5

typedef struct censo {
     float salario;
     int filhos;
};

main (){

     struct censo dados[populacao];
     float somas=0;
     int somaf=0,i,trezentos=0;
     float medias=0,mediaf=0,perc=0;

     for (i=0;i<populacao;i++){

        printf ("\n Insira seu salario:");
        scanf ("%f",&dados[i].salario);

        printf ("\n Insira a quantidade de filhos que voce possue:");
        scanf ("%d",&dados[i].filhos);

        somas = somas + dados[i].salario;
        somaf = somaf + dados[i].filhos;
}

medias=somas/populacao;
mediaf=somaf/populacao;

for (i=0;i<populacao;i++){
       if (dados[i].salario<=350){
            trezentos++;
}}

perc = (float)trezentos/populacao*100;

printf ("\n Media de filhos:%f\n Media de salario:%f\n Percentual de pessoas com salario ate 350:%f", mediaf,medias,perc);
}




