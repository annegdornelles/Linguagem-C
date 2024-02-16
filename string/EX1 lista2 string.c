#include<stdio.h>
#include<string.h>
main (){
    char str[20],str2[20],c,c2;
    int menu,cont=0,tam=0,tam2=0,i;

    printf ("O que voce deseja fazer com uma string:");
    printf ("\n 1 para Ler uma string S1 (tamanho maximo 20 caracteres)\n 2 para Imprimir o tamanho da string S1\n 3 para Comparar a string S1 com uma nova string S2 fornecida pelo usuario e imprimir o resultado da comparação\n 4 para concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenacão\n 5 para Imprimir a string S1 de forma reversa\n 6 Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser informado pelo usuario\n 7 para Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2\n");
    scanf ("\n%c",&menu);

    switch (menu){
        case 1:
        printf ("Insira uma string:");
        gets (str2);
        puts(str);
        break;

        case 2:
        printf ("Insira uma string:");
        gets (str);
        tam = strlen (str);
        printf ("Tamanho:%d",tam);
        break;

        case 3:
        printf ("Insira uma string:");
        gets (str);
        tam = strlen (str);
        printf ("Insira uma string:");
        gets (str2);
        tam2 = strlen (str2);
        if (strcmp(str,str2)==0){
            printf ("Mesma frase");
        }
        else if (tam>tam2){
            printf ("Primeira frase eh maior");
        }
        else
        printf ("Segunda frase eh maior");
        break;

        case 4:
        printf ("Insira uma string:");
        gets (str);
        printf ("Insira uma string:");
        gets (str2);
        strcat (str,str2);
        puts(str);
        break;

        case 5:
        printf ("Insira uma string:");
        gets (str);
        strrev (str);
        puts(str);
        break;

        case 6:
        printf ("Insira uma string:");
        gets (str);
        printf ("Insira um caracter:");
        scanf ("\n%c",&c);
        for (i=0;i<200;i++){
        if (str[i]==c){
            cont++;
        }
        }
        printf ("Quantidade:%d",cont);
        break;

        case 7:
        printf ("Insira uma string:");
        gets (str);
        printf ("Insira uma string:");
        gets (str2);
        printf ("Insira um caracter:");
        scanf ("\n%c",&c);
        printf ("Insira um caracter:");
        scanf ("\n%c",&c2);
        for (i=0;i<200;i++){
        if (str[i]==c){
            str[i]=c2;
            break;
        }
        }
        puts(str);
        break;

        default:
        printf ("Codigo invalido");
        break;
    }
    }

