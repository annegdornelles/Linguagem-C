int CalculaFatorial (int x); /*protótipo da função*/
/*Com o protótipo é possível que o compilador verifique se existe erros nos
tipos de dados entre os argumentos usados para chamar uma função e a
definição de seus parâmetros.
• Além de verificar se a quantidade de argumentos é igual a quantidade de
parâmetros, caso contrário, causará erros na execução do programa*/
//Funções
void main(){
int Num,Fatorial; /*variáveis locais só podem ser acessadas dentro da função principal.*/
printf("Digite o numero o qual deseja saber o fatorial");
scanf("%d",&Num);
Fatorial=CalculaFatorial(Num);
/*Chama a função que calcula o fatorial. O valor retornado pela função é atribuído para a
variável “fatorial”, que deve ser do mesmo tipo do que o tipo de dados que a função
retorna. E o argumento Num é o parâmetro a ser passado para a função e deve ser do
mesmo tipo do argumento x da função */
//9
//Funções
/*Qualquer modificação no seu valor é feito apenas na variável x, não alterando o
valor da variável usada na chamada */
printf("Fatorial: %d", Fatorial); /*Imprime o valor na tela*/
getch(); /*Retorna após pressionar uma tecla*/
}
int CalculaFatorial(int x){
/*Esta função recebe como parâmetro o valor de x que é o número que o usuário digitou
(Num) e retorna o fatorial desse número que é um inteiro, portanto a função retorna
um dado do tipo inteiro.*/ //10
//Funções
int cont,Fat;
//– Essas variáveis são locais pois só podem ser acessadas dentro desta função,
//aqui elas são criadas e após a execução da função elas são destruídas.
Fat=1;
for(cont=1;cont<=x;cont++)
Fat=Fat*cont;
return (Fat); /*Retorna o valor calculado e atribuído a variável Fat*/
}
