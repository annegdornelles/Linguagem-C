#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
main (){
int notas[3][4],i,j;
char alunos[3][15];
float medialunos=0,mediaturma=0;
for (i=0;i<3;i++){
printf ("Informe o nome do aluno:");
scanf ("%s",&alunos[i]);
for (j=0;j<3;j++){
printf ("Informe a nota dos alunos\n");
scanf ("%d",&notas[i][j]);
medialunos=medialunos+notas[i][j];
}
mediaturma=mediaturma+(medialunos/4);
}
mediaturma=mediaturma/3;
printf ("Alunos com nota maior que a media:");
for (i=0;i<3;i++){
j=0;
while (j<4){
if (notas[i][j]>mediaturma)
{
printf ("\n %s %d",alunos[i],notas[i][j]);
j=3;
}
j=j+1;
}}
getch();
}
//3 alunos 4 notas podendo digitar 15 caracteres
