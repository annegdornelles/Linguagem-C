/*Escreva a fun��o: HIPOTENUSA. A fun��o recebe o cateto adjacente (b) e o cateto oposto
(a) e retorna o valor da hipotenusa dado pela seguinte f�rmula:*/

#include<stdio.h>

float hipotenusa (float co,float ca);

main (){

float ca,co,hi2=0,hi;

printf ("Insira o cateto oposto:");
scanf ("%f",&co);

printf ("Insira o cateto adjacente:");
scanf ("%f",&ca);

hi2=hipotenusa(co,ca);

printf ("\n Hipotenusa:%f",hi2);

}

float hipotenusa (float co,float ca) {

float hi,soma;

soma=pow(co,2)+pow(ca,2);

hi=sqrt(soma);

return hi;

}
