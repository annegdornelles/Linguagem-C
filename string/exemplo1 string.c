#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
main (){
int i;
char nome[7];
printf ("\n Informe nome de uma pessoa com no maximo 7 letras:");
scanf ("%s",nome);
for (i=0;i<7;i++){
printf ("%c",nome[6-i]);
}
getch();

}
//imprime ao contrario
