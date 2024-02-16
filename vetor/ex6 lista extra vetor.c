#include<stdio.h>
main () {
int i,v[15];
for (i=0;i<15;i++) {
    printf ("digite um numero");
    scanf ("%d",&v[i]);
}
printf ("lista:\n");
for (i=0;i<15;i++) {
printf ("'%d'-",i+1);
if (v[i]%2==0)
printf ("par \n");
else
printf ("impar \n");
}
}

