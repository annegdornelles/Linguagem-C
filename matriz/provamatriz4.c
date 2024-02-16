//Leia uma número N inteiro entre 3 e 10.
//b) Leia uma matriz de números reais de tamanho N x N. Obs.: Caso exista algum número menor que
//zero nesta matriz, atribua a este termo o valor zero automaticamente.
// c) Calcule e imprima a soma da diagonal principal da matriz lida, e a mesma no formato matricia


#include <stdio.h>
int main ()
{
 float mat[10][10];
 int somadiagonal=0; //igualei a soma a 0
 int i, j, n;
do {
 printf ("N=?");
 scanf ("%d", &n);
}
while (n<3||n>10); //mudei para inserir realmente um numero entre 3 e Anteriormente ele lia apenas menor que 3 e maior que 10
for (i=0; i<n; i++) {
for (j=0;j<n;j++){ //adicionei o j pára percorrer toda a matriz corretamente
 printf ("Digite o valor da posição %d,%d da matriz: ",i+1, j+1);
 scanf (" %f",&mat[i][j]); //inseri scanf para leitura da matriz
 }
 }
 for (i=0;i<n;i++){ //caso um valor seja menor que 0 igualei a 0 como pedido
for (j=0;j<n;j++){
if (mat[i][j]<0){
mat[i][j]=0;
}
}
}
for (i=0;i<n;i++){
for (j=0;j<n;j++){
        if (i==j){
somadiagonal=somadiagonal+mat[i][j]; //adicionei a soma
        }
}
}
printf ("A soma da diagonal principal da matriz e: %d\n",somadiagonal);

for (i=0;i<n;i++){
 for (j=0; j<n; j++) {
 printf ("\n Matriz:%f",mat[i][j]); //imprimi a matriz como pedido no enunciado
 printf (" ");
}
printf ("\n");
}
return 0;
}
