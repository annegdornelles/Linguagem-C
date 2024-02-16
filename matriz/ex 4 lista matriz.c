#include<stdio.h>
main () {
int op,soma=0,di=0,subt=0,mult=0,ordem,i,j;
printf ("digite a ordem das matrizes");
scanf ("%d",&ordem);
int a[ordem][ordem],b[ordem][ordem];
printf ("digite os elementos da matriz A");
for (i=0;i<ordem;i++)
for (j=0;j<ordem;j++) {
    scanf ("%d",&a[i][j]);
}
printf ("digite os elementos da matriz B");
for (i=0;i<ordem;i++)
for (j=0;j<ordem;j++) {
    scanf ("%d",&b[i][j]);
}
printf ("qual operacao deseja fazer?\n digite 1 caso seja soma\n digite 2 caso seja subtracao\n digite 3 caso seja multiplicacao\n digite 4 caso seja divisao");
scanf ("%d",&op);
for (i=0;i<ordem;i++)
for (j=0;j<ordem;j++) {
    switch (op) {
        case 1:
        soma=a[i][j]+b[i][j];
        printf ("soma: '%d'",soma);
        break;
        case 2:
        subt=a[i][j]-b[i][j];
        printf ("subtracao:'%d'",subt);
        break;
        case 3:
        mult = a[i][j] * b[i][j];
        printf ("multiplicacao:'%d'",mult);
        break;
        case 4:
        di=a[i][j]/b[i][j];
        printf ("divisao:'%d'",di);
        break;
        default:
        printf ("numero invalido");
    }
}
}

