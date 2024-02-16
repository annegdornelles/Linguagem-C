#include<stdio.h>


int main(){

    char string[10];

    printf("DIgite um string:");
    gets(string);

    strrev(string);

    printf("Nova: %s", string);
}