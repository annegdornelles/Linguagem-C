/* Desenvolva um algoritmo onde o usu�rio entra com uma string e retorne como
sa�da a string invertida. Para isso utilize a fun��o strrev(), a qual possui a sintaxe: strrev(string).*/

#include<stdio.h>
#include<string.h>
main (){

    char str[100];

    printf ("Insira uma string:");
    gets (str);

    strrev(str);

    printf ("\n %s",str);
}
