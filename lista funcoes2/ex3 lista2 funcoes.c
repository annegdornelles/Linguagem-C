/*Elabore uma função que receba um vetor contendo N valores e retorne por referência o
maior elemento do vetor e o número de vezes que esse elemento ocorreu no vetor*/

#include<stdio.h>

float va(float v[],int n,float *maior,int *cont);

main (){
int i,n,cont=0;
float maior=0;

printf ("Insira o tamanho do vetor");
scanf ("%d",&n);

float v[n];

for (i=0;i<n;i++){

printf ("\n Insira um numero:");
scanf ("%f",&v[i]);

}

va (v,n,&maior,&cont);

printf ("Maior numero do vetor:%f\n Numero de vezes que aparece:%d",maior,cont);

return 0;
}

float va(float v[],int n,float *maior,int *cont){

*maior = v[0];
*cont=1;


for (int i=1;i<n;i++){
if (v[i]>*maior){
*maior=v[i];
*cont=1;
}
else if (v[i]==*maior){
(*cont)++;
}
}
}








