#include<stdio.h>
main() {
int m[5][5], i, j;
printf("Digite os elementos da matriz:\n");
for (i=0; i<5; i++)
for (j=0; j<5; j++) {
scanf("%d", &m[i][j]);
}
printf("Elementos fora da diagonal principal:\n");
for (i=0; i<5; i++)
for (j=0; j<5; j++) {
if (i=!j) {
printf("'%d'", m[i][j]);
}
}
}
