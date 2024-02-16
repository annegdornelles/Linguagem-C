#include<stdio.h>
#include<string.h>

int main(){

    char p1[10], p2[10], p3[10], p4[10];

    printf("Digite a primerira palavra:");
    scanf("%s", p1);

    printf("Digite a segunda palavra:");
    scanf("%s", p2);

    printf("Digite a terceira palavra:");
    scanf("%s", p3);

    printf("Digite a quarta palavra:");
    scanf("%s", p4);

    strcat(p1, p2);
    strcat(p1, p3);
    strcat(p1, p4);

    printf("Final: %s", p1);

}