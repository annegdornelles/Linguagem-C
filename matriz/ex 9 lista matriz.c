#include<stdio.h>
main () {
int m[4][4],i,j,soma=0,media=0;
for (i=0;i<2;i++)
for (j=0;j<2;j++) {
printf ("Digite os elementos da matriz:");
scanf ("%d",&m[i][j]);
if (i>j) {
soma=soma+m[i][j];
}
}
media=soma/16;
printf ("media dos elementos abaixo da diagonal principal:'%d'",media);
}
