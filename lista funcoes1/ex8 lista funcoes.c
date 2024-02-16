/*- Escreva a função: VOGAIS. A função recebe uma string (nome) e retorna a quantidade de
vogais da string.*/

#include<stdio.h>

int vogais (char str[]){
    int tam=0,vog=0;

    tam = strlen (str);

    for (int i=0;i<tam;i++){
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            vog++;
        }
    }
    return vog;
}

main (){
    int vogais2;
    char str[100];

    printf ("Insira uma string");
    scanf ("%s",str);


    vogais2=vogais (str);

    printf ("\n Numero de vogais:%d",vogais2);

    return 0;
}
