#include<stdio.h>
main () {
int i,j,m[5][5],a[5][5];
for (i=0;i<5;i++)
for (j=0;j<5;j++) {
    printf ("digite a matriz");
    scanf ("%d",&m[i][j]);
}
for (i=0;i<5;i++)
for (j=0;j<5;j++) {
    if ((i+j)%2==0)
    a[i][j]=m[i][j];
    else
    a[i][j]=0;
}
for (i=0;i<5;i++)
for (j=0;j<5;j++) {
    printf ("\n matriz original:'%d'\n matriz gerada:'%d'",m[i][j],a[i][j]);
}
}
