/*Cebolinha é um personagem de história em quadrinhos que quando falava, trocava o "r" pelo "l"
(problema conhecido como dislalia). Faça um programa que gera uma versão de um texto fornecido com
todos "r" e "rr" trocados por "l", exceto no caso em que o "r" ocorre no final de uma palavra.*/
#include<stdio.h>
#include<string.h>
main (){
    char str[200];
    int tam=0,i;

    printf ("Insira a string:");
    gets(str);//dps trocar pra gets

    tam = strlen (str);

    for (i=0;i<tam;i++){
        if (str[i]=='r'){
            if (tam=i-1||str[i+1]!='r'){
            strset (str[i],'l');
        }
    }
    printf ("Frase modificada:%s",str);
}
}
