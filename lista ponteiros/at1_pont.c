#include<stdio.h>
main(){

    int a = 1, *p, **q;

     p = &a;
     q = &p;

    printf("Resultado: %d", **q);

}