/*- Escreva um programa que calcule as seguintes operacoes entre dois numeros dados:
Adicao, Diferenca, Multiplicacao, Divisao, Exponeciacao e Media.*/

#include<stdio.h>

float div (float num1, float num2);
float mult (float num1, float num2);
float expon (float num1,float num2);
float media (float num1, float num2);
float adic (float num1,float num2);
float dif (float num1,float num2);

void main (){

float num1,num2,x;
float div2=0,mult2=0,expon2=0,media2=0,adic2=0,dif2=0;

printf ("Insira um primeiro numero");
scanf ("%f",&num1);

printf ("Insira o segundo numero");
scanf ("%f",&num2);

div2 = div(num1,num2);
mult2 = mult (num1,num2);
expon2 = expon (num1,num2);
media2 = media (num1,num2);
adic2 = adic (num1,num2);
dif2 = dif (num1,num2);

printf ("\n Soma:%f\n Diferenca:%f\n Multiplicacao:%f\n Divisao:%f\n Exponenciacao:%f\n Media:%f",adic2,dif2,mult2,div2,expon2,media2);

return 0;

}

float adic (float num1,float num2){

float adic=num1+num2;

return adic;
}

float dif (float num1,float num2){

float dif = num1-num2;

return dif;
}

float mult (float num1, float num2){

float mult = num1*num2;

return mult;
}

float div (float num1,float num2){

float div = num1/num2;

return div;
}

float expon (float num1, float num2){

float expon = pow (num1,num2);

return expon;

}

float media (float num1, float num2){

float media = (num1+num2)/2;

return media;

}

//prototipo da funcao no inicio

