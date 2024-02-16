#include<stdio.h>
main () {
int i,j,m[4][4];
for (i=0;i<4;i++)
for (j=0;j<4;j++) {
    printf ("Digite um elemento da matriz:");
    scanf ("%d",&m[i][j]);
}
for (i=0;i<10;i++)
for (j=0;j<10;j++) {
if (j==3-i) {
    printf ("Diagonal principal:'%d'",m[i][j]);
}
}
}
