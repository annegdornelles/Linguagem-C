#include<stdio.h>
main () {
int a[2][2],x,j,i;
for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
            {
            printf ("digite o numero");
            scanf ("%d",&a[i][j]);

            }
    }
printf ("digite um valor para ser encontrado na matriz");
scanf ("%d",&x);
for (i=0;i<2;i++)
for (j=0;j<2;j++) {
if (x==a[i][j]) {
printf ("linha: %d \n coluna: %d ",i,j);
}
else
    printf ("valor nao encontrado");
}
}
