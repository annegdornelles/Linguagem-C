#include<stdio.h>

int main(){
    int x;
    float y;
    double z;

    printf("\n Insira um inteiro:");
    scanf("%d",&x);

    printf("\n Insira um real:");
    scanf("%f", &y);

    printf("\n Insira um double");
    scanf("%lf",&z);

    printf("\n Vitor piscando\n Inteiro:%d\n Real:%.3f\n Double:%.4lf", x, y,z);
}