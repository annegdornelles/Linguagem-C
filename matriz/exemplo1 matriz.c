//Exemplo 1: Ler uma matriz 3x3 e mostrar seu conteúdo
#include<stdio.h>
main (){
int i,j,m[3][3];
for (i=0;i<3;i++)
for (j=0;j<3;j++) {
printf ("\n entre com os elementos da matriz");
scanf ("%d",&m[i][j]);
}
for (i=0;i<3;i++)
for (j=0;j<3;j++) {
printf ("\n os elementos da matriz:'%d'",m[i][j]);
}
}

