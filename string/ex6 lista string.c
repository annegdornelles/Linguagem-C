#include<stdio.h>
#include<string.h>
main (){
char str[150], str2[150];
int tam,tam2;

printf ("Digite a primeira palavra:");
gets (str);

printf ("\n Digite a segunda palavra:");
gets (str2);

tam = strlen (str);
tam2 = strlen (str2);

if (strcmp(str,str2)==0){
printf ("Mesma frase");
} //ou fzr dentro de um for e colocar str[i]

else if (tam>tam2){
printf ("A primeira palavra é maior");
}

else{
printf ("A segunda palavra é maior");
}

}
