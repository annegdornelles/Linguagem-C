#include<stdio.h>

main(){

    int um = 1 , dois = 2, *p, *q, subtracao;

    p = &um;
    q = &dois;

    if(p > q) {
        subtracao = p - q;
        printf("Subtracao do primeiro pelo segundo: %d", p - q);
    }
    if(p < q){
         printf("Subtracao do segundo pelo primeiro: %d", q - p);
    }

    printf("\num :%d", &p);
    printf("\ndois: %d", &q);
}