#include<stdio.h>
main (){
int i,j,m[4][4];
for (i=0;i<4;i++){
for (j=0;j<4;j++){
printf ("Insira os elementos da matriz:");
scanf ("%d",&m[i][j]);
}
}
for (i=0;i<4;i++){
    for (j=0;j<4;j++){
if (i>j==0){
printf ("\n eh uma matriz triangular superior");
break;
}
else {
printf ("\n nao eh uma matriz triangular superior");
break;
}
}
}
}

