#include<stdio.h>

int main(){
    float media=0, n1,n2, soma=0;
    int peso1, peso2;

    printf("\n Insira a primeira nota:");
    scanf("%f",&n1);

    printf("\n Insira o peso 1:");
    scanf("%d",&peso1);

    printf("\n Insira a segunda nota:");
    scanf("%f",&n2);

    printf("\n Insira o peso 2:");
    scanf("%d",&peso2);
    
    soma=(n1*peso1)+(n2*peso2);

    media = soma/(peso1+peso2);


    printf("\n A media eh:%f", media);


}