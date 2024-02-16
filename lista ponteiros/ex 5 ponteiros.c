/*) Construa um programa que contenha dois vetores um do tipo int e outro do tipo float
de 10 posição já inicializados (0 até 9). Após mostre os valores que se encontram
dentro dos dois vetores. Faça esse procedimento utilizando ponteiros.*/

#include<stdio.h>
main (){

int v={0,1,2,3,4,5,6,7,8,9};
float vet={0,1,2,3,4,5,6,7,8,9};
float *p2;
int *p,i;

p=v;
p2=vet;


for (i=0;i<10;i++){
printf ("\n %d",*p++);
}

for (i=0;i<10;i++){
printf ("\n %f",*p2++);
}

}
