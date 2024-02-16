#include<stdio.h>
main () {
int i,v[10],ref;
printf ("digite um valor de referencia");
scanf ("%d",&ref);
for (i=0;i<10;i++) {
    printf ("digite um numero");
    scanf ("%d",&v[i]);
}
printf ("lista de numeros maiores que a referencia:");
for (i=0;i<10;i++) {
if (v[i]>ref)
printf ("\n %d",v[i]);
}
printf ("\n lista de numeros menores que a referencia:");
for (i=0;i<10;i++) {
if (v[i]<ref)
printf ("\n %d",v[i]);
}
printf ("numeros iguais ao valor de referencia:");
for (i=0;i<10;i++) {
if (v[i]=ref)
printf ("\n %d",v[i]);
break;
}
}
