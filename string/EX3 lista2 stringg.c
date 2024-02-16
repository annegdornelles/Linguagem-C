/*Faça um programa que preencha uma matriz de string com os modelos de cinco carros (exemplos de
modelos: Fusca, Gol, Vectra, etc.). Em seguida, preencha um vetor com o consumo desses carros, isto e,
quantos quilômetros cada um deles faz com um litro de combustível. Calcule e mostre:
(a) O modelo de carro mais econômico;
(b) Quantos litros de combustível cada um dos carros cadastrados consome para percorrer uma distância
de 1.000 quilômetros.*/

#include<string.h>
#include<stdio.h>

main(){

char str[150],maior[150]={0};
float v[5],l[5],m=0;
int i;

for (i=0;i<5;i++){
  printf ("Digite o modelo do carro:(clique enter duas vezes para passar)");
  scanf ("\n %s",str);
  printf ("Quantos km o carro faz com 1 litro de combustivel?");
  scanf ("\n%f",&v[i]);
  }

for (i=0;i<5;i++){
 if (v[i]>m){
    m=v[i];
    strcpy(maior, str);
 }
}

for (i=0;i<5;i++){
        l[i]=v[i]*1000;
}

printf ("Modelo mais economico:%s\n",maior);

for (i=0;i<5;i++){
        printf ("1000 km:%f\n",l[i]);
}
}



