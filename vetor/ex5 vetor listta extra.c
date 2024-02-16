#include<stdio.h>
main () {
int v[20],a[5],b[5],i,pares=0,impar=0,valor;
for (i=0;i<20;i++) {
    printf ("digite o valor");
    scanf ("%d",&valor);
    if (valor%2==0)
        pares++;
        a[5]=pares;

    if (valor%2==1)
        impar++;
        b[5]=impar;
    }
    printf ("pares:'%d'",pares);
    printf ("impares:'%d'",impar);
}
