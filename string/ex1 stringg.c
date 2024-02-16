#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
main (){
char str[150];

    printf ("Digite uma frase:");
    gets (str);
    strupr(str);

    printf ("\n A string resultante e:%s",str);

}

//Escreva um programa em C para ler uma frase. A seguir converter todas as letras
//minúsculas existentes na frase para maiúsculas. Escrever a frase modificada.
