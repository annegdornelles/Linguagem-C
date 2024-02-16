/*Escreva um programa que declare uma matriz 100x100 de inteiros. Você deve
inicializar a matriz com zeros usando ponteiros. Preencha depois a matriz com os
números de 1 a 10.000 usando ponteiros.*/

#include <stdio.h>
# include <conio.h>
main()
{
int m[3][3];
int *p;
int i,j;

m[0][0]=0;

p=m[0];

for(i=0;i<9;i++){

    *p=i;
            printf ("\n %d",*p);
        }

}
