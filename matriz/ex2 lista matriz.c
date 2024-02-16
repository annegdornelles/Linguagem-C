#include<stdio.h>
main() {
int r,k,x,y,cons;
printf ("digite o numero de linhas:");
scanf ("%d",&x);
printf ("digite o numero de colunas:");
scanf ("%d",&y);
printf ("digite a constante:");
scanf ("%d",&cons);
int m[x][y],a[x][y];
for (r=0;r<x;r++)
for (k=0;k<y;k++) {
        printf ("\n entre com os numero da matriz");
        scanf ("%d",&m[r][k]);
        a[r][k]=m[r][k]*cons;
}
printf ("\n matriz:");
for (r=0;r<x;r++)
for (k=0;k<y;k++) {
printf ("\n'%d'",a[r][k]);
}
}
