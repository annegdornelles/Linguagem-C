#include<stdio.h>
main () {
    int i,v[4],a[4];
    for (i=0;i<4;i++) {
        printf ("Digite o vetor");
        scanf ("%d",&v[i]);
    }
    for (i=0;i<4;i++) {
        a[i]=a[0]+v[i];
    }
    for (i=0;i<4;i++) {
        printf ("\nNovo vetor:%d",a[i]);
    }
}
