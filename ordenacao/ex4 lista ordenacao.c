/*- Escreva um programa que ordene alfabeticamente, de forma crescente
as letras existente numa “string” previamente pedida ao utilizador.
Esta ordenação deverá ser efetuada num vetor auxiliar que será
inicializado com os endereços de memória de cada uma das letras
existente na “string”. A construção deste vetor, o qual é constituído
por endereços de memória, não poderá alterar a “string” original.*/

#include<stdio.h>
#include<string.h>
main (){

char str[100],aux;
int tam=0,i,j;

printf ("Insira uma string: ");
scanf ("%s",str);//usar gets

tam = strlen (str);

for (i=0;i<tam;i++){
    for (j=i+1;j<tam;j++){
        if (str[i]>str[j]){
            aux=str[i];
            str[i]=str[j];
            str[j]=aux;
        }
    }
}

    printf ("Palavra na ordem crescente:%s",str);

}