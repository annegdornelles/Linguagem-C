/*Fazer um programa que realize o cadastro de contas bancárias com as seguintes informações:
Número da conta, nome do cliente e saldo. O banco permitirá o cadastramento de apenas 15 contas e
não pode haver mais de uma conta com o mesmo número. Crie o menu de opções a seguir:
Menu de Opções:
1. Cadastrar contas
2. Visualizar todas as contas
3. Excluir a conta com menor saldo(suponha que não tem saldos iguais)
4. Sair*/

#include<stdio.h>
#include<string.h>
#define u 3

typedef struct usuario{
    char nome[50];
    int conta;
    float saldo;
    };

main (){
   struct usuario banco[u];
   int i,cadastro=0,num,indice,j;
   int menor = banco[0].saldo;
   char r;//='S';

   for (i=0;i<u;i++){
      banco[i].conta=0;}

   do{

   printf ("\n O que deseja fazer?\n 1 - cadastrar contas\n 2 - visualizar contas\n 3 - excluir conta com menor saldo\n 4 - sair");
   scanf ("%d",&num);

   switch(num){

   case 1:

   for (i=0;i<u;i++){
      printf ("\n Insira seu nome:");
      scanf ("%s",banco[i].nome);

      printf ("\n Insira sua conta:");
      scanf ("%d",&cadastro);

      int existe = 0;
      for (int j = 0; j < u; j++) {
        if (cadastro == banco[j].conta && banco[j].conta != 0) {
            printf("\nO numero dessa conta ja existe. Nao eh possivel se cadastrar.\n");
            existe = 1;
            break;
                }
            }

        if (existe == 0) {
            banco[i].conta = cadastro;
            printf("Insira seu saldo: ");
            scanf("%f", &banco[i].saldo);
            }
        else {
                break; // Sai do loop se a conta já existir
            }
        }

    break;

    case 2:

    for (i=0;i<u;i++){
       printf ("\n Nome:%s\n Conta:%d\n Saldo:%f",banco[i].nome,banco[i].conta,banco[i].saldo);
       }

    break;

    case 3:

    for (i=0;i<u;i++){

    if (menor>banco[i].saldo){
       indice=i;
    }

    printf ("\n Menor conta:");
    printf ("\n Nome:%s\n Conta:%d\n Saldo:%f",banco[indice].nome,banco[indice].conta,banco[indice].saldo);
    break;
}
     break;

     case 4:
     printf ("Saida");
     break;

}
}while (num!=4);
   }
