#include<stdio.h>
main (){
int m[5][5],a[10]={0,0,0,0,0,0,0,0,0,0,},b[10]={0,0,0,0,0,0,0,0,0,0,},di[10]={0,0,0,0,0,0,0,0,0,0,};
int i,j,r,aa=0,bb=0;
for (i=0;i<5;i++){
for (j=0;j<5;j++){
printf ("Insira os elementos da matriz:");
scanf ("%d",&m[i][j]);
}
}
for (i=0;i<5;i++){
for (j=0;j<5;j++){
if (i<j){
b[bb]=m[i][j];
bb++;
}
if (i+j>=5){
a[aa]=m[i][j];
aa++;
}
}
}
for (r=0;r<10;r++){
di[r]=a[r] - b[r];
printf ("\n Diferenca entre os vetores A e B:%d",di[r]);
}
}

