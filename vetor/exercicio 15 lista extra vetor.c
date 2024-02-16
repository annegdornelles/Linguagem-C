#include<stdio.h>
main () {
    int i,v[5],a[5],maior=0;
    for (i=0;i<5;i++) {
        printf ("Digite os elementos do vetor:");
        scanf ("%d",&v[i]);
    }
    for (i=0;i<5;i++) {
        if (v[i]>maior) {
            maior=v[i];
        }
    }
    for (i=0;i<5;i++) {
        a[i]=v[i]*maior;
    }
for (i=0;i<5;i++) {
    printf ("\n Primeiro vetor original:%d\n Segundo vetor:%d",v[i],a[i]);
}
}
