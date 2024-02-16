/*Escreva um programa que leia os dados de um funcion�rio e que aplique um
aumentosobre o seu sal�rio, sendo que a empresa definiu um aumento de 10% para
quem possuir mais de cinco anos de casa e for casado, para os demais o aumento �
de 8% Esse aumento deve ser calculado por uma fun��o. Dados de entrada: sal�rio
bruto, quantidades de anos na empresa, e estado civil (C, c, S, s). Dados de
sa�da: taxa do aumento, sal�rio inicial, e sal�rio com aumento do funcion�rio.*/

#include<stdio.h>

int aumento (float sbruto,int yr, char ecivil, float *nsalario);

main (){
    float sbruto,nsalario;
    int yr;
    char ecivil;

    printf ("Insira h� quanto tempo voce esta na empresa");
    scanf ("%d",&yr);

    printf ("\n Insira seu estado civil (C para casado e S para solteiro)");
    scanf ("\n%c",&ecivil);

    printf ("\n Insira seu salario bruto");
    scanf ("%f",&sbruto);

    aumento (sbruto,yr,ecivil,&nsalario);

    printf ("\n Salario inicial:%f \nSalario com aumento:%f",sbruto,nsalario);

    if (yr>=5&&ecivil=='C'){
        printf ("\n Taxa de aumento:10%");
    }
    else
    printf ("Taxa de aumento:8%");

    return 0;

}

int aumento (float sbruto,int yr, char ecivil, float *nsalario){
    *nsalario=0;

    if (yr>=5&&ecivil=='C'){
        *nsalario=sbruto+sbruto*0.10;
}
    else
       *nsalario=sbruto+sbruto*0.08;
}
