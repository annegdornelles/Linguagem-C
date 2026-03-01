#include<stdio.h>
#include<string.h>
main (){

char str[3][100],busca[100],aux,str2[3][100];
int media=0,i,j,cod;
float soma=0,nota[3];

printf ("O que deseja fazer?");
scanf ("%d",&cod);

switch (cod){

case 1:

for (i=0;i<3;i++){
    printf ("\n Insira seu nome: ");
    scanf ("%s",str[i]);
    printf ("\n Insira sua nota: ");
    scanf ("%f",&nota[i]);
}
for (i=0;i<3;i++){
    printf ("\n Nome: %s  Nota:%f",str[i],nota[i]);
}
break;

case 2:

for (i=0;i<3;i++){
    printf ("\n Insira seu nome: ");
    scanf ("%s",str[i]);
    printf ("\n Insira sua nota: ");
    scanf ("%f",&nota[i]);
    soma=soma+nota[i];
}
media = soma/3;
printf ("\n Media geral de todos os candidatos:%d",media);
break;

case 3:

for (i=0;i<3;i++){
    printf ("\n Insira seu nome: ");
    scanf ("%s",str[i]);
    printf ("\n Insira sua nota: ");
    scanf ("%f",&nota[i]);
}

for (i=0;i<3;i++){
    for (j=i+1;j<3;j++){
        if (nota[i]<nota[j]){
            aux=nota[i];
            nota[i]=nota[j];
            nota[j]=aux;
            strcpy(str2[i],str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],str2[i]);
        }
    }
}

for (i=0;i<3;i++){
    printf ("\n Em ordem decrescente de nota\n Nome:%s  Nota:%f",str[i],nota[i]);
}
break;

case 4:

for (i=0;i<3;i++){
    printf ("Insira seu nome: ");
    scanf ("%s",str[i]);
    printf ("\n Insira sua nota: ");
    scanf ("%f",&nota[i]);
}

    printf ("\n Insira um nome que voce deseja procurar: ");
    scanf ("%s",busca);//gets

    for (i=0;i<3;i++){
        if (strcmp(busca,str[i])==0){
            printf ("\n Nome:%s  Nota:%f",busca,nota[i]);
            break;
        }
        else
        printf ("\n Candidato nao encontrado");
    }
    break;


    //

default:
printf ("Codigo invalido");
}
}
