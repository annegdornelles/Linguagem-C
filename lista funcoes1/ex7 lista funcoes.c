/*- Escreva em C a fun��o VERIFICA. A fun��o recebe um n�mero inteiro (n). A fun��o deve
devolver na vari�vel resto o resto inteiro da divis�o. A fun��o deve retornar se o n�mero (n) �
par (1) ou �mpar (0).*/

#include<stdio.h>

int verifica(int n);

 main (){
    int x;

    printf ("Insira um numero");
    scanf ("%d",&x);

    int resto2 = verifica (x);

    if (resto2==0){
        printf ("par");
    }

    else
        printf ("impar");

    return 0;
}

int verifica (int n) {
    int resto = n%2;

    return resto;
}

