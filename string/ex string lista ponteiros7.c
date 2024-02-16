/*Escreva um procedimento em linguagem C que recebe 3 cadeia de caracteres de
tamanho máximo 50, e as imprime na tela em ordem alfabética.*/

#include<stdio.h>
#include<string.h>
main (){

char str[3][50],aux;
int i,j;

for (i=0;i<3;i++){
printf ("Insira a string:");
scanf ("%s",str[i]);
}

for (i=0;i<3;i++){
for (j=i+1;j<3;j++){
if (str[i]>str[j]){
strcpy(aux,str[i]);
strcpy(str[i],str[j]);
strcpy(str[j],aux);
}
}}

for (i=0;i<3;i++){
printf ("\n string:%s",str[i]);
}
}
