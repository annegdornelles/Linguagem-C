//- Escreva um programa em C para ler uma frase e uma letra. A seguir retirar da frase, todas
//as letras iguais à informada. Imprimir a frase modificada.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main () {
char str[150],str2[150],letra;
int i,j=0;

   puts ("Insira uma frase:");
   gets (str);

   printf ("Insira uma letra a ser retirada da frase");
   scanf ("%c",&letra);

   for (i=0;i<150;i++){
    if (str[i]!=letra){
        str2[j]=str[i];
        j++;
    }
   }
   printf ("Sua frase eh:\n");
   puts (str2);
}

