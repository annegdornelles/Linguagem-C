#include<stdio.h>
 main () {
int i,a[10],b[10],c[20],f;
for (i=0;i<10;i++) {
    printf ("digite os numeros do primeiro vetor");
    scanf ("%d",&a[i]);
}
for (i=0;i<10;i++) {
    printf ("digite os numeros do segundo vetor");
    scanf ("%d",&b[i]);
}
for (i=0;i<20;i++) {
    c[f++]=a[i];
    c[f++]=b[i];
}
 printf("\n Primeiro vetor:\n");
for (i = 0; i < 10; i++) {
    printf("%d ", a[i]);
    }
printf("\nSegundo vetor:\n");
for (i = 0; i < 10; i++) {
        printf("%d ", b[i]);
    }

    for (i = 0; i < 20; i++) {
        printf("%d ", c[i]);
    }
 }
