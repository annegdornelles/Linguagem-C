//: Ler duas matrizes A e B, cada uma de duas dimensões com 2 linhas e
//2 colunas. Construir uma matriz C de mesma dimensão, onde C é formada pela
//soma dos elementos da matriz A com os elementos da matriz B. Gere a matriz A e
//B com números aleatórios.
#include<stdio.h>
main () {
int l,c,a[2][2],b[2][2],d[2][2];
for (l=0;l<2;l++)
for (c=0;c<2;c++) {
printf ("entre com os elementos da matriz A");
scanf ("%d",&a[l][c]);
}
for (l=0;l<2;l++)
for (c=0;c<2;c++) {
printf ("entre com os elementos da matriz B");
scanf ("%d",&d[l][c]);
}
for (l=0;l<2;l++)
for (c=0;c<2;c++) {
d[l][c]=a[l][c]+b[l][c];
}
for (l=0;l<2;l++)
for (c=0;c<2;c++) {
printf ("os elementos da matriz C:'%d'",d[l][c]);
}
}
