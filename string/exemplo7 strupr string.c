#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
main (){
char str1[100];
printf ("Entre com uma string:");
gets (str1);
strupr(str1); //para tornar minusculo eh strlwr(str1)
//strrev inverte a matriz
printf ("\n A string resultante es:%s",str1);
}
