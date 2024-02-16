#include<stdio.h>
main (){
    int i,v[20],maior=0,menor=0,igual=0;
    for (i=0;i<20;i++){
        printf ("Insira os elementos do vetor:");
        scanf ("%d",&v[i]);
    }
for (i=0;i<20;i++){
        if (v[0]>v[i]){
            menor++;
        }
        if (v[0]<v[i]){
            maior++;
        }
        if (v[0]==v[i]){
            igual++;
        }
    }
        printf ("\n Quantidade de elementos maior que o primeiro elemento do vetor:%d\n Quantidade de elementos igual ao primeiro elemento do vetor (contando ele mesmo):%d\n Quantidade de elementos menor que o vetor:%d",maior,igual,menor);
    }
