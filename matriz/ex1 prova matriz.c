//&Faça um programa que permita ao usuário entrar com uma matriz 3 x 3 de números inteiros. Em
//seguida, gere um array unidimensional pela multiplicação dos números de cada linha da matriz e mostrar
//na tela esse array. Por exemplo, a matriz:*/
#include<stdio.h>
main (){
int i,j,m[3][3],v[3]={0,0,0};
for (i=0;i<3;i++){
for (j=0;j<3;j++){
printf ("Insira os elementos da matriz:");
scanf ("%d",&m[i][j]);
}
}
for (i=0;i<1;i++){
for (j=0;j<3;j++){
v[i]=m[i][0]*m[i][1]*m[i][2];
}
}
for (i=1;i<2;i++){
for (j=0;j<3;j++){
        v[i]=m[i][0]*m[i][1]*m[i][2];
}
}
for (i=2;i<3;i++){
for (j=0;j<3;j++){
        v[i]=m[i][0]*m[i][1]*m[i][2];
}
        }
        for (i=0;i<3;i++){
printf ("\n Vetor:%d",v[i]);
}
}
