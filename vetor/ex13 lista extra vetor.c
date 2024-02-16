#include<stdio.h>
 main () {
     int i,v[20],par=0,mult=0;
     for (i=0;i<20;i++) {
         printf ("digite um numero");
         scanf ("%d",&v[i]);
         if (v[i]%2==0)
         par++;
         if (v[i]%5==0)
         mult++;

     }
     printf ("pares:'%d'\n multiplos de 5:'%d'",par,mult);
 }


