/*Elabore uma função que receba três nnotas de um aluno como parâmetro e uma letra. Se a
letra for ‘A’, a função deve calcular a média aritmética das notas do aluno; se a letra for ‘P’,
deverá calcular a média ponderada, com pesos 5,3 e 2. Retorne a média calculada para o
programa principal.*/

#include<stdio.h>
#include<string.h>

void nota (float nota1, float nota2, float nota3, char letra);

main (){
char letra;
float nota1,nota2,nota3,ba,bp;

printf ("Insira a nota 1");
scanf ("%f",&nota1);

printf ("Insira a nota 2");
scanf ("%f",&nota2);

printf ("Insira a nota 3");
scanf ("%f",&nota3);

printf ("Digite a letra: (p/a)");
scanf ("%c",&letra);

if (letra=='a'){
    ba=nota (float nota1, float nota2, float nota3, char letra);
}

if (letra=='p'){
    bp=nota (float nota1, float nota2, float nota3, char letra);
}

}

void nota (float nota1, float nota2, float nota3, char letra){

float media=0;

if (letra=='a'){
media=(nota1+nota2+nota3)/3;
printf ("Media aritmetica:%f",media);
}

if (letra=='p'){
media = (nota1*5+nota2*3+nota3*2)/10;
printf ("Media ponderada:%f", media);
}

}

