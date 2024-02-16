int CalculaFatorial (int x); /*prot�tipo da fun��o*/
/*Com o prot�tipo � poss�vel que o compilador verifique se existe erros nos
tipos de dados entre os argumentos usados para chamar uma fun��o e a
defini��o de seus par�metros.
� Al�m de verificar se a quantidade de argumentos � igual a quantidade de
par�metros, caso contr�rio, causar� erros na execu��o do programa*/
//Fun��es
void main(){
int Num,Fatorial; /*vari�veis locais s� podem ser acessadas dentro da fun��o principal.*/
printf("Digite o numero o qual deseja saber o fatorial");
scanf("%d",&Num);
Fatorial=CalculaFatorial(Num);
/*Chama a fun��o que calcula o fatorial. O valor retornado pela fun��o � atribu�do para a
vari�vel �fatorial�, que deve ser do mesmo tipo do que o tipo de dados que a fun��o
retorna. E o argumento Num � o par�metro a ser passado para a fun��o e deve ser do
mesmo tipo do argumento x da fun��o */
//9
//Fun��es
/*Qualquer modifica��o no seu valor � feito apenas na vari�vel x, n�o alterando o
valor da vari�vel usada na chamada */
printf("Fatorial: %d", Fatorial); /*Imprime o valor na tela*/
getch(); /*Retorna ap�s pressionar uma tecla*/
}
int CalculaFatorial(int x){
/*Esta fun��o recebe como par�metro o valor de x que � o n�mero que o usu�rio digitou
(Num) e retorna o fatorial desse n�mero que � um inteiro, portanto a fun��o retorna
um dado do tipo inteiro.*/ //10
//Fun��es
int cont,Fat;
//� Essas vari�veis s�o locais pois s� podem ser acessadas dentro desta fun��o,
//aqui elas s�o criadas e ap�s a execu��o da fun��o elas s�o destru�das.
Fat=1;
for(cont=1;cont<=x;cont++)
Fat=Fat*cont;
return (Fat); /*Retorna o valor calculado e atribu�do a vari�vel Fat*/
}
