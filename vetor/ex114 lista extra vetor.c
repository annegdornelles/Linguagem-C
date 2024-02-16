#include<stdio.h>
 main () {
int i,v[8],soma=0,media=0,mult=0,mais=0,maior=0;
for (i=0;i<8;i++) {
    printf ("digite um numero");
    scanf ("%d",&v[i]);
    soma=soma+v[i];
    if (v[i]%5==0)
    mult++;
}
for (i=0;i<8;i++) {
    if ((v[i]>10)&&(v[i]<30))
    mais++;
}
for (i=0;i<8;i++) {
    if (v[i]>maior);
    maior=v[i];
}
media=soma/8;
printf ("\n multiplos de 5:'%d'",mult);
printf ("\n maiores que 10 e menores que 30:'%d'",mais);
printf ("\n maior valor:'%d'",maior);
printf ("\n media:'%d'",media);
 }
