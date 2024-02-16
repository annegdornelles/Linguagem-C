/*Qual o valor de y no final do programa? Tente primeiro descobrir e depois verifique
no computador o resultado. A seguir, escreva um /* comentário em cada comando de
atribuição explicando o que ele faz e o valor da variável à esquerda do '=' após sua
execução.*/

#include<stdio.h>
main()
 {

int y, *p, x; //p é ponteiro
y = 0;  //conteudo de y é 0
p = &y;  //p éigual o ENDEREÇO de y
x = *p;  //x é igual o CONTEUDO de p(=0)
x = 4;   //conteudo de p=4. y=4
(*p)++;  //4=4+1
x--;     //4=4-1;
(*p) += x;   //4=4+4
printf ("y = %d\n", y);
return(0);

}
