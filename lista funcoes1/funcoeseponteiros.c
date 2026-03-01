//funcoes e ponteiros. saida com ponteiro (10)

#include<stdio.h>

int altera(int *x){
    *x=10;
}

int main(){
    int n=0;
    altera(&n);
printf("\n Altera:%d", n);
}

//se voce quer ALTERAR valor da main ou retornar MAIS DE UM VALOR usa ponteiro, se nao, nao precisa.