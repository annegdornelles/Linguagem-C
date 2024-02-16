/*Escreva em C a função CONTA. A função recebe uma string (nome) e devolve via
parâmetros: número letras maiúsculas e o número letras minúsculas. A função retorna
o total de letras do nome.*/

#include <stdio.h>
#include <string.h>

int conta (char str [],int *maiusc,int *min,int *t);

main (){

char str[100];
int maiusc=0,min=0,t=0;

printf ("Insira a string:");
gets (str);

conta(str, &maiusc, &min, &t);

printf ("\n Total:%d\n Numero maiusculas:%d\n Numero minusculas:%d",t,maiusc,min);

return 0;

}

int conta (char str[],int *maiusc,int *min,int *t){

*t=strlen (str);

for (int i=0;i<*t;i++){

if (str[i]>='a'&&str[i]<='z'){
(*min)++;
}

else
(*maiusc)++;
}

}
