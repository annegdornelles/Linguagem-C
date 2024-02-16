#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
main (){
char str1[20];
char caracter [2];
printf ("\n");
printf ("Substituindo os caracteres da string:");
printf ("------------\n");
printf ("\n");
printf ("Digite a string:");
scanf ("%s",str1);
printf ("\n");
printf ("Caracter:");
scanf ("%s",&caracter);
printf ("\n");
printf ("Substituindo==>%s",strset(str1,caracter[0]));
}
