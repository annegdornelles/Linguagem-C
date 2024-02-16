#include <stdio.h>
#include<string.h>

 main(){

    char str1[10], str2[10];

    printf("Digite uma string:");
    gets(str1);

    printf("Digite outra string:");
    gets(str2);


    printf("String 1:");
    puts(str1);

    printf("String 2:");
    puts(str2);

    if(strcmp(str1, str2) == 0){
        printf("SAO IGUAIS");
    } else{
    printf("SAO DIFERENTES");
    } 
    
    


}