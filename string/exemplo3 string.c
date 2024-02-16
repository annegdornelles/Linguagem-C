#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
main (){
char str1[100],str2[100],str3[100];
printf ("\n Informe nome de uma pessoa com no maximo 95 letras:");
gets (str1);
strcpy (str2,str1);
strcpy(str2,str1);
strcpy(str3,"Voce digitou a string:");
printf ("\n \n%s%s",str3,str2);
system ("Pause");
}
