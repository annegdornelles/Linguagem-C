#include<stdio.h>
main () {
int m[5][5],i,j,b[5][5];
for (i=0;i<5;i++)
for (j=0;j<5;j++) {
printf ("digite a matriz");
scanf ("%d",&m[i][j]);
}
for (i=0;i<4;i++)
for (j=0;j<5;j++) {
if (i<j)
b[i][j]=m[i][j];
}
for (i=0;i<4;i++)
for (j=0;j<5;j++) {
if (i>j)
b[i][j]=m[i][j];
}
for (i=0;i<4;i++)
for (j=0;j<5;j++) {
printf ("\n troca das diagonais inferiores e superiores;'%d'",b[i][j]);
}
}
