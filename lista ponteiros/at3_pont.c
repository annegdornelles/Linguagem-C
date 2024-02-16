#include<stdio.h>

main(){


    int y, *p, x;

    y = 0; // y vai reseber o valor de 0
    p = &y; //p vai receber endereço de y
    x = *p; //x vai receber o conteúdo de p
    x = 4; // x vai receber o valor de 4

    (*p)++; // o conteúdo de p vai ser adicina a 1
    x--; // x vai ser subtraido poir 1
    (*p) += x; // o conteudo de p vai ser soma e com o valor de x

    printf ("y = %d\n", y);
    return(0);




}