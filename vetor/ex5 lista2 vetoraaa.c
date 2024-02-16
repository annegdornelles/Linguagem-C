#include<stdio.h>
main () {
    int i,v[10],a[5],b[5];
    for (i=0;i<10;i++){
        printf ("Digite o vetor");
        scanf ("%d",&v[i]);
    }
    for (i=0;i<5;i++){
        if (i<5) {
        if (v[i]%2==0) {
            a[i]=v[i];
        }
        }
        else {
            printf ("vetor cheio");
        }
    }
    for (i=0;i<5;i++){
        if (i<5) {
        if (v[i]%2==1) {
            b[i]=v[i];
        }
        }
        else {
            printf ("vetor cheio");
        }
    }
    for (i=0;i<10;i++) {
        printf ("\n Vetor de numeros pares:%d\n Vetor de numeros impares:%d",a[i],b[i]);
    }
}
