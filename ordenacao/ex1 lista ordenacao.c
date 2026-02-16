/*Escreva um programa que receba um vetor de números naturais e os ordene de forma crescente. Por
exemplo, o vetor [4, 5, 3, 3, 3, 5, 7, 7, 7, 7, 7] ficará da seguinte forma: [3, 3, 3, 4, 5, 5, 7, 7, 7, 7, 7].*/

#include<stdio.h>
 int main(){

int num[5],i,j,aux;

for(i=0;i<5;i++){

printf("\n Entre com os numeros para transformar em ordem crescente:");
scanf("%d",&num[i]);
}

for(i=0;i<5;i++){
for(j=i+1;j<=5;j++){

if(num[i]>num[j])
{


aux=num[i];
num[i]=num[j];
num[j]=aux;
} }}

for(i=0;i<5;i++){
printf("\n A ordem, crescente, dos numeros inseridos eh: %d",num[i]);
}
}

//ordenacao (aqui ja utilizando for)

