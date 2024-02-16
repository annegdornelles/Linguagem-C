/*Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui essa palavra.
Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse
caractere.*/
#include<stdio.h>
#include<string.h>
main (){
    char str[150],c;
    int vogais=0,cons=0,i;

    printf ("Escreva uma palavra:");
    gets(str);

    for (i=0;i<150;i++){
        if ((str[i]=='A')||(str[i]=='E')||(str[i]=='I')||(str[i]=='O')||(str[i]=='U')) {
            vogais++;
        }
        else
        cons++;
    }

    printf ("Digite uma letra:");
    scanf ("\n%c",&c);

    for (i=0;i<150;i++){
        if ((str[i]=='A')||(str[i]=='E')||(str[i]=='I')||(str[i]=='O')||(str[i]=='U')) {
            strset (str,c);
        }
    }
    printf ("Numero de vogais:%d\n Numero de consoantes:%d\n Frase modificada:%s", vogais,cons,str);
}



