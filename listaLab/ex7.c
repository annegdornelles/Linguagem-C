/*Faça um programa que leia as dimensões (em m) de um terreno retangular e de
uma casa (também retangular) sobre este terreno. A seguir, calcule e exiba a área
livre do terreno, em m2
 e em percentual.*/

 #include<stdio.h>

 int main(){
    float casa1, casa2, terreno1,terreno2,areaCasa, areaTerreno, areaLivre, areaPercent;

    printf("\n Insira o valor do comprimento da casa:");
    scanf("%f", &casa1);

    printf("\n Insira o valor da largura da casa:");
    scanf("%f",&casa2);

    printf("\n Insira o valor do comprimento do terreno:");
    scanf("%f", &terreno1);

    printf("\n Insira o valor da largura do terreno:");
    scanf("%f",&terreno2);

    areaCasa = casa1*casa2;

    areaTerreno = terreno1*terreno2;

    areaLivre = areaTerreno - areaCasa;

    areaPercent = 100*(areaLivre/areaTerreno);

    printf("\n A area livre em m2:%.2f\n Area livre em percentual:%.2f", areaLivre, areaPercent);


 }