#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
main (){
char str1[100],str2[100],str3[100];
printf ("\n Informe nome de uma pessoa com no maximo 95 letras:");
gets (str1);
gets (str2);
strcat(str1,str2);
printf ("\n \n%s",str1);
system ("Pause");
}

//junta string
