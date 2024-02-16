#include<stdio.h>
main () {
int i,k,m[4][4],dp=0,ds=0;
for (i=0;i<4;i++)
for (k=0;k<4;k++) {
printf ("digite os elementos da matriz");
scanf ("%d",&m[i][k]);
if (i==k) {
dp=dp+m[i][k];
}
}
for (i=0;i<4;i++)
for (k=0;k<4;k++) {

if (k==4-1-i) {
ds=ds+m[i][k];
}
}
printf ("soma da diagonal principal:'%d'\n soma da diagonal secundaria:'%d'",dp,ds);
}
