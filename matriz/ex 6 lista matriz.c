#include<stdio.h>

int main() {
int a[7][7],i,j;

for (i=0;i<7;i++)
for (j=0;j<7;j++) {
printf("Digite um elemento da matriz:");
scanf("%d",&a[i][j]);
}
int menorr=a[1][0];
int menora=a[0][5];
for (i=0; i<7; i++)
for (j=0; j<7; j++) {
if (i+j>=7) {
if (a[i][j]<menorr) {
menorr=a[i][j];
}
}
if (i+j==9) {
if (a[i][j]<menora) {
menora=a[i][j];
}
}
}
printf("Menor valor acima: %d\nMenor valor abaixo: %d\n", menora,menorr);
}





