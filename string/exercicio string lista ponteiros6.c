/*Implemente um programa C que leia 2 strings digitados pelo usu�rio e verifique se
seus conte�dos s�o iguais. Este programa deve imprimir os strings digitados e uma
mensagem dizendo que as strings s�o iguais ou diferentes.*/
#include<stdio.h>
main (){

char str[100],str2[100];

printf ("\n Insira uma string:");
gets (str);

printf ("\n Insira uma segunda string:");
gets (str2);


if(strcmp(str,str2)==0){
        puts (str);
        puts (str2);
        printf ("\n Mesma frase");
}

else
    puts (str);
    puts (str2);
    printf ("\n Frase diferente");
}
