#include<stdio.h>
main(){
int m[10][10],i,j,copia,contador=0,mt[10][10];
for (i=0;i<10;i++){
for (j=0;j<10;j++){
printf ("Digite os elementos da matriz");
scanf ("%d",&m[i][j]);
}
}
for (i=0;i<10;i++){
for (j=0;j<10;j++){
m[i][j]=contador++;
}
}
for (i=0;i<10;i++){
for (j=0;j<10;j++){
if (i==1)
{
copia=m[i][j];
m[i][j]=m[7][j];
m[7][j]=m[9][j];
}
if (j==3){
copia=m[i][j];
m[i][j]=m[9][j];
m[1][9]=copia;
}
}
}
for (i=0;i<10;i++){
for (j=0;j<10;j++){
printf ("%d",&m[i][j]);
}
}
}
