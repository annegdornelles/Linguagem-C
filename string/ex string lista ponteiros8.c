#include <stdio.h>
#include <string.h>
int main ()
{
char str1[100],str2[100];
printf ("Entre com uma string: ");
gets (str1);
printf ("Entre com a segunda string:");
gets (str2);
printf ("Voce digitou a string ");
strcat (str2,str1);/* str2 armazenar� "Voce digitou a string" + o conte�do
de str1 */
printf ("\n\n %s",str2);
return(0);
}
