/*Desenvolva um programa para calcular e comparar a �rea de dois ret�ngulos A e B,
o programa dever� dizer qual ret�ngulo possui a maior �rea ou se eles possuem
tamanhos iguais. Esse programa deve possuir uma fun��o para calcular a �rea do
ret�ngulo. Dados de entrada: tamanho da base e da altura (tipo das vari�veis:
inteiro, valor em cent�metros).*/

#include<stdio.h>

int area (int basea, int ha,int baseb, int hb,int *tb,int *ta);

main (){
    int ta,tb,ab,basea,ha;
    int baseb,hb;

    printf ("Insira a base do retangulo A:");
    scanf ("%d",&basea);

    printf ("Insira a altura do retangulo A:");
    scanf ("%d",&ha);

    printf ("Insira a base do retangulo B:");
    scanf ("%d",&baseb);

    printf ("Insira a altura do retangulo B:");
    scanf ("%d",&hb);

    area(basea, ha, baseb, hb, &ta, &tb);

    if (tb>ta){
        printf ("\n Area A:%d\n Area B:%d\n Retangulo B eh maior",ta,tb);
    }
    else if (ta>tb){
       printf ("\n Area A:%d\n Area B:%d\n Retangulo A eh maior",ta,tb);
}
   else if (ta==tb){
       printf ("\n Area A:%d\n Area B:%d\n Retangulos tem a mesma area",ta,tb);
   }
}

int area (int basea, int ha,int baseb, int hb, int *tb, int *ta){
     *ta=basea*ha;
     *tb=baseb*hb;
}
