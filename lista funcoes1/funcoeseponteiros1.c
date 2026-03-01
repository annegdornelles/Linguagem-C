//entendendo a diferença de passar funcoes e ponteiros. sem ponteiros: (saida 0);

#include<stdio.h>

int altera(int x){
    x=10;
}

int main (){
     int n;
     n=0;
     altera(n);

     printf("\n Alterado:%d", n);
}