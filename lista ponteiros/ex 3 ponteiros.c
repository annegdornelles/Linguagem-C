/*Qual o valor de y no final do programa? Tente primeiro descobrir e depois verifique
no computador o resultado. A seguir, escreva um /* coment�rio em cada comando de
atribui��o explicando o que ele faz e o valor da vari�vel � esquerda do '=' ap�s sua
execu��o.*/

#include<stdio.h>
main()
 {

int y, *p, x; //p � ponteiro
y = 0;  //conteudo de y � 0
p = &y;  //p �igual o ENDERE�O de y
x = *p;  //x � igual o CONTEUDO de p(=0)
x = 4;   //conteudo de p=4. y=4
(*p)++;  //4=4+1
x--;     //4=4-1;
(*p) += x;   //4=4+4
printf ("y = %d\n", y);
return(0);

}
