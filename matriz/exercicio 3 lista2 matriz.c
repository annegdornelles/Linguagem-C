#include<stdio.h>
main () {
int i,j,a[3][3],soma[3]={0,0,0};
for (i=0;i<3;i++)
for (j=0;j<3;j++) {
printf ("digite os elementos da matriz");
scanf ("%d",&a[i][j]);
}
for (i=0;i<1;i++)
for (j=0;j<3;j++) {
soma[j]=soma[j]+a[i][j];
}
for (i=1;i<2;i++)
for (j=0;j<3;j++) {
soma[j]=soma[j]+a[i][j];
}
for (i=2;i<3;i++)
for (j=0;j<3;j++) {
soma[j]=soma[j]+a[i][j];
}

for (j=0;j<3;j++) {
printf ("\n matriz:'%d'",soma[j]);
}
}
