/*- Escreva em C a função VERIFICA. A função recebe um número inteiro (n). A função deve
devolver na variável resto o resto inteiro da divisão. A função deve retornar se o número (n) é
par (1) ou ímpar (0).*/

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
//

