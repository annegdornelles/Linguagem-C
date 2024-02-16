#include<stdio.h>
main () {
int l,c,a[2][2],maior=0,b[2][2];
for (l=0;l<2;l++)
for (c=0;c<2;c++) {
printf ("entre com os elemntos da matriz A");
scanf ("%d",&a[l][c]);
}
for (l=0;l<2;l++)
for (c=0;c<2;c++) {
if (l==c)
{
if(a[l][c]>maior)
maior=a[l][c];
b[l][c]=a[l][c]/maior;
printf ("\n divisao '%d'",b[l][c]);
}
}
printf ("o maior elemento da diagonal:'%d'",maior);
}

