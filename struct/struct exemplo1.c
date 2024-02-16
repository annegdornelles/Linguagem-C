/*Defina uma struct chamada Ponto que represente um ponto no plano cartesiano,
contendo coordenadas x e y. Em seguida, escreva um programa que crie um ponto, atribua valores às coordenadas e imprima os valores na tela.*/

#include<stdio.h>

main (){

struct ponto{
    float x;
    float y;
    }coordenadas;

printf ("Insira o ponto x:");
scanf ("%f", &coordenadas.x);

printf ("Insira o ponto y:");
scanf ("%f", &coordenadas.y);

printf ("\n Ponto x:%f\n Ponto y:%f",coordenadas.x,coordenadas.y);
}
