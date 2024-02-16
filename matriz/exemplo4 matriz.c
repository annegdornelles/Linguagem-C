#include<stdio.h>
main () {
int l,c,soma=0,a[3][3];
for (l=0;l<2;l++)
for (c=0;c<2;c++) {
printf ("entre com os elemntos da matriz A");
scanf ("%d",&a[l][c]);
}
for (l=0;l<2;l++)
for (c=0;c<2;c++) {
if (l<c)
{
soma=soma+a[l][c];
}
}
printf ("a soma dos elementos da matriz:'%d'",soma);
}
