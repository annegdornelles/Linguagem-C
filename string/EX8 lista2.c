/*. Criar um algoritmo que entre com uma palavra e imprima conforme exemplo a seguir: Exemplo: SONHO Como a palavra SONHO tem 5 letras
a impressão ficaria assim:
SONHO
SONHO SONHO
SONHO SONHO SONHO
SONHO SONHO SONHO SONHO
SONHO SONHO SONHO SONHO SONHO
Repare que foram impressos 5 vezes na horizontal e 5 na vertical.*/
#include<stdio.h>
#include<string.h>
main (){
    char str[100];
    int tam=0,i;

    printf ("Insira uma string:");
    gets (str);

    tam = strlen (str);

    for (i=1; i<=tam;i++) {
      for (int j=0; j<=i;j++) {
            printf("\n %s ", str);
    }
    }
}
