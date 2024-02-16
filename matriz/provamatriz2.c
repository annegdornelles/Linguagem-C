#include <stdio.h>
#define TAM 20 //mudei a constante para 20 pois pede um vetor que armazene 20 valores
int main() {
 int vet[TAM], i, maior=0, posMaior, menor=9238629876, posMenor; //igualei as variaveis maior igual a 0 e menor a um numero pouco provavel de se digitar
for (i=0;i<TAM;i++){ //inseri o for para ler o vetor
printf ("Insira o vetor:"); //pedi para o usuario fornecer o vetor como pede o enunciado
 scanf("%d", &vet[i]); //mudei para "%d"
}
 posMaior = 0;
 for (i=0;i<TAM;i++) {
        if (vet[i]>maior){ //inseri o if para melhor desempenho do codigo
            maior=vet[i];
 posMaior = i;
 }
 }
posMenor = 0;
 for (i = 0; i < TAM; i++) {
 //adicionei o if para melhor verificacao do menor valor
     if (vet[i]<menor){ //inseri o v[i] para inserir a posicao 0 nao incluida no for
        menor=vet[i];
        posMenor=i;
     }
 }
 //proxima linha sera adicionada ao codigo:

 //fim da linha adicionada
 printf("\n Vetor: ");
 for (i = 0; i < TAM; i++) {
 }
 printf("\nMaior valor: %d - posicao: %d", maior, posMaior+1); //mudei para "%d" inves de "%i"
 printf("\nMenor valor: %d - posicao: %d", menor, posMenor+1); //mudei para "%d" inves de "%i"
  for (i=1; i < TAM; i++) {
        if (vet[i]==vet[i - 1]) {
            printf("\nPosicoes iguais: %d", i);
        }
    }
 return 0;
}

