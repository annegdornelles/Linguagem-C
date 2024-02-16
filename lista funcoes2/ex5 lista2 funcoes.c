/*Desenvolva uma função que converta os números digitados para números binários.*/

#include<stdio.h>

int binario (int num,int resto,int *bi);

main (){
    int num,resto,bi;

    printf ("Insira um numero para ser transformado em binario");
    scanf ("%d",&num);

    binario(num,resto,&bi);

    printf ("\n Numero %d em binario:%d",num,bi);

    return 0;
}

int binario (int num,int resto,int *bi){
    int base=1;
    *bi=0;

    while (num>0){
        int resto=num%2;
        *bi+=resto*base;
        num=num/2;
        base=base*10;
        }
}
