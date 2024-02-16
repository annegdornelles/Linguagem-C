#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (){
char str[10];
int vogais=0,cons=0,i=0;

   while (i<10){
       printf ("Digite 10 letras (digite letra Z para encerrar o programa)\n");
       scanf ("\n%c",&str[i]);

       if (str[i]=='Z'){
           break;
       }
       i++;
   }

   for (i=0;i<10;i++){
       if ((str[i]=='A')||(str[i]=='E')||(str[i]=='I')||(str[i]=='O')||(str[i]=='U')){
           vogais++;
       }
       else
           cons++;
}
printf ("Numero de vogais:%d\n Numero de consoantes:%d",vogais,cons);
}


