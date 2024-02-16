#include<stdio.h>
main () {
    int i,v[5],soma=0;
    float media=0;
    for (i=0;i<5;i++) {
        printf ("Digite os elementos da matriz:");
        scanf ("%d",&v[i]);
    }
    for (i=0;i<5;i++) {
        soma=soma+v[i];
    }
    media=soma/5;
    for (i=0;i<5;i++) {
        if (v[i]>media) {
            printf ("\nnumeros maiores que a media:%d",v[i]);
        }
    }
}
